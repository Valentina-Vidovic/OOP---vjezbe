#include <iostream>
using namespace std;

int main() {

    int prviBr;
    int drugiBr;
    char operacija;

    cout << "Unesi prvi broj "; 
    cin >> prviBr;
    cout << "Unesi operaciju koju zelis izvrsiti (+,-,*,/) "; 
    cin >> operacija;
    cout << "Unesi drugi broj "; 
    cin >> drugiBr;

    switch (operacija)
    {
    case '+':
        cout << "Zbroj unesenih brojeva je " << prviBr + drugiBr << endl;
        break;
    case '-':
        cout << "Razlika unesenih brojeva je " << prviBr - drugiBr << endl;
        break;
    case '*':
        cout << "Umnozak unesenih brojeva je " << prviBr * drugiBr << endl;
        break;
    case '/':
        cout << "Kolicnik unesenih brojeva je " << prviBr / drugiBr << endl;
        break;
    default:
        cout << "Upisali ste nepostojecu racunsku operaciju. " ;
        break;
    }
    return 0;
}