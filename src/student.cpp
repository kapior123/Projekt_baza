#include "student.h"
//metody klasy Student i klasy zagnieżdzonej Oceny

std::string  Student::get_imie(){return imie;}
void  Student::write_imie(std::string x){ imie = x; }

std::string  Student::get_nazwisko(){ return nazwisko; }
void  Student::write_nazwisko(std::string x){ nazwisko = x; }

size_t  Student::get_numer_al(){ return Numer_albumu; }
void  Student::write_Numer_al(size_t x){ Numer_albumu = x; }

Student::Oceny* Student::class_oceny(){ return oceny; }

void Student::Oceny::write_przedmiot(size_t index, std::string x){ przedmiot[index] = x; }
void Student::Oceny::write_ocena(size_t index, unsigned short int x){ ocena[index] = x; }
size_t Student::Oceny::write_ocena(){ return size; }



Student::Student( Student *& kstudent){
    Numer_albumu = kstudent->Numer_albumu;
    imie =  kstudent->imie;
    nazwisko = kstudent->nazwisko;
    oceny = kstudent->oceny;
}


void Student::Oceny::dodaj_przedmiot(){
    std::string* tmp = new std::string[size + 1];
    unsigned short int* tmp_ocena = new unsigned short int[size + 1];

    if(size == 0){
        tmp = new std::string; 
        tmp_ocena = new unsigned short int;
    }
    else{
        for (size_t i = 0; i < size; i++)
        {
            tmp[i] = przedmiot[i];
            tmp_ocena[i] = ocena[i];
        }
    }
    ++size;
    przedmiot = tmp;
    ocena = tmp_ocena;


}

void Student::Oceny::print_przedmioty(){
    for (size_t i = 0; i < size; i++)
    {
        std::cout<<i<<". Przedmiot: "<<przedmiot[i]<<" Ocena: "<<ocena[i]<<std::endl;
    }
}
// edycja ocen
void Student::Oceny::edytuj(size_t index){
    system("clear");
    auto wyb = 0;
    std::string tmp = "";unsigned short int tmp_int = 0;
    std::cout<<"Co chesz edytowac: "<<std::endl;
    std::cout<<"1. Nazwa przedmiotu"<<std::endl;
    std::cout<<"2. Ocena"<<std::endl;
    std::cin>>wyb;

    switch(wyb){
        case 1:{
            system("clear");
            std::cout<<"Podaj nazwe: "<<std::endl;
            std::cin>>tmp;
            write_przedmiot(index,tmp);
            system("clear");
            break;
        }
        case 2:{
            system("clear");
            std::cout<<"Podaj ocene: "<<std::endl;
            std::cin>>tmp_int;
            write_ocena(index,tmp_int);
            system("clear");
            break;
        }
        case 3:
            break;
        default:{
             std::cout<<"Brak takiej opcji"<<std::endl;
             break;
        }
           
    }
}
Student::~Student(){
    delete oceny;
}



