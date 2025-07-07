#include <iostream>
using namespace std;

double dziel(double a, double b) {
    if (b == 0) throw runtime_error("Dzielenie przez zero!");
    return a / b;
}

void ZagotujWode(bool wodaWlana) {
    if (!wodaWlana) {
        throw "Błąd: Brak wody w czajniku!";
    }
    cout << "Woda się gotuje..." << endl;
}

int main() {
     try {
        ZagotujWode(false);  // próbujemy zagotować bez wody
    } catch (const char* blad) { // "blad" to jest ten throw z inicjalizacji
        cout << "WYJĄTEK złapany: " << blad << endl;
        cout << "Uwaga! Nalewam wodę i próbuję ponownie..." << endl;
        ZagotujWode(true);   // teraz z wodą
    }
//////////////////
    try {
        cout << dziel(10, 0) << endl;
    } catch (const runtime_error& e) {
        cout << "Błąd: " << e.what() << endl;
    }
}
