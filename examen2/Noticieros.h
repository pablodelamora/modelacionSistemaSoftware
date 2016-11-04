//#ifndef Clases_h
//#define Clases_h
#include <string>
#include <iostream>
using namespace std;

class MVSNoticias
{
	//int numero;
	//string noticia;

public:
	//constructor
	//MVSNoticias(int num) : numero(num){}
	//MVSNoticias(string not) : noticia(not){}

	//update function es llamada por observer cuando haya algún cambio en valores
	void printUpdate(string val)
	{
		cout << "Se ha agregado la noticia (  " << val << " ) al noticiero MVS \n";
	}
};

class Televisa
{
	//int numero;
	//string noticia;

public:
	//constructor
	//MVSNoticias(int num) : numero(num){}
	//MVSNoticias(string not) : noticia(not){}

	//update function es llamada por observer cuando haya algún cambio en valores
	void printUpdate(string val)
	{
		cout << "Se ha agregado la noticia (  " << val << " ) al noticiero Televisa \n";
	}
};


class TVAzteca
{
	//int numero;
	//string noticia;

public:
	//constructor
	//MVSNoticias(int num) : numero(num){}
	//MVSNoticias(string not) : noticia(not){}

	//update function es llamada por observer cuando haya algún cambio en valores
	void printUpdate(string val)
	{
		cout << "Se ha agregado la noticia (  " << val << " ) al noticiero TV Azteca \n";
	}
};



class RadioFormula
{
	//int numero;
	//string noticia;

public:
	//constructor
	//MVSNoticias(int num) : numero(num){}
	//MVSNoticias(string not) : noticia(not){}

	//update function es llamada por observer cuando haya algún cambio en valores
	void printUpdate(string val)
	{
			cout << "Se ha agregado la noticia (  " << val << " ) al noticiero Radio Formula \n";
	}
};

class CNNNoticias
{
	//int numero;
	//string noticia;

public:
	//constructor
	//MVSNoticias(int num) : numero(num){}
	//MVSNoticias(string not) : noticia(not){}

	//update function es llamada por observer cuando haya algún cambio en valores
	void printUpdate(string val)
	{
		cout << "Se ha agregado la noticia (  " << val << " ) al noticiero CNN \n";
	}
};

//////////////////////////////////////////////////////////////////////////////////////////////////////
//Personas Que pueden publicar
//////////////////////////////////////////////////////////////////////////////////////////////////////


class Politico
{
	string value;

	MVSNoticias mvs;
	Televisa televisa;
	TVAzteca tvazteca;
	RadioFormula radioformula;
	CNNNoticias cnnnoticias;

	bool activaMVS, activaTelevisa, activaTVAzteca, activaRadioformula, activaCNN;

public:

	Politico(bool act1, bool act2, bool act3, bool act4, bool act5){
		activaMVS = act1;
		activaTelevisa = act2;
		activaTVAzteca = act3;
		activaRadioformula = act4;
		activaCNN = act5;
	}

	void setValue(string input){
		value = input;
		notify();
	}
	void notify()
	{
		if (activaMVS)
			mvs.printUpdate(value);
		if (activaTelevisa)
			televisa.printUpdate(value);
		if (activaTVAzteca)
			tvazteca.printUpdate(value);
		if (activaRadioformula)
			radioformula.printUpdate(value);
		if (activaCNN)
			cnnnoticias.printUpdate(value);
	}
};






/*
class PenaNieto
{
	string value;
	//objetos de tipo observers son parte de Subject. para extender funcionalidad sería un arreglo dinámico de objetos observadores
	MVSNoticias mvs;
	Televisa televisa;
	TVAzteca tvazteca;
	RadioFormula radioformula;
	CNNNoticias cnnnoticias;
public:
	//constructor con lista de inicialización
	//Subject() : suma(4), resta(3){}
	//asignar valor guarda el valor deseado y manda llamar notify
	void setValue(string input)
	{
		value = input;
		notify();
	}
	//notify manda llamar los comandos de printUpdate de los objetos
	void notify()
	{
		mvs.printUpdate(value, 1);
		televisa.printUpdate(value, 1);
		tvazteca.printUpdate(value, 1);
		radioformula.printUpdate(value, 1);
		//cnnnoticias.printUpdate(value, 1);
	}
};
class Hilaria
{
	string value;
	//objetos de tipo observers son parte de Subject. para extender funcionalidad sería un arreglo dinámico de objetos observadores
	MVSNoticias mvs;
	Televisa televisa;
	TVAzteca tvazteca;
	RadioFormula radioformula;
	CNNNoticias cnnnoticias;
public:
	//constructor con lista de inicialización
	//Subject() : suma(4), resta(3){}
	//asignar valor guarda el valor deseado y manda llamar notify
	void setValue(string input)
	{
		value = input;
		notify();
	}
	//notify manda llamar los comandos de printUpdate de los objetos
	void notify()
	{
		mvs.printUpdate(value, 2);
		televisa.printUpdate(value, 2);
		tvazteca.printUpdate(value, 2);
		radioformula.printUpdate(value, 2);
		cnnnoticias.printUpdate(value, 2);
	}
};
class DiscursoTrumpadas
{
	string value;
	//objetos de tipo observers son parte de Subject. para extender funcionalidad sería un arreglo dinámico de objetos observadores
	MVSNoticias mvs;
	Televisa televisa;
	TVAzteca tvazteca;
	RadioFormula radioformula;
	CNNNoticias cnnnoticias;
public:
	//constructor con lista de inicialización
	//Subject() : suma(4), resta(3){}
	//asignar valor guarda el valor deseado y manda llamar notify
	void setValue(string input)
	{
		value = input;
		notify();
	}
	//notify manda llamar los comandos de printUpdate de los objetos
	void notify()
	{
		mvs.printUpdate(value, 3);
		televisa.printUpdate(value, 3);
		tvazteca.printUpdate(value, 3);
		radioformula.printUpdate(value, 3);
		cnnnoticias.printUpdate(value, 3);
	}
};
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////
