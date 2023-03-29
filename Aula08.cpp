#include <bits/stdc++.h>

using namespace std;

//Questão 1
template<typename T>
void gera (T *v, T fator) {
    for (int i = 0; i < 20; i++) {
        v[i] = (rand() * fator) / RAND_MAX;
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
    
    T maior = v[0];
    
    for(int i = 0; i < 20;i++) {
        if(v[i] > maior) maior = v[i];
    }
    return maior;
}

/*------------------------------------------------------------------------------------*/

//Questão 2
template<typename S>
void sequencia(S *soma, S x, int n) {
    *soma = 1+x;
    for(int i = 2; i <= n; i++) {
        *soma +=i*x;
    }
}
/*------------------------------------------------------------------------------------*/

//Questão 3
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

/*------------------------------------------------------------------------------------*/

//Questão 4
template<class T>
class Calculadora {
    private:
        T a;
        T b;
    public:
        T Add(T a, T b);
        T Sub(T a, T b);
        T Mult(T a, T b);
        T Div(T a, T b);
};

template<class T>
T Calculadora<T>::Add(T a, T b) {
    return a+b;
}
template<class T>
T Calculadora<T>::Sub(T a, T b) {
    return abs(a-b);
}
template<class T>
T Calculadora<T>::Mult(T a, T b) {
    return a*b;
}
template<class T>
T Calculadora<T>::Div(T a, T b) {
    return a/b;
}

/*------------------------------------------------------------------------------------*/

//Questão 5
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

/*------------------------------------------------------------------------------------*/



int main () {

     /* Ex_01
    
    srand(time(NULL));
    long long v1[20];
    double v2[20];
    long long f1;
    double f2;
    cout << "Digite o fator de inteiros: ";
    cin >> f1;
    cout << endl;
    gera(v1,f1);

    imprimir(v1);
    cout << "Maior elemento do vetor: " << maximo(v1) << endl << endl;
    cout << "Digite o fator de double: ";
    cin >> f2;
    cout << endl;
    gera(v2,f2);
    imprimir(v2);
    cout << "Maior elemento do vetor: " << maximo(v2) << endl << endl;
    

    /*Ex_02
    
    int soma,n,x;
    sequencia(&soma,3,2);
    cout << *&soma << endl << endl;*/

    /*Ex_03
    
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
    */


   /*Ex_04

   int a,b; cin >> a >> b;
   Calculadora<int> Calc_Int;
   cout << "A soma dos dois números é: " << Calc_Int.Add(a,b) << endl;
   cout << "A subtração absoluta dos dois números é: " << Calc_Int.Sub(a,b) << endl;
   cout << "A multiplicação dos dois números é: " << Calc_Int.Mult(a,b) << endl;
   cout << "A divisão do primeiro pelo segundo é: " << Calc_Int.Div(a,b) << endl;

   cout << endl << endl;

   int c,d; cin >> c >> d;
   Calculadora<double> Calc_Double;
   cout << "A soma dos dois números é: " << Calc_Double.Add(c,d) << endl;
   cout << "A subtração absoluta dos dois números é: " << Calc_Double.Sub(c,d) << endl;
   cout << "A multiplicação dos dois números é: " << Calc_Double.Mult(c,d) << endl;
   cout << "A divisão do primeiro pelo segundo é: " << Calc_Double.Div(c,d) << endl;/*




   /*Ex_05
   
    double a,b,c;
    cout << "Digite os 3 valores a serem comparados: ";
    cin >> a >> b >> c;
    cout << endl;
    cout << compara(a,b,c);
    cout << endl << endl;*/

   return 0;
}
