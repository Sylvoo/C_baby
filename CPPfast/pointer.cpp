#include<iostream>
using namespace std;

void Zmien(int* ptr) {
    *ptr = 10;
}

int main() {
    int a = 5;
    Zmien(&a);
    cout << a << endl;  // wypisze 10
}

int main()
{
    int* tablica = new int[5];  // dynamiczna tablica
    for (int i = 0; i < 5; ++i) tablica[i] = i * 2;

    for (int i = 0; i < 5; ++i) cout << tablica[i] << " ";

    delete[] tablica; // zwolnienie pamięci


    return 0;
}
