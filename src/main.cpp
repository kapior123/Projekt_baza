#include "student.h"
#include "functions.h"

/* TODO:
 *      [!] Odczytywanie imion i nazwisk z plików
 *      [!] Implementacja kontenerów STL
 *      [!] Przeciąrzyć operatory
 *      [!] Dodać przestrzenie nazw
 * */

int main(){
    system("clear");
    size_t size(0), size_dok(0),back_size(0);
    Nauczyciel *_nauczyciel = new Nauczyciel;
    Student **studenci = nullptr;
    Student **k_studenci = nullptr;
    Doktorant **doktorant = nullptr;

    while(true){
    unsigned short int wybor;
    std::cout<<"Menu Bazy"<<std::endl<<
        "1. Menu edycji studentow"<<std::endl<<
        "2. Menu edycji doktorantow"<<std::endl<<
        "3. Wyjscie"<<std::endl;
    std::cin>>wybor;

    switch (wybor){
        case 1:{
                system("clear");
                std::cout<<"Menu edycji studentow"<<std::endl;
                _nauczyciel->edit_student(studenci, k_studenci, size, back_size);
                break;
               }
        case 2:{
                system("clear");
                std::cout<<"Menu edycji doktorantow"<<std::endl;
                menu_edit_doktorant(doktorant,size_dok);          
                break;
               }
        case 3:{
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
