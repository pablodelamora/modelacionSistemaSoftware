#include <iostream>

using namespace std;
class Pastel
{
public:
	virtual void batido() = 0;
	virtual void amasado() = 0;
	virtual void horneado() = 0;
	virtual void decorado() = 0;
	virtual void empacado() = 0;
};

class tresLeches : public Pastel
{
	friend class ConcreteCreator;

	void batido()
	{
		cout << "Batido\n";
	}
	void amasado()
	{
		cout << "Amasado\n";
	}
	void horneado()
	{
		cout << "Horneado\n";
	}
	void decorado()
	{
		cout << "Decorado\n";
	}
	void Empacado()
	{
		cout << "Empacado\n";
	}
private:
	tresLeches(){}
};

class sacher : public Pastel
{
	friend class ConcreteCreator;

	void batido()
	{
		cout << "Batido\n";
	}
	void amasado()
	{
		cout << "Amasado\n";
	}
	void horneado()
	{
		cout << "Horneado\n";
	}
	void decorado()
	{
		cout << "Decorado\n";
	}
	void Empacado()
	{
		cout << "Empacado\n";
	}
private:
	sacher(){}
};



class imposible : public Pastel
{
	friend class ConcreteCreator;

	void batido()
	{
		cout << "Batido\n";
	}
	void amasado()
	{
		cout << "Amasado\n";
	}
	void horneado()
	{
		cout << "Horneado\n";
	}
	void decorado()
	{
		cout << "Decorado\n";
	}
	void Empacado()
	{
		cout << "Empacado\n";
	}
private:
	imposible(){}
};

class Creator
{
public:
	virtual Pastel* factoryMethod(int) = 0;

	Pastel* createProduct(int tipo)
	{
		Pastel* myProduct = factoryMethod(tipo);
		myProduct->batido();
		return myProduct;
	}
};

class ConcreteCreator : public Creator
{
public:
	Pastel* factoryMethod(int tipo)
	{
		if (tipo == 1)
			return new tresLeches;
		else if (tipo == 2)
			return new sacher;
	}
	static ConcreteCreator* GetInstance(){
		static ConcreteCreator* instance = new ConcreteCreator;
		return instance;
	}
private:
	ConcreteCreator(){};
};

int main()
{
	Creator* cliente = ConcreteCreator::GetInstance();
	Pastel* miProducto = cliente->createProduct(1);

	system("pause");
	return 1;
}