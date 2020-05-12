#ifndef DOKTORANT_H
#define DOKTORANT_H
#include "student.h"

class Doktorant: public Student{
    private:
        std::string grupa;
        std::string promotor;
    public:
        Doktorant():grupa("brak"),promotor("brak") {};
        std::string get_grupa();
        std::string get_promotor();

        void write_grupa(std::string a);
        void write_promotor(std::string a);
        friend void menu_edit_doktorant(Doktorant **&S,size_t &size);
        friend std::ostream& operator<<(std::ostream& out, Doktorant *&obj);
        ~Doktorant();
};



#endif
