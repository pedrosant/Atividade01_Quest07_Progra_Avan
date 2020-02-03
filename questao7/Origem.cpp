#include<iostream>

using namespace std;

float calculoPercentual(float v1, float v2);

int main() {

	int n; int idade;
	int vIdade[100];
	int mediaRuim = 0;
	int contMediaRuim = 0;
	int maiorIdadePessimo = 0;
	int maiorIdadeOtimo = 0;
	int	maiorIdadeRuim = 0;
	int difIdade;

	float percentualTotal;
	float contA = 0; float contB = 0; 
	float contC = 0; float contD = 0; float contE = 0;	
	
	string notas;
	string vNotas[100];


	cout << "digite o numero de cadastros: ";
	cin >> n;
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
			if (vIdade[i] > maiorIdadeOtimo) {
				difIdade = maiorIdadeOtimo = vIdade[i];
			}
			contA++;
		}else if (vNotas[i]._Equal("B")) {
			contB++;
		}else if (vNotas[i]._Equal("C")) {
			contC++;
		}else if (vNotas[i]._Equal("D")) {
			if (vIdade[i] > maiorIdadeRuim) {
				maiorIdadeRuim = vIdade[i];
			}
			mediaRuim += idade;
			contMediaRuim++;
			contD++;
		}else if (vNotas[i]._Equal("E")) {
			if (vIdade[i] > maiorIdadePessimo) {
				maiorIdadePessimo = vIdade[i];
			}
			contE++;
		}
		
	}
	
	if (contB > contC) {
		percentualTotal = calculoPercentual(contB, contC);
	}
	else if (contC > contB) {
		percentualTotal = calculoPercentual(contC, contB);
	}

	if (maiorIdadeOtimo > maiorIdadeRuim) {
		difIdade =  maiorIdadeOtimo - maiorIdadeRuim;
	}else if (maiorIdadeRuim > maiorIdadeOtimo ) {
		difIdade = maiorIdadeRuim - maiorIdadeOtimo;
	}
	cout << "Total de notas Otimas: " << contA << ::endl;
	cout << "Percentual entre bom e regular: " << percentualTotal << ::endl;
	cout << "Media de idade de quem escolheu RUIM " << mediaRuim / contMediaRuim << ::endl;
	cout << "Maior idade que respondeu PESSIMO: " << maiorIdadePessimo << ::endl;
	cout << "A diferenca da maior idade que respondeu otimo e a maior idade que respondeu ruim: " << difIdade << ::endl;
	system("pause");

	return 0;
}


float calculoPercentual(float v1,float v2) {
	float v3 = (v1 - v2) * 100 / v1;
	return v3;
}