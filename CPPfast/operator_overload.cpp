#include<iostream>
using namespace std;

class Punkt {
public:
    int x, y;

    Punkt(int a, int b) : x(a), y(b) {}

    Punkt operator+(const Punkt& other) {
        return Punkt(x + other.x, y + other.y);
    }
};

int main() {
    Punkt p1(40, 2), p2(3, 60);
    Punkt suma = p1 + p2;
    cout << "suma: " << suma.x << ", " << suma.y << endl;  // 4, 6
}
