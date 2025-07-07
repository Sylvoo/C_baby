#include <iostream>
using namespace std;

class Device {
public:
    Device() {
        cout << "Konstruktor: Włączam urządzenie" << endl;
    }

    ~Device() {
        cout << "Destruktor: Wyłączam urządzenie" << endl;
    }
};

void UseDevice()
{
    Device d;
    cout<< "dzialam sobie jakos... "<<endl;
}

int main() {
    UseDevice();
    return 0;
}
