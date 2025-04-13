#include <iostream>
#include <string>
struct bankkunde
{
    const char* navn;
    std::string addresse;
    int tlf;
};

int main()
{
    bankkunde per;

    per.navn = "Per";
    per.addresse = "Odensevej 13";
    per.tlf = 88117722;

    std::cout << "Kunden i banken navn er " << per.navn << std::endl;
    std::cout << "addresse er " << per.addresse << std::endl;
    std::cout << "og har tlf nr. : " << per.tlf << std::endl;
}