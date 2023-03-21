#include <bits/stdc++.h>
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
using namespace std;

using ll = long long;
using ii = pair<int, int>;
template<typename MATHEUS>
void imprime(MATHEUS *v, int n) {
    cout << "vetor[";
    for (int i = 0; i < n;i++) {
        cout << fixed<<setprecision(2) << v[i] << " ";
    }
    cout << "]" << endl;
}

int main() {
    int n; cin >> n;
	int v[n];
    rpara(v,n);
    imprime(v,n);
    double v1[n];
    for (int i = 0; i < n;i++) {
         v1[i] = (double)rand()*100.0/(double)RAND_MAX;
    }
    imprime(v1,n);
}
