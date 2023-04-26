#include <bits/stdc++.h>

using namespace std;

class Caixa {
    protected:
        int altura;
        int largura;

    public:
        
        void Altura(int a) {altura = a;}
        void Largura(int l) {largura = l;}
        string Print() {return "Caixa: \nAltura: " + to_string(altura) + " \nLargura: " + to_string(largura);}

};

class CaixaColorida: public Caixa {
    protected:
        string cor;
    
    public:
        //CaixaColorida (string c) {cor = c;}
        void Cor(string c) {cor=c;}
        string Imprimir() {return "Caixa: \nAltura: " + to_string(altura) + " \nLargura: " + to_string(largura) + " \nCor: " + cor;}

};

class CaixadePresente: public CaixaColorida {
    protected:
        string tipoPapel;

    public:
        void TipoPapel (string t) {tipoPapel = t;}
        string imprimir() {return "Caixa: \nAltura: " + to_string(altura) + " \nLargura: " + to_string(largura) + " \nCor: " + cor + " \nPapel: " + tipoPapel;}
};



int main () {
    Caixa c1;
    c1.Altura(1);
    c1.Largura(2);
    cout << c1.Print() << endl;
    CaixaColorida c2;
    c2.Altura(3);
    c2.Largura(4);
    c2.Cor("Rosa");
    cout << endl << c2.Imprimir() << endl;
    CaixadePresente c3;
    c3.Altura (5);
    c3.Largura (6);
    c3.Cor ("Azul");
    c3.TipoPapel ("Embrulho de Natal");
    cout << endl << c3.imprimir() << endl;
}
