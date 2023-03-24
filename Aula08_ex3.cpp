#include <iostream>

using namespace std;

template<typename T>
void swap (T *v,T *x) {
    T *aux = v;
    v = x;
    x = aux;
}
template<typename T>
void bubbleSort(T *a, int n) {
    for (int i = 0; i < n -1; i++)
        for (int j = n -1; i < j; j--)
            if (a[j] < a[j -1]) swap(a[j], a[j -1]);
}
int main() {
    int a[5] = { 10, 50, 30, 40, 20 };
    double b[5]={30.1, 20.9, 11.5, 66.4, 9.5};
    bubbleSort(a,5);
    cout << " Vetor : ";
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl << endl;
    bubbleSort(b,5);
    cout << " Vetor : ";
    cout << fixed << setprecision(2);
    for (int i = 0; i < 5; i++)
        cout << b[i] << " ";
    cout << endl << endl;
    
    return 0;
}
