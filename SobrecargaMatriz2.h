#ifndef SOBRECARGAMATRIZ2_H
#define SOBRECARGAMATRIZ2_H

#include <bits/stdc++.h>
using namespace std;

template<class T>
class Matriz {
	private:
		T **M;
		int n;
		
		
	public:
		Matriz(int);
		virtual ~Matriz();
		const Matriz& operator+(const Matriz&);
		void operator++();
		void operator++(int);
		void Gerar();
		int getN();
		void Print();
		//friend ostream &operator<<(ostream &, Matriz&);
};

template<class T>
void Matriz<T>::operator++() {
	for (int i = 0; i < n;i++) {
		for (int j = 0; j < n;j++) {
			*(*(M+i)+j) += 1;
		}
	}
}

template<class T>
void Matriz<T>::operator++(int) {
	for (int i = 0; i < n;i++) {
		for (int j = 0; j < n;j++) {
			*(*(M+i)+j) += 1;
		}
	}
}

template<class T>
Matriz<T>::Matriz(int n) {
	this->n =n;
	M = new T*[n];
	for (int i = 0; i < n;i++) {
		M[i] = new T[n];
		for(int j = 0; j < n; j++) M[i][j] = 0;
	}
}

template<class T>
Matriz<T>::~Matriz() {
	//~ for (int i = 0; i < this->n;i++) {
		//~ delete[] M[i];
		//~ delete[] M;
	//~ }
}

template<class T>
void Matriz<T>::Gerar() {
	for (int i = 0; i < n;i++) 
		for (int j = 0; j < n;j++) 
			M[i][j] = (rand() % 10 + 1)/(T)(rand() % 10 + 1);
}

template<class T>
int Matriz<T>::getN() {
	return this->n;
}

template<class T>
void Matriz<T>::Print() {
	cout << endl;
	for (int i = 0; i < n;i++) {
		for (int j = 0; j < n;j++) {
			cout << M[i][j] << " ";
		}
		cout << endl;
	}
}

template<class T>
const Matriz<T>& Matriz<T>::operator+(const Matriz& B) {
	for (int i = 0; i < n;i++) {
		for (int j = 0; j < n;j++) {
			*(*(M+i)+j) = *(*(M+i)+j) + *(*(B.M+i)+j);
		}
	}
	return *this;
}

/*ostream &operator<<(ostream &saida, Matriz &mat) {
	for (int i = 0; i < mat.getN();i++) {
		for (int j = 0; j < mat.getN();j++) {
			saida << *(*(mat.M+i)+j) << " ";
		}
		saida << endl;
	}
	return saida;
}*/

#endif
