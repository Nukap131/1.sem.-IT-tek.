#include <iostream>

class Kunde 
{
    private:
        float rente;
        int cpr;
    public:
        double formue = 0;
        int abonnement;
        void indsæt_penge (double);
        void beregn_abonnement ();
        void rente_indtægter ();
};


void Kunde::indsæt_penge (double beløb)
{
    formue = formue + beløb * rente;
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
    }
}

 int main()
 {
    Kunde Philip;
    Kunde Karen;
    Kunde Alice;
    Philip.formue = 1000;
    Karen.formue = 15000;
 }