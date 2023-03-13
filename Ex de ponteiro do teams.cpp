#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define pb push_back

int main () {
	/*1 - Considere a seguinte declaração: int A, *B, **C, ***D; Escreva um programa que leia a variável a e calcule e exiba o dobro, 
    o triplo e o quádruplo desse valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo e D o quádruplo*/

    int A, *B, **C, ***D;

    cin >> A;

    B = &A;
    C = &B;
    D = &C;
    
    cout << "A: " << A << endl;
    cout << "B: " << *B * 2 << endl;
    cout << "C: " << **C * 3<< endl;
    cout << "D: " << ***D * 4 << endl;
}
/*2. Escreva uma função que dado um número de ponto flutuante passado como parâmetro, 
    retorne a parte inteira e a parte fracionária deste número. Escreva um programa que chama esta função. */

void intfrac(float n,int* inteiro, float* frac) {
	*frac = n;
	*inteiro = n;
}

   float n;
   float frac;
   int inteiro;
   cin >> n;
   intfrac(n,&inteiro, &frac);
	
    cout << "inteiro: " << inteiro << endl;
    cout << "Fracionario: " << frac - inteiro << endl;




    /*3- Analise o código abaixo e explique cada uma das saídas.*/
   int x = 100, *p, **pp;
   p = &x;
   pp = &p;

   //a)
   cout << p << endl; //Como p recebeu o endereço de x e não está apontando, a impressão de p é o endereço de x

   //b)
   cout << &p << endl; //Apenas a impressão do endereço de p com o uso do &

   //c)
   cout << *p << endl; //Apontando para p que recebeu o endereço de x, portanto aponta para o endereço de x recebendo e imprimindo o valor de x que é 100

   //d)
   cout << &*p << endl; //Recebe o endereço que está apontado em p. P está apontado para x então recebe e imprime o endereço de x

   //e)
   cout << *&p << endl; // Aponta para o endereço de p que aponta pro endereço de x imprimindo o endereço de x

   //f)
   cout << **pp << endl; // Apontando para pp que recebeu endereço de p e apontando para o valor do endereço que p recebe. Imprime o valor de x que é 100.

   //g)
   cout << &&p << endl; // Erro pois apontada para endereço de endereço que não existe




/*4 - Se i e j são variáveis inteiras, p e q são ponteiros para inteiros, avalie as atribuições como "ok" e "inválidas":*/

   //a) p=&i --> ok;
   
   //b) *q = &j ---> inválido;

   //c) p = &*&i --> ok;

   //d) i= (&*)j --> inválida

   //e) i= *&*&j --> ok;

   //f) q=&p --> inválida;

   //g) i = (*p)+++*q --> ok;



  /*5 – Considerando as variáveis e ponteiros definidos a seguir, quais atribuições são permitidas?
    int x, *ptx, **pp;
    float a, *pta, **pf*/

    //São permitidas apenas as letras C, E e H.
