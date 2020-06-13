#include "nauczyciel.h"
#include "functions.h"
std::string Nauczyciel::get_imie(){ return imie; }
std::string Nauczyciel::get_nazwisko(){ return nazwisko; }

void Nauczyciel::write_imie(std::string a){ imie = a; }
void Nauczyciel::write_nazwisko(std::string a){ nazwisko = a; }

void Nauczyciel::edit_student(Student **&studenci, Student **&k_studenci, size_t size, size_t back_size){
    using namespace func;
    int wyb(0),index(0);
    while(wyb !=8){
        
        std::cout<<"Menu studenta"<<std::endl<<
        "1. Dodaj studenta"<<std::endl<<
        "2. Usun studenta"<<std::endl<<
        "3. Wypisz studenta"<<std::endl<<
        "4. Edytuj studenta"<<std::endl<<
        "5. Menu edycji przedmiotow"<<std::endl<<
        "6. Przywroc studentow"<<std::endl<<
        "7. Usun Baze studentow"<<std::endl<<
        "8. Powrot do menu glownego"<<std::endl;
        std::cin>>wyb; 
        switch(wyb){

        case 1:{
            system("clear");
            dodaje(studenci,size);
            std::cout<<"Dodano rekord"<<std::endl;
            break;
        }
        case 2:{
            system("clear");
            if(studenci != nullptr){
                print(studenci,size);
                std::cout<<"Podaj numer rekordu do usuniecia:"<<std::endl;
                std::cin>>index;
                usun(studenci,size,index);
                break;
            }
            else{
                std::cout<<"Brak bazy"<<std::endl;
                break;
            }
        }
        case 3:{
            system("clear");
            print(studenci,size);
            std::cout<<"Wypisano rekordy"<<std::endl;
            break;
        }
        case 4:{
            system("clear");
            print(studenci,size);
            std::cout<<"Podaj numer rekordu do edycji: "<<std::endl;
            std::cin>>index;
            uzupelnij_rekord(studenci,size,index);
            break;
        }
        case 5:{
            system("clear");
            if(studenci != nullptr){
                print(studenci,size);
                std::cout<<"Podaj numer studenta ktorego przedmioty chcesz zedytowac: "<<std::endl;
                std::cin>>index;
                menu_edycji_przedmiotow(studenci,index);
                break;
            }
            else{
                std::cout<<"Brak bazy"<<std::endl;
                break;
            }
        }
        case 6:{
            if(k_studenci != nullptr){
                studenci = k_studenci;
                size = back_size;
                system("clear");
                std::cout<<"Baza przywrocona"<<std::endl;
            }
            else{
                system("clear");
                std::cout<<"Brak bazy do przywrocenia"<<std::endl;
            }
                break;
        }
        
        case 7:{
            if(studenci != nullptr){
                k_studenci = new Student*[size+1];
                for(size_t i = 0;i<size;i++){
                    k_studenci[i] = new Student(studenci[i]);
                }

                back_size = size;
                size = 0;
                usun(studenci,size);
                system("clear");
                std::cout<<"Baza usunieta"<<std::endl;
            }
            else{
                system("clear");
                std::cout<<"Brak bazy"<<std::endl;
           }
            break;
        }
        case 8:{
                   system("clear");
                   std::cout<<"wracanie"<<std::endl;
                   break;
               }
    
        }
    }
}
