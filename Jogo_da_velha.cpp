#include <iostream>
#include <cstdlib>
#include <locale> // biblioteca acentuação
#include <string>
using namespace std;
#define MaxL 3
#define MaxC 3

int main(int argc, char** argv) {
	setlocale (LC_ALL, "Portuguese");
	
	char Matriz [MaxL][MaxC];
	char V = '_';
	char P;
	int NL = 0;
	int NC;
	
	cout << "Jogo da Velha "<< endl;
	cout << endl;
	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX "<< endl;
	cout << endl;
	cout << "  Para jogar informe as coordenadas "<< endl;
	cout << endl;
	cout << " ( O Número da linha e o Número da linha coluna )"<< endl;
	cout << endl;
	cout << endl;
	
	for (int i =0; i<MaxL; i++ ){
		for (int j =0; j<MaxC; j++ ){
			Matriz[i][j] = V;
			cout << "____|" ;
		}
		cout << endl ;
	}
	cout << endl;
	
	for(int i=0; i<9; i++){
	
		cout << "informe um numero da linha: 0, 1 ou 2. "<< endl;
		cin >> NL;
		
		if (NL == 0 || NL == 1 || NL == 2 ){
			cout << "informe um numero da coluna: 0, 1 ou 2. "<< endl;
			cin >> NC;
			
			if (NC == 0 || NC == 1 || NC == 2  ){
				P = Matriz[NL][NC];
				
				if(V == P){
					if(i % 2 == 0){
						Matriz[NL][NC] = 'X';		
					} else{
						Matriz[NL][NC] = 'O';
					}
				}else {
					cout << "Cordenada invalida" << endl;
					i--;
				}
				
			}else {
				   cout << " O numero informado é invalido. "<< endl;
				   
			}
			
		}else {
			   cout << " O numero informado é invalido. "<< endl;
		}
		cout << endl;
		cout << endl;
		
		for (int i =0; i<MaxL; i++ ){
			for (int j =0; j<MaxC; j++ ){
				cout << Matriz[i][j];
				cout << "____|" ;
			}
			cout << endl ;
		}
		cout << endl;
	}	
	return 0;
}
