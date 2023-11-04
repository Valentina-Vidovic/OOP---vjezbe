#include <iostream>
using namespace std;

int main() {
    
    float b1;
    float b2;

    cout << "Unesite 2 decimalna broja " ;
    cin >> b1 >> b2 ;

    cout << "Zbroj unesenih brojeva je " << b1 + b2 << endl;
    cout << "Razlika unesenih brojeva je " << b1 - b2 << endl;
    cout << "Umnozak unesenih brojeva je " << b1 * b2 << endl;
    cout << "Kolicnik unesenih brojeva je " << b1 / b2 << endl;

    return 0;
}