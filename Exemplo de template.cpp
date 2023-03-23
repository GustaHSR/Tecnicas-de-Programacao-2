#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ff first
#define ss second
#define pb push_back
#define tos to_string
#define para(x,y) for(int i = 0; i < y;i++) x[i]=i
#define rpara(x,y) for(int i = 0; i < y;i++) x[i]=rand()%100
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define ld long double
using ll = long long;

template<typename MATHEUS,typename SEXO,typename MUITO>
void imprime(MATHEUS *v, MUITO n, SEXO a) {
    a = "Eu só quis colocar esse a  para usar o typename SEXO.";
    cout << a << endl << endl;
    cout << "vetor[";
    for (int i = 0; i < n;i++) {
        cout << fixed<<setprecision(2) << v[i] << " ";
    }
    cout << "]" << endl;
}

int main() {
    int n; cin >> n;
	int v[n];
    string a;
    rpara(v,n);
    imprime(v,n,a);
    double v1[n];
    for (int i = 0; i < n;i++) {
         v1[i] = (double)rand()*100.0/(double)RAND_MAX;
    }
    imprime(v1,n,a);
}
