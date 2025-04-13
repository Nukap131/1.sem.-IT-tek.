#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>
//using namespace std;

class Kunde
{
    private:
        float rente;
        int cpr;
    public:
        double formue = 0;
        int abonnement;
        void indsaet_penge (double);
        void beregn_abonnement ();
        void rente_indtaegter();
};

void Kunde::indsaet_penge (double beløb)
{
    formue = formue + beløb;
    rente = rente + 2;
}

void Kunde::beregn_abonnement ()
{
    if (formue < 100000.0)
    {
        abonnement = 0;
    }
    else if (100000.0 < formue < 250000.0)
    {
        abonnement = 50;
    }
    else if (formue >= 250000.0)
    {
        abonnement = 100;
    };
}

void Kunde::rente_indtaegter()
{
    if (formue < 100000.0)
    {
        rente = 0.025;
    }
    else if (100000.0 < formue < 250000.0)
    {
        rente = 0.0375;
    }
    else if (formue >= 250000.0)
    {
        rente = 0.05;
    }
    double rente_indtaegt = formue * rente;
    formue = formue + rente_indtaegt;
    std::cout << rente_indtaegt << std::endl;
}
/*Læg renteindtægt til formue hvert minut*/
void time_now()
{
    time_t now = time(0);
    char* dt = ctime(&now);
    std::cout << "The local date and time is: " << dt << std::endl;
}

int main ()
{
    Kunde Philip;
    Kunde Karen;
    Kunde Alice;

    Philip.formue = 1000;
    Karen.formue = 15000;
    Karen.rente_indtaegter();

std::cout << Karen.formue << std::endl;
time_now();

    while (true)
    {
        std::this_thread::sleep_for (std::chrono::minutes(1));
        Karen.rente_indtaegter();
        time_now();
        std::cout << Karen.formue << std::endl;
    }
}