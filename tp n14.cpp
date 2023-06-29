#include <bits\stdc++.h>
using namespace std;

string InsertarCaracter(string palabra, char separador){
	
	string palabraseparada;
	for(int i=0; i<palabra.size(); i++){
		palabraseparada = palabraseparada + palabra[i];
		palabraseparada = palabraseparada + separador;
	}
	return palabraseparada;
}

int main(){
	string Palabra;
	char Separador;
	
	cout<<"ingrese una palabra : ";
	cin>>Palabra; 
	
	cout<<"ingrese un caracter para usar como separador : ";
	cin>>Separador;
	
	string PalabraSeparada = InsertarCaracter(Palabra,Separador);
	
	cout<<PalabraSeparada<<endl;
	
	return 0;
}
