#include "doktorant.h"
#include "functions.h"

std::string Doktorant::get_grupa(){
    return grupa;
}
std::string Doktorant::get_promotor(){
    return promotor;
}

void Doktorant::write_grupa(std::string a){
    grupa = a;
}
void Doktorant::write_promotor(std::string a){
    promotor = a;
}


void menu_edit_doktorant(Doktorant **&S,size_t &size){
    size_t swi = 0,index = 0;
    std::cout<<"Menu doktorantow"<<std::endl
        <<"1. Dodaj doktoranta"<<std::endl
        <<"2. Edytuj doktoranta"<<std::endl
        <<"3. Wypisz doktorantow"<<std::endl
        <<"4. Usun doktoranta"<<std::endl
        <<"5. Usun baze"<<std::endl;
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
                break;
               }
        case 5:{
                system("clear");
                usun(S,size);
                break;
               }
    }
}
