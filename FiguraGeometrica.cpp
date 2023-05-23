#include <bits/stdc++.h>

using namespace std;

class GeometricFigure
{
    public:
        virtual void print()
        {
            cout << "Base Class: figure" << endl;
        }
};

class Square : public GeometricFigure
{
    public:
        void print()
        {
            cout << "Class Square." << endl;
        }
};

class Triangle : public GeometricFigure
{
    public:
        void print()
        {
            cout << "Class Triangle." << endl;
        }
};

class Circle : public GeometricFigure
{
    public:
        void print()
        {
            cout << "Class Circle" << endl;
        }
};

int main ()
{
    GeometricFigure *ptr[3];
    Square s;
    Triangle t;
    Circle c;
    ptr[0] = &s;
    ptr[1] = &t;
    ptr[2] = &c;
    for (int i = 0; i < 3; i++) {
        ptr[i]->print();
    }
}
