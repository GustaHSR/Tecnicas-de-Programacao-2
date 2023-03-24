#include <iostream>

using namespace std;

template<typename T>
T compara(T a, T b, T c) {
    if (a > b and b >= c or a > b and a > c) {
        cout << "O maior valor é: ";
        return a;
    }
    if (b > a and a >= c or b > a and b > c) {
        cout << "O maior valor é: ";
        return b;
    }
    if (c > a and a >= b or c > a and c > b) {
        cout << "O maior valor é: ";
        return c;
    }
    cout << "Todos os valores tem o mesmo tamanho: ";
    return a;
}

int main () {
    int a,b,c;
    cout << "Digite os 3 valores a serem comparados: ";
    cin >> a >> b >> c;
    cout << endl;
    cout << compara(a,b,c);
    cout << endl << endl;
}
