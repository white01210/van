#include <iostream>
#include <fstream>
using namespace std;

ifstream a_in("angajat.in");
ifstream d_in("departament.in");
ofstream t_out("tabel.out");
ofstream s_out("angajat.out");

struct angajat
{
    char nume[256], prenume[256], specialitate[256];
    int codAngajat, salariu, anAngajare, codDepartament;
} a[100];

struct departament
{
    int codDepartament;
    char denumire[256];

} d[100];

void citire_angajati(int persoane);
void citire_departamente(int departamente);
void afisare_tabel(int persoane, int departamente);
void afisare_selectiva(int departamente);
void afisare_departamnete(int departamente);

int main()
{
    int persoane, departamente;
    citire_angajati(persoane);
    citire_departamente(departamente);
    afisare_tabel(persoane, departamente);
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
    d_in >> departamente;
    for(int i = 1; i <= departamente; ++i)
    {
        d_in >> d[i].codDepartament;
        d_in >> d[i].denumire;
    }
}

void afisare_tabel(int persoane, int departamente)
{
    for(int i = 1; i <= persoane; ++i )
    {
        t_out << a[i].nume << " " << a[i].prenume << " " << a[i].specialitate << " " << a[i].codAngajat << " " << a[i].salariu << " " << a[i].anAngajare << " " << a[i].codAngajat << "\n";
    }
}

void afisare_selectiva(int departamente, int persoane)
{
    for(int i = 1; i <= persoane; ++i )
    {
        s_out << a[i].nume << " " << a[i].prenume << " " << a[i].specialitate << " " << a[i].salariu << "\n";
        for(int j = 0; j <= departamnet; ++j)
        {
            if(a[i].codDepartament == d[j].codDepartament)
                s_out << d[j].denumire;
        }
    }
}

void afisare_departamnete(int departamente, int persoane);
{
    //aici nu se puede mi amigo
    for(int j = 0; j < departamente; ++j)
        fout << d[j].denumire << ;

}


