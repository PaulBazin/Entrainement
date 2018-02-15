#include "carte.h"

Carte::Carte() : m_nom("NOM_DEFAUT"), m_description("DESCRIPTION_DEFAUT")
{
    std::cout << "Carte initialisation defaut" << std::endl;
}

Carte::Carte(std::string nom, std::string description) : m_nom(nom), m_description(description)
{
    std::cout << "Carte initialisation" << std::endl;
}
