#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define endl '\n'

/*void imprimir () {}

template <typename T, typename...Types>
void imprimir(T var1, Types...var2) {
    cout << var1 <<endl;
    imprimir(var2...);
}


int main () {
   imprimir(1,2,3.14,"teste");
}*/


----------------------------------------------------------------------------------------

/*template<typename T>
T somatorio(T total) {
    return total;
}

template<typename T, typename...Args>
T somatorio(T inicial, Args... restante) {
    return inicial + somatorio(restante...);
}


int main () {
    long soma=somatorio(1,2,3,8,7);
    long double soma2=somatorio(1.4,5.2,5,8,2,45,57,2,3468,4,5);
    long soma3=somatorio(1,2,2,3,5,46,57,6,87,9,8,0,7,7,5,3,3,2,44,65,6);
    string w1 = "Gustavo", w2 = " Henrique" , w3 = " da Silva", w4 = " Rodrigues";
    string soma4 =somatorio(w1,w2,w3,w4);
    cout << "Soma(long): " << soma << endl;
    cout << "Soma2(long): " << soma2 << endl;
    cout << "Soma3(long): " << soma3 << endl;
    cout << "Soma4(string): " << soma4 << endl;
}*/

--------------------------------------------------------------------------------

/*template<typename T>
class Exemplo {
    public:
        T soma = 0;
        template <typename...Resto>
        T funcao(T a, Resto...b) {
            soma +=a;
            return funcao(b...);
        }
        T funcao (T x) {
            soma+=x;
            return soma;
        }
};

int main () {
    Exemplo<int> calculo;
    cout << calculo.funcao(1,2,3,4) << endl;
}/*

--------------------------------------------------------------------------------------
