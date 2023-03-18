#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

class Ingredient {
public:
	Ingredient() { };

	Ingredient(string altNume, float altPret, int altaCantitate) {
		nume = altNume;
		pret = altPret;
		cantitate = altaCantitate;
	}
	friend ostream& operator <<(ostream& out, const Ingredient& i)
	{
		out << i.nume << " " << i.pret << " " << i.cantitate << '\n';
		return out;
	}
	friend istream& operator >>(istream& in, Ingredient& i)
	{
		cout << "Nume ingredient:";
		in >> i.nume;
		cout << "Pret Ingredient:";
		in >> i.pret;
		cout << "Cantitate:";
		in >> i.cantitate;
		return in;
	}
	Ingredient& operator +=(int var)
	{
		cantitate += var;
		return *this;
	}
	Ingredient(const Ingredient& i)
	{	
		nume = i.nume;
		pret = i.pret;
		cantitate = i.cantitate;
	}
	Ingredient& operator =(const Ingredient& i)
	{
		nume = i.nume;
		pret = i.pret;
		cantitate = i.cantitate;
		return *this;
	}
private:
	string nume;
	float pret;
	int cantitate;
};




class Pizza {
public:
	Pizza(){}
	Pizza(string altaDenumire)
	{
		denumire = altaDenumire;
	}
	
	friend istream& operator >>(istream& in, Pizza& p)
	{
		cout << "Denumire Pizza:";
		in >> p.denumire;
		return in;
	}
	friend ostream& operator <<(ostream& out, const Pizza& p)
	{
		out << p.denumire << '\n' << p.nrIngrediente<<'\n';
		for (int i = 0; i < p.nrIngrediente; i++)
		{
			out<<p.Ingr[i];
		}
		return out;
	}
	Pizza& operator =(const Pizza& p)
	{
		denumire = p.denumire;
		nrIngrediente = p.nrIngrediente;
		Ingr = p.Ingr;
		return *this;
	}
	Pizza& operator +(const Ingredient& i)
	{
		Ingr.push_back(i);
		nrIngrediente = size(Ingr);
		return *this;
	}

private:
	string denumire;
	int nrIngrediente;
	vector<Ingredient>Ingr;
};
