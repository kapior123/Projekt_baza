#ifndef STUDENT_H
#define STUDENT_H
#include "osoba.h"
#include <cstdlib>


class Student:virtual public Osoba{
    private:
        size_t Numer_albumu;
        class Oceny{
            private:
                std::string *przedmiot;
                unsigned short int *ocena;
                size_t size;
            public:
                Oceny():przedmiot(nullptr), ocena(nullptr), size(0) {};
                void write_przedmiot(size_t index, std::string x);
                void write_ocena(size_t index, unsigned short int x);
                void dodaj_przedmiot();
                void print_przedmioty();
                void edytuj(size_t index);
                size_t write_ocena();
        };
        
        Oceny *oceny;
    public:
        Student(): Numer_albumu(0){oceny = new Oceny;};
        Student(Student *&kstudent);
        Oceny* class_oceny();
        std::string get_imie();
        std::string get_nazwisko();
        void write_imie(std::string a);
        void write_nazwisko(std::string a);
        size_t get_numer_al();
        void write_Numer_al(size_t x);
        friend std::ostream& operator<<(std::ostream &out, Student *&obj);
        
        ~Student();
};
#endif
