#include <iostream>
#include <vector>
#include <string>

#include "Botaniste.cpp"
#include "Plante.cpp"

using namespace std;

int main(){

    int choix = 1;

    Plante * Capucine = new Plante("Capucine");

    cout << "Bonjours voici votre plante: " << endl;
    Capucine -> info();


    vector<Plante*> jardin;

    jardin.push_back(Capucine);


    Botaniste * Joueur = new Botaniste(jardin, 10);

    while(Capucine -> getCroissance() <= 100){

        while(choix != 0){

            cout << "Vous avez le choix entre:" << endl
            << "0: aller vous coucher" << endl
            << "1: lui donner de engrai" << endl
            << "2: la tailler" << endl
            << "3: l'arroser" << endl
            << "4: tout connaitre d'elle" << endl
            << "5: acheter de l'engré pour 5 Euros" << endl
            << "6: acheter une plante pour 20 Euros" << endl << endl;

            // Joueur -> Argent;

            cin >> choix;

            switch (choix){

                case 1:
                    Capucine -> engrai();
                    break;

                case 2:
                    Capucine -> tailler();
                    break;

                case 3:
                    Capucine -> arroser();
                    break;

                case 4:
                    Capucine -> info();
                    break;

                case 5:
                    if (Joueur -> getArgent() >= 5){
                       // Botaniste -> getEngré;
                    }else{
                        cout << "Pas assez d'or" << endl;
                    }
                    break;

                case 6:

                    break;
            }

        Capucine -> nuit();
        choix = 1;

        if (Capucine -> getCroissance() <= 0){
            delete Capucine;
        }
    }
    }
};



