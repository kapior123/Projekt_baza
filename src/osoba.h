#ifndef OSOBA_H
#define OSOBA_H

#include <iostream> 

class Osoba{
    public:
        std::string imie;
        std::string nazwisko;
        Osoba():imie("brak"),nazwisko("brak"){};
        virtual void write_imie(std::string a)=0;
        virtual void write_nazwisko(std::string a)=0;
        virtual std::string get_imie()=0;
        virtual std::string get_nazwisko()=0;

        ~Osoba()=default;
};


#endif
