#ifndef CARTE_H_INCLUDED
#define CARTE_H_INCLUDED

#include <string>
#include <iostream>
class Carte
{
private:
    std::string m_nom;
    std::string m_description;

public:
    Carte();
    Carte(std::string nom, std::string description);
    ~Carte();

    Carte_affichage();
};

#endif // CARTE_H_INCLUDED
