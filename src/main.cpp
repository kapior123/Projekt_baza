#include "student.h"
#include "functions.h"

int main(){
    system("clear");
    size_t size = 0,size_dok = 0,back_size = 0,index = 0;
    Student **studenci = nullptr;
    Student **k_studenci = nullptr;
    Doktorant **doktorant = nullptr;

    while(true){
    unsigned short int wybor;
    std::cout<<"Menu Bazy"<<std::endl<<
        "1. Dodaj rekord"<<std::endl<<
        "2. Usun rekord"<<std::endl<<
        "3. Wypisz rekordy"<<std::endl<<
        "4. Edytuj rekord"<<std::endl<<
        "5. Menu edycji przedmiotow"<<std::endl<<
        "6. Menu edycji doktorantow"<<std::endl<<
        "8. Przywroc Baze"<<std::endl<<
        "9. Usun Baze"<<std::endl<<
        "0. Wyjdz"<<std::endl;
    std::cin>>wybor;

    switch (wybor){
        case 1:{
            system("clear");
            dodaje<Student>(studenci,size);
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
                system("clear");
                std::cout<<"Menu edycji doktorantow"<<std::endl;
                menu_edit_doktorant(doktorant,size_dok);          
                break;
               }
        
        case 8:{
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
        
        case 9:{
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
        case 0:{
            std::cout<<"Wychodzienie"<<std::endl;
            return 1;
            break;
        }   
        default:{
            std::cout<<"Brak takiej funkcji"<<std::endl;
            break;
        }
    }
    }
    return 0;
}
