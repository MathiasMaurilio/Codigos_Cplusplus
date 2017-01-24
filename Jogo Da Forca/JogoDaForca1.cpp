#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

struct estrutura{
	char palavra[10];
	char imprimir[10];
	char lpalavra;
	int testo;
	int letra;
	int nletra;
}forca;

void imprimirMenu();
void imprimirBoneco();
void palavras();
void dica();

int main(){

	char bancoPalavra[10][10] = {
		"Flecha",
		"Macaco",
		"Tanque",
		"Revolver",
		"Militar",
		"Guerra",
		"Terno",
		"Banana",
		"Touro",
		"Boca"
	};

	srand(time(NULL));
	forca.letra = rand() % 10;

	while(bancoPalavra[forca.letra][forca.nletra] != '\0') {
		forca.palavra[forca.nletra] = toupper(bancoPalavra[forca.letra][forca.nletra]);
		forca.imprimir[forca.nletra] = '_';
        forca.nletra++;
    }

	palavras();
	return 0;
}

void imprimirMenu(){
	cout << "\n\n                             Bem Vindo Ao Jogo da Forca\n\n\n\n";
	dica();
	imprimirBoneco();
}

void palavras(){
	int test;
	int teste = 1;
	int numerometodo;
	int numeroimprimir = 0;
	forca.testo = 6;

	
	while(forca.testo != 0){
		imprimirMenu();
		numerometodo = 0;
		cout << "\n\nChances: " << forca.testo <<"\n\n\n";

		for(int i = 0; i < forca.nletra;i++){
			cout << forca.imprimir[i] << " ";
		}

		cout << "\n\n\nDigite Uma letra: ";
		cin >> forca.lpalavra;
		
		for(int i = 0; i < forca.nletra; i++){
			forca.lpalavra = toupper(forca.lpalavra);

			if(forca.imprimir[i] == forca.lpalavra){
				numerometodo++;
			}
			if(forca.imprimir[i] != forca.lpalavra){
				if(forca.palavra[i] == forca.lpalavra){
					forca.imprimir[i] = forca.lpalavra;
					numeroimprimir++;
				}
				else if(forca.palavra[i] != forca.lpalavra){
					numerometodo++;
				}
			}
			if(numerometodo >= forca.nletra){
				forca.testo--;
			}
		}
		if(numeroimprimir >= forca.nletra){
			system("cls");
			cout << "\n\n                             Bem Vindo Ao Jogo da Forca\n\n\n\n";
			cout << "\n\nChances: " << forca.testo <<"\n\n\n";

			for(int i = 0; i < forca.nletra;i++){
				cout << forca.imprimir[i] << " ";
			}
			cout << "\n\n\n\n  \\ O /";
			cout << "\n    |";
			cout << "\n   / \\";
			cout << "\n\nVoce Ganhou\n\n";
			system("pause");
			break;
		}
		system("cls");
	}
	if(forca.testo == 0){
		if (forca.testo == 0){
			cout << "\n\n                             Bem Vindo Ao Jogo da Forca\n\n\n\n";
			cout << "\n ------\n";
			cout << "|      |";
			cout << "\n|      O";
			cout << "\n|     /|\\";
			cout << "\n|     / \\";
			cout << "\n|";
			cout << "\n\n\nVoce Perdeu";
			cout << "\n\n\n\nPalavra: " << forca.palavra << "\n\n\n";
			system("pause");
		}
	}
}

void dica(){
	if(forca.letra == 0){
		cout << "Numero de Letras: " << forca.nletra << "                      Dica: Complemento de Uma Arma Branca" << endl;
	}
	else if(forca.letra == 1){
		cout << "Numero de Letras: " << forca.nletra << "                      Dica: Animal" << endl;		
	}
	else if(forca.letra == 2){
		cout << "Numero de Letras: " << forca.nletra << "                      Dica: Maquina de Guerra" << endl;
	}
	else if(forca.letra == 3){
		cout << "Numero de Letras: " << forca.nletra << "                      Dica: Arma de Fogo" << endl;
	}
	else if(forca.letra == 4){
		cout << "Numero de Letras: " << forca.nletra << "                      Dica: Policial" << endl;
	}
	else if(forca.letra == 5){
		cout << "Numero de Letras: " << forca.nletra << "                      Dica: Soltados" << endl;
	}
	else if(forca.letra == 6){
		cout << "Numero de Letras: " << forca.nletra << "                      Dica: Tipo de Roupa" << endl;
	}
	else if(forca.letra == 7){
		cout << "Numero de Letras: " << forca.nletra << "                      Dica: Fruta" << endl;
	}
	else if(forca.letra == 8){
		cout << "Numero de Letras: " << forca.nletra << "                      Dica: Animal" << endl;
	}
	else if(forca.letra == 9){
		cout << "Numero de Letras: " << forca.nletra << "                      Dica: Parte do Corpo" << endl;
	}

}

void imprimirBoneco(){
	cout << "\n ------\n";
	cout << "|      |";
	if(forca.testo == 6){
		cout << "\n|";
		cout << "\n|";
		cout << "\n|";
		cout << "\n|";
	}
	if(forca.testo == 5){
		cout << "\n|      O";
		cout << "\n|";
		cout << "\n|     ";
		cout << "\n|";
	}
	else if(forca.testo == 4){
		cout << "\n|      O";
		cout << "\n|      |";
		cout << "\n|";
		cout << "\n|";
	}
	else if(forca.testo == 3){
		cout << "\n|      O";
		cout << "\n|     /|";
		cout << "\n|     ";
		cout << "\n|";
	}
	else if(forca.testo == 2){
		cout << "\n|      O";
		cout << "\n|     /|\\";
		cout << "\n|     ";
		cout << "\n|";
	}
	else if(forca.testo == 1){
		cout << "\n|      O";
		cout << "\n|     /|\\";
		cout << "\n|     / ";
		cout << "\n|";
	}
	else if (forca.testo == 0){
		cout << "\n|      O";
		cout << "\n|     /|\\";
		cout << "\n|     / \\";
		cout << "\n|";
	}
}
