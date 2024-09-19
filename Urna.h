#include <iostream>

using namespace std;
int contPref1 = 0, contPref2 = 0, contPref3 = 0, nulosPref = 0, brancosPref = 0, contVer1 = 0, contVer2 = 0, contVer3 = 0, nulosVer = 0, brancosVer = 0;

void votaPrefeito() {
	system("cls");
	headerUrna();
	char option;
	cout << "\n\nCANDIDATOS A PREFEITO" << endl;
	cout << "\nCandidato 1: João Silva (Número: 10)" << endl;
	cout << "Candidato 2: Maria Oliveira(Número : 20)" << endl;
	cout << "Candidato 3: Carlos Pereira (Número: 30)" << endl;
	cout << "Votar em branco: 0" << endl;
	cout << "Pressione qualquer tecla para votar nulo...\n" << endl;
	cin >> option;
	switch (option) {
	char opt;
	cout << "\n----------CANDIDATOS A PREFEITO----------\n" << endl;
	case '1':
		cout << "\nConfirme seu voto para o Candidato 1: João Silva (Número: 10) (s/n)" << endl;
		cin >> opt;
		if (opt == 's') {
			contPref1 += 1;
		}
		else if (opt == 'n') {
			cout << "\nPor favor, refaca o seu voto!\n" << endl;
			system("Pause");
			break;
		}
		else {
			cout << "\nTecla inválida, tenta novamente!\n" << endl;
			system("Pause");
		}
		break;
	case '2':
		cout << "\nConfirme seu voto para o Candidato 2: Maria Oliveira(Número : 20) (s/n)" << endl;
		cin >> opt;
		if (opt == 's') {
			contPref2 += 1;
		}
		else if (opt == 'n') {
			cout << "\nPor favor, refaca o seu voto!\n" << endl;
			system("Pause");
			break;
		}
		else {
			cout << "\nTecla inválida, tenta novamente!\n" << endl;
			system("Pause");
		}
		break;
	case '3':
		cout << "\nConfirme seu voto para o Candidato 3: Carlos Pereira (Número: 30) (s/n)" << endl;
		cin >> opt;
		if (opt == 's') {
			contPref3 += 1;
		}
		else if (opt == 'n') {
			cout << "\nPor favor, refaca o seu voto!\n" << endl;
			system("Pause");
			break;
		}
		else {
			cout << "\nTecla inválida, tenta novamente!\n" << endl;
			system("Pause");
		}
		break;
	case '0':
		cout << "\nConfirme seu voto em BRANCO (s/n)" << endl;
		cin >> opt;
		if (opt == 's') {
			brancosPref += 1;
		}
		else if (opt == 'n') {
			cout << "\nPor favor, refaca o seu voto!\n" << endl;
			system("Pause");
			break;
		}
		else {
			cout << "\nTecla inválida, tenta novamente!\n" << endl;
			system("Pause");
		}
		break;
	default:
		cout << "\nConfirme seu voto NULO (s/n)" << endl;
		cin >> opt;
		if (opt == 's') {
			nulosPref += 1;
		}
		else if (opt == 'n') {
			cout << "\nPor favor, refaca o seu voto!\n" << endl;
			system("Pause");
			break;
		}
		else {
			cout << "\nTecla inválida, tenta novamente!\n" << endl;
			system("Pause");
		}
		break;
	}
}
void votaVereador() {
	system("cls");
	headerUrna();
	char option;
	cout << "\n\nCANDIDATOS A VEREADOR" << endl;
	cout << "\nCandidato 1: Ana Santos (Número: 101)" << endl;
	cout << "Candidato 2: Pedro Lima (Número: 102)" << endl;
	cout << "Candidato 3: Beatriz Costa (Número: 103)" << endl;
	cout << "Votar em branco: 0" << endl;
	cout << "Pressione qualquer tecla para votar nulo...\n" << endl;
	cin >> option;
	switch (option) {
		char opt;
		cout << "\n----------CANDIDATOS A VEREADOR----------\n" << endl;
	case '1':
		cout << "\nConfirme seu voto para o Candidato 1: Ana Santos (Número: 101) (s/n)" << endl;
		cin >> opt;
		if (opt == 's') {
			contVer1 += 1;
		}
		else if (opt == 'n') {
			cout << "\nPor favor, refaca o seu voto!\n" << endl;
			system("Pause");
			break;
		}
		else {
			cout << "\nTecla inválida, tenta novamente!\n" << endl;
			system("Pause");
		}
		break;
	case '2':
		cout << "\nConfirme seu voto para o Candidato 2: Pedro Lima (Número: 102) (s/n)" << endl;
		cin >> opt;
		if (opt == 's') {
			contVer2+= 1;
		}
		else if (opt == 'n') {
			cout << "\nPor favor, refaca o seu voto!\n" << endl;
			system("Pause");
			break;
		}
		else {
			cout << "\nTecla inválida, tenta novamente!\n" << endl;
			system("Pause");
		}
		break;
	case '3':
		cout << "\nConfirme seu voto para o Candidato 3: Beatriz Costa (Número: 103) (s/n)" << endl;
		cin >> opt;
		if (opt == 's') {
			contVer3 += 1;
		}
		else if (opt == 'n') {
			cout << "\nPor favor, refaca o seu voto!\n" << endl;
			system("Pause");
			break;
		}
		else {
			cout << "\nTecla inválida, tenta novamente!\n" << endl;
			system("Pause");
		}
		break;
	case '0':
		cout << "\nConfirme seu voto em BRANCO (s/n)" << endl;
		cin >> opt;
		if (opt == 's') {
			brancosVer += 1;
		}
		else if (opt == 'n') {
			cout << "\nPor favor, refaca o seu voto!\n" << endl;
			system("Pause");
			break;
		}
		else {
			cout << "\nTecla inválida, tenta novamente!\n" << endl;
			system("Pause");
		}
		break;
	default:
		cout << "\nConfirme seu voto NULO (s/n)" << endl;
		cin >> opt;
		if (opt == 's') {
			nulosVer += 1;
		}
		else if (opt == 'n') {
			cout << "\nPor favor, refaca o seu voto!\n" << endl;
			system("Pause");
			break;
		}
		else {
			cout << "\nTecla inválida, tenta novamente!\n" << endl;
			system("Pause");
		}
		break;
	}
}
void resultados() {
	system("cls");
	headerResultados();
	if ((contPref1 + contPref2 + contPref3 + nulosPref + brancosPref + contVer1 + contVer2 + contVer3 + nulosVer + brancosPref) != 0) {
		cout << "\n\n-------------------------------------CANDIDATOS A PREFEITO----------------------------------\n" << endl;
		cout << "\nCandidato 1: João Silva (Número: 10) -> Quantidade de votos: " << contPref1 << endl;
		cout << "\nCandidato 2: Maria Oliveira(Número : 20) -> Quantidade de votos: " << contPref2 << endl;
		cout << "\nCandidato 3: Maria Oliveira(Número : 30) -> Quantidade de votos: " << contPref3 << endl;
		cout << "\nBrancos -> Quantidade de votos: " << brancosPref << endl;
		cout << "\nNulos -> Quantidade de votos: " << nulosPref << endl;
		cout << "______________________________________________________________________________________________";
		if ((contPref1 > contPref2) && (contPref1 > contPref3)) {
			cout << "\n\nCandidato 1: João Silva (Número: 10) obteve " << contPref1 << " votos e venceu a eleição para prefeito!\n" << endl;
		}
		else if ((contPref2 > contPref1) && (contPref2 > contPref3)) {
			cout << "\n\nCandidato 2: Maria Oliveira(Número : 20) obteve " << contPref2 << " votos e venceu a eleição para prefeito!\n" << endl;
		}
		else {
			cout << "\n\nCandidato 3: Maria Oliveira(Número : 30) obteve " << contPref3 << " votos e venceu a eleição para prefeito!\n" << endl;
		}
		cout << "______________________________________________________________________________________________";
		cout << "\n";
		cout << "\n\n--------------------------------------CANDIDATOS A VEREADOR----------------------------------\n" << endl;
		cout << "\nCandidato 1: Ana Santos (Número: 101) -> Quantidade de votos: " << contVer1 << endl;
		cout << "\nCandidato 2: Pedro Lima (Número: 102) -> Quantidade de votos: " << contVer2 << endl;
		cout << "\nCandidato 3: Beatriz Costa (Número: 103) -> Quantidade de votos: " << contVer3 << endl;
		cout << "\nBrancos -> Quantidade de votos: " << brancosVer << endl;
		cout << "\nNulos -> Quantidade de votos: " << nulosVer << endl;
		cout << "______________________________________________________________________________________________";
		if ((contVer1 > contVer2) && (contVer1 > contVer3)) {
			cout << "\n\nCandidato 1: João Silva (Número: 10) obteve " << contVer1 << " votos e venceu a eleição para vereador!\n" << endl;
		}
		else if ((contVer2 > contVer1) && (contVer2 > contVer3)) {
			cout << "\n\nCandidato 2: Maria Oliveira(Número : 20) obteve " << contVer2 << " votos e venceu a eleição para vereador!\n" << endl;
		}
		else {
			cout << "\n\nCandidato 3: Maria Oliveira(Número : 30) obteve " << contVer3 << " votos e venceu a eleição para vereador!\n" << endl;
		}
		cout << "______________________________________________________________________________________________";
		cout << "\n\n";
	}
	else {
		cout << "Nao há dados a exibir.\n" << endl;
	}
	system("Pause");
}