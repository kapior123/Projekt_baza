#include "functions.h"
#include "osoba.h"
/* TODO:
 *      [!] Implementacja kontenerów STL
 *      [!] Przeciąrzyć operatory
 *      [!] Dodać przestrzenie nazw
 * */
enum{
    edycja_studentow = 1,
    edycja_doktorantow = 2,
    wychodzenie = 3
};
using namespace func;

int main(){
    std::string imie,nazwisko;
    std::cout<<"Podaj imie i nazwisko nauczyciela"<<std::endl;
    std::cin>>imie;
    std::cin>>nazwisko;

    if(imie == "" && nazwisko == ""){
        std::cout<<"Nie podano danych nauczyciela"<<std::endl;
        return 2;
    }
    system("clear");
    size_t size(0), size_dok(0),back_size(0);
    Nauczyciel *_nauczyciel = new Nauczyciel(imie,nazwisko);
    Student **studenci = nullptr;
    Student **k_studenci = nullptr;
    Doktorant **_doktorant = nullptr;

    while(true){
        unsigned short int wybor;
        std::cout<<"Menu Bazy"<<std::endl<<
            "1. Menu edycji studentow"<<std::endl<<
            "2. Menu edycji doktorantow"<<std::endl<<
            "3. Wyjscie"<<std::endl;
        std::cin>>wybor;

        switch (wybor){
            case edycja_studentow:{
                                      system("clear");
                                      std::cout<<"Menu edycji studentow"<<std::endl;
                                      _nauczyciel->edit_student(studenci, k_studenci, size, back_size);
                                      break;
                                  }
            case edycja_doktorantow:{
                                        system("clear");
                                        std::cout<<"Menu edycji doktorantow"<<std::endl;
                                        menu_edit_doktorant(_doktorant,size_dok);          
                                        break;
                                    }
            case wychodzenie:{
                                 delete _nauczyciel;
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
