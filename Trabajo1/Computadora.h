#include <iostream>
#include "string.h"
using namespace std;

class Computadora{
	public: 
		string componentes;
		string modelo;
		string sistemaOperativo;
		Computadora(){};
		Computadora(string modelo, string sistemaOperativo){
			this->modelo = modelo;
			this->sistemaOperativo = sistemaOperativo;
		}
		void produce();
};

void Computadora::produce(){
	cout << "Los componentes son: " << this->componentes << "\n";
	cout << "Se estan ensamblando los componentes\n";
	cout << "Instalando el sistema operativo " << this->sistemaOperativo << "\n";
	cout << "Empaquetando";
}

class Desktop:public Computadora{
	public:
		Desktop(){};
		Desktop(string componentes, string modelo, string sistemaOperativo){
			this->componentes = componentes;
			this->modelo = modelo;
			this->sistemaOperativo = sistemaOperativo;
		}

};




class Laptop :public Computadora{
public:
	Laptop(){};
	Laptop(string componentes, string modelo, string sistemaOperativo){
		this->componentes = componentes;
		this->modelo = modelo;
		this->sistemaOperativo = sistemaOperativo;
	}

};







class Netbook :public Computadora{
public:
	Netbook(){};
	Netbook(string componentes, string modelo, string sistemaOperativo){
		this->componentes = componentes;
		this->modelo = modelo;
		this->sistemaOperativo = sistemaOperativo;
	}

};






class Tablet :public Computadora{
public:
	Tablet(){};
	Tablet(string componentes, string modelo, string sistemaOperativo){
		this->componentes = componentes;
		this->modelo = modelo;
		this->sistemaOperativo = sistemaOperativo;
	}

};