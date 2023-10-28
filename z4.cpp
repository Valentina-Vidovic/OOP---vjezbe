#include <iostream>
using namespace std;

int godine;    // da bi korisnik mogao upisati podatak moramo definirati neku varijablu; int je cjelobrojna vrijednost - tip podataka //

int main()
{
    cout << "Koliko imas godina?";
    cin >> godine;

    cout << "Ti imas " << godine << " godina.";

    return 0;
}