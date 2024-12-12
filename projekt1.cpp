#include <iostream>

using namespace std;

int Silnia(int a) {
    int m = 1;

    for (int i = 1; i <= a; i++) {
        m *= i;
    }

    return m;
}

int main() {
    int a;
    cout << "Podaj liczbe calkowita: ";
    cin >> a;

    int wyjscie;

    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "1. Silnia" << endl;
        cin >> wyjscie;

        if (wyjscie == 1) {
            cout << "Silnia podanej liczby: " << Silnia(a) << endl;
        }
    } while(wyjscie != 0);

    return 0;
}
