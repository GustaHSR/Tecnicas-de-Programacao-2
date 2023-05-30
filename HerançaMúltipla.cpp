#include <bits/stdc++.h>

using namespace std;

class Retangulo
{
private:
    double base, altura;

public:
    Retangulo(double = 0.0, double = 0.0);
    virtual ~Retangulo();
    void setBase(double);
    double getBase();
    void setAltura(double);
    double getAltura();
    double area();
    double perimetro();
    friend ostream &operator<<(ostream &, Retangulo &);
};

Retangulo::Retangulo(double b, double a)
{
    setBase(b);
    setAltura(a);
}
Retangulo::~Retangulo()
{
}
void Retangulo::setBase(double b)
{
    base = b < 0 ? 0 : b;
}
double Retangulo::getBase()
{
    return base;
}
void Retangulo::setAltura(double a)
{
    altura = a < 0 ? 0 : a;
}
double Retangulo::getAltura()
{
    return altura;
}
double Retangulo::area()
{
    return base * altura;
}
double Retangulo::perimetro()
{
    return 2 * base + 2 * altura;
}
ostream &operator<<(ostream &saida, Retangulo &obj)
{
    saida << endl;
    saida << "Base: " << obj.getBase() << endl;
    saida << "Altura: " << obj.getAltura() << endl;
    return saida;
}

class Circulo
{
private:
    double raio;

public:
    static const double PI;
    Circulo(double = 0.0);
    virtual ~Circulo();
    void setRaio(double);
    double getRaio();
    double area();
    double perimetro();
    friend ostream &operator<<(ostream &, Circulo &);
};

const double Circulo::PI = 3.14159265;

Circulo::Circulo(double r)
{
    setRaio(r);
}
Circulo::~Circulo()
{
}
void Circulo::setRaio(double r)
{
    raio = r < 0 ? 0 : r;
}
double Circulo::getRaio()
{
    return raio;
}
double Circulo::area()
{
    return 2 * PI * (raio * raio);
}
double Circulo::perimetro()
{
    return 2 * PI * raio;
}
ostream &operator<<(ostream &saida, Circulo &obj)
{
    saida << endl;
    saida << "Raio: " << obj.getRaio() << endl;
    return saida;
}

class Cilindro : public Circulo, public Retangulo
{
private:
public:
    Cilindro(double = 0.0, double = 0.0);
    virtual ~Cilindro();
    double area();
    double volume();
    friend ostream &operator<<(ostream &, Cilindro &);
};
Cilindro::~Cilindro()
{
}
Cilindro::Cilindro(double raio, double altura) : Circulo(raio), Retangulo(0, altura)
{
    setBase(Circulo::perimetro());
}

double Cilindro::area()
{
    return 2 * Circulo::area() * Retangulo::area();
}
double Cilindro::volume()
{
    return getAltura() * (Circulo::area() / 2);
}
ostream &operator<<(ostream &saida, Cilindro &obj)
{
    saida << endl
          << "Raio: " << obj.getRaio() << endl;
    saida << "Altura: " << obj.getAltura() << endl;
    return saida;
}

int main()
{
    Cilindro obj(5, 8);
    cout << obj;
    cout << fixed << setprecision(2) << "Area: " << obj.area() << endl;
    cout << fixed << setprecision(2) << "Volume: " << obj.volume() << endl;
}

