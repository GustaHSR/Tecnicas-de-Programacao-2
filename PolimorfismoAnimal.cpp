#include <bits/stdc++.h>

using namespace std;

class Animal {
    private:
        void setNome(string);
        void setClassificacao(string);
    protected:
        string nome;
        string classificacao;
    public:
        Animal(string,string);
        virtual ~Animal();
        string getNome() {return nome;}
        string getClassficacao() {return classificacao;}
        virtual void print();
};
Animal::Animal(string a, string b) {
    this->nome = a;
    this->classificacao = b;
}
Animal::~Animal() {

}
void Animal::setClassificacao(string a) {
    classificacao = a;
}
void Animal::setNome(string a) {
    nome = a;
}
void Animal::print() {
    cout << "Informações do Animal:" << endl;
    cout << "Nome: " << getNome() << endl;
    cout << "Tipo: " << getClassficacao() << endl << endl;
}


class Peixe : public Animal {
    private:
        string membros;
    public:
        Peixe(string,string,string);
        virtual ~Peixe();
        string getMovimento();
        void setMovimento(string);
        void print();
};

Peixe::Peixe (string nome, string classificacao, string mov) : Animal(nome,classificacao) {
    this->membros = mov;
}
Peixe::~Peixe() {

}
void Peixe::setMovimento(string a) {
    membros = a;
}
string Peixe::getMovimento() {
    return membros;
}
void Peixe::print() {
    cout << "Informações do Peixe: " << endl;
    cout << "Nome: " << getNome() << endl;
    cout << "Tipo: " << getClassficacao() << endl;
    cout << "Mov: " << getMovimento() << endl << endl;
}

int main() {
    Animal objAnimal("Ictus Tucunaris","peixe agua doce");
    Peixe objPeixe("Ictus Polimorficos","peixe de mar","nadadeiras");

    /*objAnimal.print();
    objPeixe.print();

    ptrAnimal = &objAnimal;
    ptrAnimal->print();

    ptrPeixe = &objPeixe;
    ptrPeixe->print();*/
    Animal *ptrAnimal=0;
    Peixe *ptrPeixe=0;

    ptrAnimal = &objPeixe;
    ptrAnimal->print();
    


    return 0;
}
