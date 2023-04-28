#include <bits/stdc++.h>

using namespace std;


class Professor {
    private:
        long matricula;
        long rg;
    protected:
        string nome;
        
    public:
        Professor() {
            matricula = 1000;
            rg = 10000;
        }
        void Nome(string a) {nome = a;}
        void Rg (long a) {rg = a;}
        long getRg() {return rg;}
        void Mat (long a) {rg = a;}
        long getMat() {return matricula;}
        string Print() {return "Nome: " + nome + "\nMat: " + to_string(matricula) + "\nRG: " + to_string(rg);}

};

class ProfessorPuc: public Professor {
    private:
        int cargaHoraria;
        float salario;
        char turno;
    public:
		Professor prof;
        void Horas (int a) {cargaHoraria = a;}
        void Salario (float a) {salario = a;}
        void Turno (char a) {turno = a;}
        string Imprimir() {
			string j;
			switch (turno) {
				case 'N':
					j = "Noturno";
					break;
				case 'M':
					j = "Matutino";
					break;
				case 'V':
					j = "Vespertino";
					break;
				default:
					break;
			}
			return "\nNome: " + nome + "\nMat: " + to_string(getMat()) + "\nRG: " + to_string(getRg())+ "\nCH: " + to_string(cargaHoraria) + "\nSalario: " + to_string(salario) + "\nTurno: " + j;}
};

int main () {
    Professor prof;
    prof.Nome("Jukemura");
    prof.Mat(1102);
    prof.Rg(6322002);
    cout << prof.Print();
    cout << "\n\n";
    ProfessorPuc Pp;
    Pp.Nome("Goku");
    Pp.Mat(1003);
    Pp.Rg(45645);
    Pp.Horas(13);
    Pp.Salario(765.23);
    Pp.Turno('V');
    cout << Pp.Imprimir();
   return 0;
}
