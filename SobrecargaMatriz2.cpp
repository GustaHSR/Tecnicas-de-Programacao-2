#include "SobrecargaMatriz2.h"

int main()
{
    Matriz<double> A(5);
    srand(time(0));
    A.Gerar();
    A.Print();
    A++;
    A.Print();
    ++A;
    A.Print();
    
    return 0;
}
