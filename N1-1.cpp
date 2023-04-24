#include <bits/stdc++.h>

using namespace std;


class Boleto {
    private:
        double valor,multa;
        int dias;
    public:
        Boleto();
        Boleto(double,int);
        double getValor();
        int getDias();
        double getMulta();
        void calcula();
        void operator++();
        bool operator==(Boleto &);
        Boleto& operator+ (Boleto &);
        friend ostream& operator<<(ostream&, Boleto &);
        friend istream& operator>>(istream&, Boleto &);
        virtual ~Boleto();
};

Boleto::Boleto() {
    multa = 0.05;
    valor = 100.0;
    dias = 0;
    
}

Boleto::Boleto(double a, int b) {
    multa = 0.05;
    dias = b;
    valor = a + (a*(dias*multa));
    
}

double Boleto::getValor() {
    return valor;
}

int Boleto::getDias() {
    return dias;
}

double Boleto::getMulta() {
    return multa;
}

void Boleto::calcula() {
    valor = valor + (valor*(dias*multa));
}

void Boleto::operator++() {
	dias = dias+1;
    calcula();
}

bool Boleto::operator== (Boleto& direita) {
    if(this->valor == direita.valor) return true;
    return false;
}

Boleto& Boleto::operator+(Boleto& direita) {
	this->valor += direita.valor;
    this->dias = 0;
    return *this;
}

ostream &operator<<(ostream &saida, Boleto &bol) {
	saida << "Boleto:" << endl;
    saida << fixed << setprecision(2);
    saida << "Valor         : R$ " << bol.valor << endl; 
    saida << "Dias em atraso: " << bol.dias << endl;
    saida << "Multa         : 5.00 % ao dia" << endl << endl << endl;
    return saida;
}

istream &operator>>(istream &entrada, Boleto &bol) {
    cout << "Digite a quantidade de dias de atraso do boleto: ";
    entrada >> bol.dias;
    cout << "\nDigite o valor do boleto: ";
    entrada >> bol.valor;
    bol.calcula();
    return entrada;
}

Boleto::~Boleto () {

}


int main () {
    Boleto b1,b3,b4,b5;
    Boleto b2(1000,2);

    cout << b1 << endl;
    cout << b2 << endl;
    ++b2;
    cout << b2 << endl;
    ++b1;
    cout << b1 << endl;
    cin>>b3;
    cout << b3 << endl;
    cin >> b4;
    cout << b4 << endl;
    if(b3 == b4)
        cout << "Boletos 3 e 4 iguais." << endl;
    else
        cout << "Boletos 3 e 4 diferentes." << endl;
    cout << "Gerando novo boleto:" << endl << endl;
    b5=b3+b4;
    cout << b5 << endl << endl;

    return 0;
}
