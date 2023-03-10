#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define pb push_back

 /*2. Escreva uma função que dado um número de ponto flutuante passado como parâmetro, 
    retorne a parte inteira e a parte fracionária deste número. Escreva um programa que chama esta função. */

void intfrac(float n,int* inteiro, float* frac) {
	*frac = n;
	*inteiro = n;
}

int main () {
   float n;
   float frac;
   int inteiro;
   cin >> n;
   intfrac(n,&inteiro, &frac);
	
	cout << "inteiro: " << inteiro << endl;
    cout << "Fracionario: " << frac - inteiro << endl;

}
