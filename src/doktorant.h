#ifndef DOKTORANT_H
#define DOKTORANT_H
#include "student.h"
#include "nauczyciel.h"
//class osoba :: student osoba , doktorant dziedziczy po student, po osobie nauczyciel, doktorant po nauczyciel
//class student:virtual public osoby
//class nauczyciel:virtual public osoby
class Doktorant: public Student, public Nauczyciel{
    private:
        std::string grupa;
        std::string promotor;
    public:
        Doktorant():grupa("brak"),promotor("brak") {
            Student();
            Nauczyciel();
        };
        std::string get_grupa();
        std::string get_promotor();
        void write_imie(std::string a);
        void write_nazwisko(std::string a);

        std::string get_imie();
        std::string get_nazwisko();

        void write_grupa(std::string a);
        void write_promotor(std::string a);
        friend void menu_edit_doktorant(Doktorant **&S,size_t &size);
        friend std::ostream& operator<<(std::ostream& out, Doktorant *&obj);
        ~Doktorant()=default;
};



#endif
