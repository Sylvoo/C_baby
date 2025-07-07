#include <iostream>
#include <cstdlib>  // malloc, calloc, free
using namespace std;

int main() {
    int* a = (int*)malloc(5 * sizeof(int)); // niezerowana pamięć
    int* b = (int*)calloc(5, sizeof(int));  // zerowana pamięć

    // Inicjalizujemy tablicę a ręcznie
    for (int i = 0; i < 5; ++i) {
        a[i] = i + 1;  // a = [1,2,3,4,5]
    }

    // Wypisujemy i sumujemy
    int sum = 0;
    cout << "Zawartość tablicy a: ";
    for (int i = 0; i < 5; ++i) {
        cout << a[i] << " ";
        sum += a[i];
    }
    cout << "\nSuma elementów a: " << sum << endl;

    // Sprawdzenie zawartości calloc
    cout << "Zawartość calloc (b): ";
    for (int i = 0; i < 5; ++i) {
        cout << b[i] << " ";
    }
    cout << endl;

    free(a);
    free(b);

    return 0;
}
