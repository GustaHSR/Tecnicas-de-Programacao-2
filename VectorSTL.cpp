#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define f first
#define s second
#define endl '\n'

class print {
    public:
        void operator()(int elem) const {
            cout << elem << " ";
        }
};

bool impar (int i) {
    return ((i%2) == 1 ? true: false);
}

int main () {
    vector<int> vetor;

    for (int i = 0; i < 10; i++) {
        vetor.push_back(i);
    }

    for_each(vetor.begin(),vetor.end(),print());
    random_shuffle(vetor.begin(),vetor.end());
    cout << endl;
    for_each(vetor.begin(),vetor.end(),print());
    sort(vetor.begin(),vetor.end());
    cout << endl;
    for_each(vetor.begin(),vetor.end(),print());
    if (binary_search(vetor.begin(),vetor.end(),5)) 
        cout << "Valor encontrado!" << endl;
    else 
        cout << "Valor nao encontrado!" << endl;
    replace_if(vetor.begin(),vetor.end(),impar,-1);
    for_each(vetor.begin(),vetor.end(),print());
}
