#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <cstdlib>


class Student{
    private:
        size_t Numer_albumu;
        std::string imie;
        std::string nazwisko;

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
        Student():Numer_albumu(0), imie("brak"), nazwisko("brak"){oceny = new Oceny;};
        Student(Student *&kstudent);
        Oceny* class_oceny();
        std::string get_imie();
        void write_imie(std::string x);
        std::string get_nazwisko();
        void write_nazwisko(std::string x);
        size_t get_numer_al();
        void write_Numer_al(size_t x);
        friend std::ostream& operator<<(std::ostream &out, Student *&obj);
        
        ~Student();
};
#endif
