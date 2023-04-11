#include <bits/stdc++.h>
#include "Header.h"

using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define f first
#define s second
#define endl '\n'

int main () {
	Vetor A(3);
	cout << "Tamanho de A: " << A.getTam() << endl;
	cout << "Vetor A: " << A << endl;
	cout << "Preencha o vetor A: ";
	cin >> A;
	cout << "Vetor A: " << A << endl;

	Vetor B(3);
	cout << "Tamanho de B: " << B.getTam() << endl;
	cout << "Vetor B: " << B << endl;
	cout << "Preencha o vetor B: ";
	cin >> B;
	cout <<endl;

	cout << "Soma de A + B: ";
	cout << A+B << endl;
	
	
	
	cout << "Subtração de A - B: ";
	cout << A-B << endl;

	
}
