#include "functions.h"
#include "doktorant.h"
//funkcje globalne

void print( Student **&S, size_t size){
    for (size_t i = 0; i < size; i++)
    {
        std::cout<<i<<". Numer albumu: "<<S[i]->get_numer_al()<<
            " Imie: "<<S[i]->get_imie()<<
            " Nazwisko: "<<S[i]->get_nazwisko()<<std::endl;
    }
}
void uzupelnij_rekord( Student **&S, size_t size, size_t index){
    if(index<0 || size<index) std::cout<<"brak takiego rekordu"<<std::endl;
    else{
        std::cout<<index<<std::endl;
        std::string string_tmp = ""; size_t int_tmp = 0;
        std::cout<<"Podaj imie: ";
        std::cin>>string_tmp;
        S[index]->write_imie(string_tmp);
        std::cout<<"Podaj nazwisko: ";
        std::cin>>string_tmp;
        S[index]->write_nazwisko(string_tmp);
        std::cout<<"Podaj numer albumu: ";
        std::cin>>int_tmp;
        S[index]->write_Numer_al(int_tmp);
        std::cout<<"Uzupelniono rekord"<<std::endl;
    }
}

void menu_edycji_przedmiotow(Student **&S, size_t index){
    short unsigned int wyb;
    std::cout<<"1. dodaj przedmiot"<<std::endl;
    std::cout<<"2. pokaz przedmioty"<<std::endl;
    std::cout<<"3. edytuj przedmiot"<<std::endl;
    std::cin>>wyb;
    switch (wyb)
    {
    case 1:{
        system("clear");
        S[index]->class_oceny()->dodaj_przedmiot();
        break;
    }
    case 2:{
        system("clear");
        S[index]->class_oceny()->print_przedmioty();
        break;
    }
    case 3:{
        system("clear");
        S[index]->class_oceny()->print_przedmioty();
        std::cout<<"Podaj id przedmiotu do edycji: "<<std::endl;
        std::cin>>wyb;
        system("clear");
        S[index]->class_oceny()->edytuj(wyb);
        break;
    }
    default:
        break;
    }

}
void uzupelnij_doktoranta(Doktorant **&S, size_t size, size_t index){
    if(index<0 || size<index) std::cout<<"brak takiego rekordu"<<std::endl;
    else{
        std::cout<<index<<std::endl;
        std::string string_tmp = ""; size_t int_tmp = 0;
        std::cout<<"Podaj imie: ";
        std::cin>>string_tmp;
        S[index]->write_imie(string_tmp);
        std::cout<<"Podaj nazwisko: ";
        std::cin>>string_tmp;
        S[index]->write_nazwisko(string_tmp);
        std::cout<<"Podaj numer albumu: ";
        std::cin>>int_tmp;
        S[index]->write_Numer_al(int_tmp);
        std::cout<<"Podaj grupe: ";
        std::cin>>string_tmp;
        S[index]->write_grupa(string_tmp);
        std::cout<<"Podaj promotora: ";
        std::cin>>string_tmp;
        S[index]->write_promotor(string_tmp);
        std::cout<<"Uzupelniono rekord"<<std::endl;
    }
}

void print( Doktorant **&S, size_t size){
    for (size_t i = 0; i < size; i++)
    {
        std::cout<<i<<". Numer albumu: "<<S[i]->get_numer_al()<<
            " Imie: "<<S[i]->get_imie()<<
            " Nazwisko: "<<S[i]->get_nazwisko()<<
            " Grupa: "<<S[i]->get_grupa()<<
            " Promotor: "<<S[i]->get_promotor()<<std::endl;
    }
}
