#include <bits/stdc++.h>

using namespace std;

class Veiculo
{
    private:
        string tipo;
        string motor;
    public:
        Veiculo(string,string);
        virtual ~Veiculo();
        virtual double calculaCO2() = 0;
        virtual void print() {cout << "Tipo: " << getTipo() << "\nMotor: " << getMotor() << endl
                              << "Emissão de CO2: " << calculaCO2() << endl;}
        string getTipo() {return tipo;}
        string getMotor() {return motor;}
};

Veiculo::Veiculo(string tipo, string motor)
{
    this->tipo = tipo;
    this->motor = motor;
}
Veiculo::~Veiculo()
{
}

class Carro :public Veiculo
{
    private:
        double quilometragem;
        double indice;
    public:
        Carro(string,string,double,double);
        virtual ~Carro();
        double calculaCO2() {return quilometragem*indice;}
        double getKm() {return quilometragem;}
        double getIndice() {return indice;}
        void print() {cout << "Tipo: " << getTipo() << "\nMotor: " << getMotor() << endl
                              << "Emissão de CO2: " << calculaCO2() << endl;}
};
Carro::Carro(string tipo, string motor, double indice, double quilometragem):Veiculo(tipo,motor)
{
    this->quilometragem = quilometragem;
    this->indice = indice;
}
Carro::~Carro()
{
}

class Barco :public Veiculo
{
    private:
        double quilometragem;
        double indice;
    public:
        Barco(string,string,double,double);
        virtual ~Barco();
        double calculaCO2() {return quilometragem*indice;}
        double getKm() {return quilometragem;}
        double getIndice() {return indice;}
        void print() {cout << "Tipo: " << getTipo() << "\nMotor: " << getMotor() << endl
                              << "Emissão de CO2: " << calculaCO2() << endl;}
};
Barco::Barco(string tipo, string motor, double indice, double quilometragem):Veiculo(tipo,motor)
{
    this->quilometragem = quilometragem;
    this->indice = indice;
}
Barco::~Barco()
{
}

class Bicicleta :public Veiculo
{
    private:
        double quilometragem;
        double indice;
    public:
        Bicicleta(string,string,double,double);
        virtual ~Bicicleta();
        double calculaCO2() {return quilometragem*indice;}
        double getKm() {return quilometragem;}
        double getIndice() {return indice;}
        void print() {cout << "Tipo: " << getTipo() << "\nMotor: " << getMotor() << endl
                              << "Emissão de CO2: " << calculaCO2() << endl;}
};
Bicicleta::Bicicleta(string tipo, string motor, double indice, double quilometragem):Veiculo(tipo,motor)
{
    this->quilometragem = quilometragem;
    this->indice = indice;
}
Bicicleta::~Bicicleta()
{
}

int main ()
{
    char continuar;
    vector<Veiculo*>lista;
    Veiculo *car;
    Veiculo *ship;
    Veiculo *bike;
    do {
        system("clear");
        cout << "\n\nInforme o tipo de veículo a ser cadastrado: " << endl;
        cout << "1. Carro" << endl;
        cout << "2. Barco" << endl;
        cout << "3. Bicicleta" << endl;

        int choice; cin >> choice;
        string motor;
        double km;

        cout << "\nDigite o motor: "; cin >> motor;
        cout << "\nDigite a quilometragem: "; cin >> km;
        cout << endl;

        switch(choice) {
            case 1:
                car = new Carro("Carro",motor,1.24,km);
                lista.push_back(car);
                break;
            case 2:
                ship = new Barco("Barco",motor,0.23,km);
                lista.push_back(ship);
                break;
            case 3:
                bike = new Bicicleta("Bicicleta",motor,0.0,km);
                lista.push_back(bike);
                break;
            default:
                cout << "Digite o tipo de veiculo." << endl;
                break;
        }
        cout << "\nDeseja continuar? (s/n)" << endl;
    }while(cin >> continuar and continuar == 's');

    system("clear");
    cout << "\nImprimindo a lista de veiculos cadastrados: " << endl;

    for(int i = 0; i < lista.size();i++)
    {
        lista[i]->print();
        cout << endl;
    }
    lista.clear();
}
