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
