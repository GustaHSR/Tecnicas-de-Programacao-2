#include <bits/stdc++.h>

using namespace std;

template<typename T>
void gera (T *v, T fator) {
    for (int i = 0; i < 20; i++) {
        v[i] = (rand() * fator)/RAND_MAX;
    }
}
template<typename T>
void imprimir(T *v) {
    cout << "Elementos do vetor: ";
    for(int i = 0; i < 20;i++) {
        cout << v[i] << " ";
    }
    cout << endl;
} 

template<typename T>
T maximo(T *v) {
    T maior = 0;
    cout << "O maior elemento do vetor é: ";
    for(int i = 0; i < 20;i++) {
        if(v[i] > maior) maior = v[i];
    }
    return maior;
}

int main () {
    srand(time(NULL));
    int v1[20];
    double v2[20];

    gera(v1,100);
    gera(v2,100.0);

    imprimir(v1);
    cout << maximo(v1);
    cout << endl << endl;
    imprimir(v2);
    cout << endl;
    cout << maximo(v2) << endl;
    cout << endl << endl;
}
