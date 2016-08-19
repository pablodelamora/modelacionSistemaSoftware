#include <iostream>

using namespace std;
class Product
{
public:
	virtual void configurar() = 0;
	virtual void ensamblar() = 0;
};

class desktop : public Product
{
	friend class ConcreteCreator;

	void configurar()
	{
		cout << "Estoy configurando la desktop\n";
	}
	void ensamblar()
	{
		cout << "Estoy ensamblando la desktop\n";
	}
private:
	desktop(){}
};

class laptop : public Product
{
	friend class ConcreteCreator;

	void configurar()
	{
		cout << "Estoy configurando la laptop\n";
	}
	void ensamblar()
	{
		cout << "Estoy ensamblando la laptop\n";
	}
private:
	laptop(){};
};

class tablet : public Product
{
	friend class ConcreteCreator;

	void configurar()
	{
		cout << "configurando la tablet\n";
	}
	void ensamblar()
	{
		cout << "ensamblando la tablet\n";
	}
private:
	tablet(){};
};

class netbook : public Product
{
	friend class ConcreteCreator;

	void configurar()
	{
		cout << "Estoy configurando la netbook\n";
	}
	void ensamblar()
	{
		cout << "Estoy ensamblando la netbook\n";
	}
private:
	netbook(){};
};

class Creator
{
public:
	virtual Product* factoryMethod(int) = 0;

	Product* createProduct(int tipo)
	{
		Product* myProduct = factoryMethod(tipo);
		myProduct->configurar();
		myProduct->ensamblar();
		return myProduct;
	}
};

class ConcreteCreator : public Creator
{
public:
	Product* factoryMethod(int tipo)
	{
		if (tipo == 1)
			return new desktop;
		else if (tipo == 2)
			return new laptop;
		else if (tipo == 3)
			return new netbook;
		else if (tipo == 4)
			return new tablet;
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
	Product* miProducto = cliente->createProduct(1);

	system("pause");
	return 1;
}
