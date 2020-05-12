#include "doktorant.h"
#include "functions.h"

std::string Doktorant::get_grupa(){ return grupa; }
std::string Doktorant::get_promotor(){ return promotor; }

void Doktorant::write_grupa(std::string a){ grupa = a; }
void Doktorant::write_promotor(std::string a){ promotor = a; }


void menu_edit_doktorant(Doktorant **&S,size_t &size){
    size_t swi = 0, index; 
    while(swi != 6){
    swi = 0, index = 0;
    std::cout<<"Menu doktorantow"<<std::endl
        <<"1. Dodaj doktoranta"<<std::endl
        <<"2. Edytuj doktoranta"<<std::endl
        <<"3. Wypisz doktorantow"<<std::endl
        <<"4. Usun doktoranta"<<std::endl
        <<"5. Usun baze"<<std::endl
        <<"6. Powrot do menu"<<std::endl;
    std::cin>>swi;
    switch(swi){
        case 1:{
                system("clear");
                dodaje(S,size);
                break;
               }
        case 2:{
                system("clear");
                print(S,size);
                std::cout<<"Podaj id: ";
                std::cin>>index;
                uzupelnij_doktoranta(S,size,index);
                system("clear");
                break;
               }
        case 3:{
                system("clear");
                print(S,size); 
                break;
               }
        case 4:{
                system("clear");
                print(S,size);
                std::cout<<"Podaj id: ";
                std::cin>>index;
                usun(S,size,index);
                system("clear");
                break;
               }
        case 5:{
                usun(S,size);
                system("clear");
                break;
               }
        case 6:{
                system("clear");
                std::cout<<"Powracanie do menu"<<std::endl;
                break;
               }
        default:{
               system("clear");
               std::cout<<"Brak takiej opcji"<<std::endl;
               break;
                }
    }
    }
}

std::ostream& operator<<(std::ostream &out, Doktorant *&obj){
    out<<" Numer albumu: "<<obj->Doktorant::get_numer_al()
        <<" Nazwisko: "<<obj->Doktorant::get_nazwisko()
        <<" Imie: "<<obj->Doktorant::get_imie()
        <<" Promotor: "<<obj->Doktorant::get_promotor()
        <<" Grupa: "<<obj->Doktorant::get_grupa();
    return out;
}



Doktorant::~Doktorant(){

}
