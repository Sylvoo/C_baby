#include<iostream>
using namespace std;

class Animal {
public:
    virtual void Speak() {
        cout << "Unknown sound" << endl;
    }
};

class Dog : public Animal {
public:
    void Speak() override {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void Speak() override {
        cout << "Meow!" << endl;
    }
};

main()
{
    Animal* animals[2];
    animals[0] = new Dog();
    animals[1] = new Cat();
    for(int i = 0; i < 2; i++){
        animals[i] -> Speak();
    }

    delete animals[0];
    delete animals[1];
    return 0;
}
