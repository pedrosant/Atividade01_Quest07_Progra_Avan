#include<iostream>

using namespace std;

int main() {
	int n;
	int idade;
	int vIdade[100];
	string notas;
	string vNotas[100];
	int contNotaA; int contNotaB; int contNotaC; int contNotaD; int contNotaE;
	for (int i = 0; i < n; i++) {
		cout << "Digite sua idade" << ::endl;
		cin >> idade;
		vIdade[i] = idade;
		cout << "Qual a sua nota esolha entre: A= OTIMO,B= BOM,C= REGULAR,D= RUIM, E= PESSIMO";
		cin >> notas;
		vNotas[i] = notas;
	}

	for (int i = 0; i < n; i++) {
		if (vNotas[i]._Equal("A")) {
			contNotaA++;
		}else if (vNotas[i]._Equal("B")) {
			contNotaB++;
		}else if (vNotas[i]._Equal("C")) {
			contNotaC++;
		}else if (vNotas[i]._Equal("D")) {
			contNotaD++;
		}else if (vNotas[i]._Equal("E")) {
			contNotaE++;
		}
		
	}
	
	cin >> n;
	return 0;
}