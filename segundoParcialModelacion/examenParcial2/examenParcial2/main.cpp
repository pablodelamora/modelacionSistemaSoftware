//#include<iostream>
//using namespace std;
#include "Noticieros.h"
int main()
{

	string a = "Noticia !!!!!  ";
	PenaNieto mySubject;
	Hilaria mySubject2;
	DiscursoTrumpadas mySubject3;
	int m=0;

	while (m != 4){
		cout << "\t\t\tElija una opcion\n\n";
		cout << "1  Publicar como Pena Nieto\n";
		cout << "2  Publicar como Hilaria\n";
		cout << "3  Publicar como Discurso de las Trompadas\n";
		cout << "4  Salir\n\n";
		cin >> m;

		switch (m)
		{
		case 1: mySubject.setValue(a);
				cout << endl; 
				break;
		case 2:	mySubject2.setValue(a);
				cout << endl; 
				break;
		case 3: mySubject3.setValue(a);
			cout << endl; break;
		case 4:cout << "Ya esta fuera" << endl; break;
		default: cout << "El valor ingresado no esta en el menu" << endl;
		}
	}

	cin.ignore(); 
	system("pause");
	return 0;
}