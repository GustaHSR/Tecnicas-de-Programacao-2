#ifndef HEADER_H
#define HEADER_H

#include <bits/stdc++.h>
using namespace std;

class Vetor {
	private:
		int tamanho;
		int *ptr;
	public:
		Vetor(int = 10);
		Vetor(const Vetor&); //Construtor por cópia
		virtual~Vetor();
		int getTam();
		const Vetor& operator=(const Vetor&); //atribuição
		bool operator==(const Vetor&) const; // igualdade
		bool operator!=(const Vetor&) const; // desigualdade
		int& operator[](int); //operador de subscrito no vetor
		const Vetor& operator+(const Vetor&);
		const Vetor& operator-(const Vetor&);
		friend ostream& operator<<(ostream&, const Vetor&);
		friend istream& operator>>(istream&, const Vetor&);

};
Vetor::Vetor (int tam) {
	tamanho = (tam>0 ? tam: 10);
	ptr = new int[tamanho];
	for(int i = 0; i< tamanho; i++) {
		ptr[i]=0;
	}
}
Vetor::Vetor (const Vetor &origem) : tamanho(origem.tamanho) {
	ptr = new int[tamanho];
	for(int i = 0; i< tamanho; i++) {
		ptr[i] = origem.ptr[i];
	}
}

Vetor::~Vetor () {
	delete[] ptr;
}

int Vetor::getTam() {
	return tamanho;
}

const Vetor& Vetor::operator=(const Vetor &direita) { //Atribuição
	if (&direita != this) {
		if (tamanho != direita.tamanho) {
			delete[] ptr;
			tamanho = direita.tamanho;
			ptr = new int(tamanho);
		}
		for(int i = 0; i< tamanho; i++) ptr[i] = direita.ptr[i];
	}
	return *this;
}

bool Vetor::operator==(const Vetor &direita) const { //igualdade
	if (tamanho != direita.tamanho) return false;
	for (int i = 0; i < tamanho; i++) {
		if (ptr[i] != direita.ptr[i]) return false;
	}
	return true;
}

bool Vetor::operator!=(const Vetor &direita) const { //desigualdade
	return !(*this==direita);
}

int& Vetor::operator[] (int indice) {
	if (indice < 0 or indice >= tamanho) {
		cerr << "Erro: indice " << indice << " fora dos limites.";
		exit(1);
	}
	return ptr[indice];
}

const Vetor& Vetor::operator+(const Vetor &direita) {
	if(tamanho != direita.tamanho) {
		delete[] ptr;
		tamanho = direita.tamanho;
		ptr = new int(tamanho);
	}
	for(int i = 0; i< tamanho; i++) {
		ptr[i] = direita.ptr[i]+this->ptr[i];
	}
	return *this;
}

const Vetor& Vetor::operator-(const Vetor &direita) {
	if(tamanho != direita.tamanho) {
		delete[] ptr;
		tamanho = direita.tamanho;
		ptr = new int(tamanho);
	}
	for(int i = 0; i< tamanho; i++) {
		ptr[i] = direita.ptr[i]-this->ptr[i];
	}
	return *this;
}

ostream& operator<<(ostream &saida, const Vetor &vet) {
	saida << " [ ";
	for(int i = 0; i < vet.tamanho; i++) {
		saida << vet.ptr[i] << " ";
	}
	saida << "]" << endl;
	return saida;
}
istream& operator>>(istream &entrada, const Vetor &vet) {
	for (int i = 0; i < vet.tamanho; i++) 
		entrada >> vet.ptr[i];
	return entrada;
}
#endif
