#include <iostream>
using namespace std;

class Shape {
public:
    virtual double Area() = 0; // metoda czysto wirtualna
    void Describe() {
        cout << "To jest ksztalt." << endl;
    }
};

class Rectangle : public Shape {
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double Area() override {
        return width * height;
    }
};

class Circle : public Shape{
    double radius;
    public:
    Circle(double r) : radius(r) {}
    double Area() override{
        return 3.14*radius*radius;
    }
};

main()
{
    Shape* s1 = new Rectangle(4,5);
    Shape* s2 = new Circle(3.5);

    s1 -> Describe();
    cout << "\nPole prostokata: "<< s1->Area()<<endl;

    s2 -> Describe();
    cout << "\nPole kola: " << s2 ->Area()<<endl;

    delete s1;
    delete s2;

    return 0;
}
