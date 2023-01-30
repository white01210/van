#include <isotream>
#include <fstream>
using namespace std;

iostream a_in("angajat.in");
iostream d_in("departament.in");

struct angajat
{
    char nume[256], prenume[256], specialitate[256];
    int codAngajat, salariu, anAngajare, codDepartament;
} a[persoane];

struct departament
{
    int codDepartament;
    char denumire[256];
} d[departamente];

void citire_angajati(int persoane);
void citire_departamente(int departamente);
void afisare(int persoane);
void afisare_selectiva(int departamente);
void afisare_departamnete(int departamente);

int main()
{

    return 0;
}

void citire_angajati(int persoane)
{
    a_in >> persoane;
    for(int i = 1; i <= persoane; ++i)
    {
        a_in >> a[i].nume;
        a_in >> a[i].prenume;
        a_in >> a[i].specialitate;
        a_in >> a[i].codAngajat;
        a_in >> a[i].salariu;
        a_in >> a[i].anAngajare;
        a_in >> a[i].codDepartament;
    }
}

void citire_departamente(int departamente)
{
    d_in departamente;
    for(int i = 1; i <= departamente; ++i)
    {
        d_in >> d[i].codDepartament;
        d_in >> denumire;
    }
}

void afisare(int persoane)
{
    for(int i = 1; i <= persoane; ++i )
    {
        cout << a[i].nume << " " << a[i].prenume << " " << a[i].specialitate << " " << a[i].codAngajat << " " << a[i].salariu << " " << a[i].anAngajare << " " << a[i].codAngajat << "\n";
    }
    for(int i = 1; i <= departamente; ++i)
        cout << d[i].codDepartament << " " << d[i].denumire << "\n";

}

void afisare_selectiva(int departamente)
{
    for(int i = 1; i <= persoane; ++i )
    {
        cout << a[i].nume << " " << a[i].prenume << " " << a[i].specialitate << " " << a[i].salariu << "\n";
        for(int j = 0; j <= departamnet; ++j)
        {
            if(a[i].codDepartament == d[j].codDepartament)
                cout << denumire
        }
    }
}

void afisare_departamnete(int departamente);

