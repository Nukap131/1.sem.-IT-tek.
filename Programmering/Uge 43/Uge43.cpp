#include <iostream>

struct person
{
    int tlf;
    const char* navn;
};

int main()
{
    person joel;

    joel.navn = "Joel";
    joel.tlf = 11212325;

    std::cout << "Personen" << joel.navn << std::endl;
    std::cout << "har tlf nr " << joel.tlf << std::endl;
}

