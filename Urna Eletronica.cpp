#include <iostream>
#include <locale.h>
#include "Header.h"
#include "Urna.h"


using namespace std;

int main()
{
	headerUrna();
	system("cls");    
	setlocale(LC_ALL, "Portuguese");
	char chosen;
	do {
		system("cls");
		headerUrna();
		cout << "\n\n1 - INICIAR VOTACAO\n2 - EXIBIR RESULTADOS\n3 - ENCERRAR APLICACAO\n" << endl;
		cin >> chosen;
		char option;
		switch (chosen) {
		case '1':
			votaPrefeito();
			votaVereador();
			break;
		case'2':
			resultados();
			break;
		case '3':
			cout << "\nAPLICACAO ENCERRADA PELO USUARIO" << endl;;
			break;
		} 
	} while (chosen != '3');
}
