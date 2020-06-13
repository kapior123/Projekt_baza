#ifndef NAUCZYCIEL_H
#define NAUCZYCIEL_H
#include "osoba.h"
#include "student.h"

class Nauczyciel: virtual public Osoba{
    public:
        Nauczyciel()=default;
        Nauczyciel(std::string a,std::string b){
            write_imie(a);
            write_nazwisko(b);
        }
        std::string get_imie();
        std::string get_nazwisko();
        void write_imie(std::string a);
        void write_nazwisko(std::string a);
        void edit_student(Student **&studenci,Student **&k_studenci, size_t size,size_t back_size);
        virtual ~Nauczyciel()=default;
};


#endif
