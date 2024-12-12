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
    cout << "Podaj liczbe calkowita ";
    cin >> a;

    int wyjscie;

    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
    } while(wyjscie != 0);

    return 0;
}
