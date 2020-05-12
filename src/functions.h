#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "student.h"
#include "doktorant.h"
#include <stdio.h>
#include <string.h>

void print( Student **&S, size_t size);
template<typename T>
void dodaje( T **&S, size_t &size){

        auto** tmp = new  T*[size + 1];
    
        if(size == 0){
            tmp[size] = new T;
            }
        else{
            for(size_t i = 0; i < size; i++){
                tmp[i] = S[i];
                tmp[size] = new T; 
            }
        }
        ++size;
        S = tmp;
}

template <typename T>
void usun( T **&S, size_t &size){
    for (size_t i = 0; i < size; i++){
        delete S[i];
    }
    delete [] S;
    size = 0;
    S = nullptr;
}

template <typename T>
void usun( T **&S, size_t &size, size_t index){
    if(index < size){
        auto** tmp = new  T*[size - 1];
        short int j = -1;
        for (size_t i = 0; i < size; i++){
            if(i != index){
                j++;
                tmp[j] = S[i];
            }
        }
        delete [] S;
        --size;
        S = tmp;
        std::cout<<"Rekord został usiniety"<<std::endl;
    }
    else{
        std::cout<<"Index jest nie istnieje"<<std::endl;
    }
}
void uzupelnij_rekord( Student **&S, size_t size, size_t index);
void menu_edycji_przedmiotow( Student **&S, size_t index);
void uzupelnij_doktoranta(Doktorant **&S,size_t size,size_t index);
void print( Doktorant **&S, size_t size);
#endif

