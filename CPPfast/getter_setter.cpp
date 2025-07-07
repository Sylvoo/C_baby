#include<iostream>
using namespace std;

class Person {
private:
    string name;
public:
    void SetName(string n) {
        name = n;
    }

    string GetName() const {
        return name;
    }
};

int main()
{
    Person osoba;
    osoba.SetName("Ala");
    cout<< osoba.GetName() <<endl;
    return 0;
}