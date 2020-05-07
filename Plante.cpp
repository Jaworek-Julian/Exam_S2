#ifndef PLANTE_CPP
#define PLANTE_CPP

#include <iostream>

#include "Plante.h"


// _Croissance _Santee _Blessure _Noyade;

void Plante::engrai(){
    _Santee += 5;
}

void Plante::tailler(){
    _Blessure += 5;
    _Taille -= 10;

    if (_Blessure >= 50){
        _Santee -= 5;
    }

    if (_Taille >= 50){
        _Santee -= 5;
        _Noyade += 10;

        if (_Noyade >= 50){
            _Santee -= 5;
        }
    }
}


void Plante::arroser(){
        _Santee += 5;
}

void Plante::nuit(){
        _Santee += 10;
        _Blessure -= 5;
        _Taille += 5;
        _Noyade -= 5;

        if (_Santee <= 20){
            _Croissance -= 10;

        }else if (_Santee <= 30){
            _Croissance -= 5;

        }else if (_Santee <= 50){
            _Croissance += 0;

        }else if (_Santee <= 70){
            _Croissance += 10;

        }else if (_Santee <= 100){
            _Croissance += 20;

        }else if (_Santee <= 0){
            //delete Plante ;
        };
}

void Plante::info(){
    std::cout << std::endl << "La  plante s'appele " << _Name << std::endl
    << "Sa maturitee est a " << _Croissance << "%"<< std::endl
    << "Sa santee est a " << _Santee << "%" << std::endl
    << "Son niveau de souffrance est a " << _Blessure << std::endl
    << "Sa taille est a " << _Taille << std::endl
    << "Le niveau de l'eau est a " << _Noyade<< "%" << std::endl << std::endl;
}

int Plante::getCroissance(){
    return _Croissance;
}

Plante::Plante () : _Name ("Tulipe"), _Croissance(0),  _Santee(50), _Blessure(0), _Taille(10), _Noyade(0){};
Plante::Plante (std::string name) : _Name (name), _Croissance(0) , _Santee(20), _Blessure(0), _Taille(10), _Noyade(0){};


#endif
