#ifndef PLANTE_H
#define PLANTE_H

class Plante{
    private:
        std::string _Name;
        int _Croissance;
        int _Santee;
        int _Blessure;
        int _Taille;
        int _Noyade;
    public:
        Plante();
        Plante(std::string name);
        void engrai();
        void tailler();
        void arroser();
        void info();
        int getCroissance();
        void nuit();
        int getArgent();
};

#endif
