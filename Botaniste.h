#ifndef BOTANISTE_H
#define BOTANISTE_H

#include <string>
#include <vector>

#include "Plante.h"

class Botaniste{
    private:

        std::vector<Plante*> _Jardin;
        int _Argents;

    public:

        Botaniste(std::vector<Plante*> jardin, int argent);
        int getArgent();
        void Argent();
};

#endif
