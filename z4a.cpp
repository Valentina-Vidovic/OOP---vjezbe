#include <iostream>
using namespace std;

int main() {
    int cijeliBroj ;
    float decimalniBroj ;
    char znak ;
    bool logOznaka ;
    string rijec;

    cout << "Unesi neki cijeli broj " << endl;
    cin >> cijeliBroj;
    cout << "Upisali ste broj " << cijeliBroj << endl;

    cout << "Unesi neki decimalni broj " << endl;
    cin >> decimalniBroj;
    cout << "Upisali ste decimalni broj " << decimalniBroj << endl;

    cout << "Unesi jedan znak " << endl;
    cin >> znak;
    cout << "Upisali ste znak " << znak << endl;

    cout << "Unesi jednu od logickih vrijednosti (0 ili 1) " << endl;
    cin >> logOznaka;
    cout << "Upisali ste broj " << logOznaka << endl;

    cout << "Unesi neku rijec " << endl;
    cin >> rijec;
    cout << "Upisali ste rijec " << rijec << endl;
     
    return 0;
}