#include <iostream>
using namespace std;

int main() {

    int ocjena;

    cout << "Unesi ocjenu koju ste dobili "; 
    cin >> ocjena; 

    switch (ocjena)
    {
    case '+':
        cout << "Nazalost pali ste ispit, izadjite ponovno na drugom roku";
        break;
    case 2:
        cout << "Polozili ste ocjenom dovoljan";
        break;
     case 3:
        cout << "Polozili ste ocjenom dobar";
        break; 
    case 4:
        cout << "Polozili ste ocjenom vrlo dobar";
        break;
     case 5:
        cout << "Cestiam polozili ste najvecom ocjenom, izvrstan !";
        break;
    default:
        cout << "Upisali ste ne vazecu ocjenu. " ;
        break;
    }
    return 0;
}