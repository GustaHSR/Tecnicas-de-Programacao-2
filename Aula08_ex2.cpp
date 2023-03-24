#include <bits/stdc++.h>

using namespace std;

template<typename S>
void sequencia(S *soma, S x, int n) {
    *soma = 1+x;
    for(int i = 2; i <= n; i++) {
        *soma +=i*x;
    }
}

int main () {
    int soma,n,x;
    sequencia(&soma,3,2);
    cout << *&soma << endl << endl;
}
