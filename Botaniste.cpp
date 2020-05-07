#ifndef BOTANISTE_CPP
#define BOTANISTE_CPP

#include <iostream>
#include <string>
#include <vector>

#include "Botaniste.h"

int Botaniste::getArgent(){
    //std::endl;
    return _Argents;
}

void Botaniste::Argent(){
    std::cout << "Vous avez " << _Argents << "Euros" << std::endl;
}


Botaniste::Botaniste(std::vector<Plante*> jardin, int argent) : _Jardin(jardin), _Argents(argent){};

#endif
