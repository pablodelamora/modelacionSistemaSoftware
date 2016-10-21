//#include<iostream>
//using namespace std;
#include "Noticieros.h"
int main()
{
	string a;
	//string a = "Noticia !!!!!  ";
	//PenaNieto mySubject;
	//Hilaria mySubject2;
	//DiscursoTrumpadas mySubject3;
	Politico penaNieto(1, 1, 1, 1, 0);
	Politico hilaria(1, 1, 1, 1, 1);
	Politico discursoTrumpadas(1, 1, 1, 1, 1);
	int m=0;

	cout << "Dame la noticia: " << endl;
	getline(cin, a);

	while (m != 4){
		cout << "\t\t\tElija una opcion\n\n";
		cout << "1  Publicar como Pena Nieto\n";
		cout << "2  Publicar como Hilaria\n";
		cout << "3  Publicar como Discurso de las Trompadas\n";
		cout << "4  Salir\n\n";
		cin >> m;

		switch (m)
		{
		case 1: cout << "Peña Nieto: " << endl;
				penaNieto.setValue(a);
				cout << endl;
				break;
		case 2:	cout << "Hilaria: " << endl;
				hilaria.setValue(a);
				cout << endl;
				break;
		case 3: cout << "Discurso Trumpadas: " << endl;
				discursoTrumpadas.setValue(a);
				cout << endl; break;

		case 4:cout << "Ya esta fuera" << endl; break;
		default: cout << "El valor ingresado no esta en el menu" << endl;
		}
	}

	cin.ignore();
	//system("pause");
	return 0;
}
