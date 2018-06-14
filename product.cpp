#include <iostream>
#include "product.h"

using namespace std;

Product::Product(const string & n,
                 const string & f,
                 double c, bool l,
                 double dost)
{
    description=n;
    firm=f;
    price=c;
    out_of_date=l;
    availible=dost;
}

void Product::show() const
{
    cout << "Product: " << description << endl;
    cout << "Firm: " << firm << endl;
    cout << "Price: " << price << " zl" << endl;
    cout << "Will it soon be out of date: ";
    if (out_of_date==false)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
}

void Product::add(double n)
{
    availible+=n;
}

bool Product::takeoff(double n)
{
	if (availible>=n)
	{
        availible-=n;
		return true;
	}
	else
		return false;
}

Drink::Drink(const Product & p,
             double vol) : Product(p)
{
    volume=vol;
}

Drink::Drink(const string & n,
             const string & f,
             double c,
             bool l,
             double dost,
             double vol) : Product (n,f,c,l,dost)
{
    volume=vol;
}

void Drink::show() const
{
    Product::show();
    cout << "Volume: " << volume << " l" << endl;
    cout << "Number of bottles: " << availible << endl << endl;
}

Vegetable::Vegetable(const Product & p,
                 double wag) : Product(p)
{
    weight=wag;
}

Vegetable::Vegetable(const string & n,
                 const string & f,
                 double c, bool l,
                 double dost,
                 double wag) : Product(n,f,c,l,dost)
{
    weight=wag;
}

void Vegetable::show() const
{
    Product::show();
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Availible: " << availible << " kg" << endl << endl;
}


Fruit::Fruit(const Product & p,
             int num) : Product(p)
{
    number=num;
}


Fruit::Fruit(const string & n,
             const string & f,
             double c, bool l,
             double dost,
             int num) : Produñt(n,f,c,l,dost)
{
    number=num;
}


void Fruit::show() const
{
    Product::show();
    cout << "Number in 1 package: " << number << endl;
    cout << "Number of availible packages: " << availible << endl << endl;
}


Cheese::Cheese(const Product & p,
               double wag) : Product(p)
{
    weight=wag;
}


Cheese::Cheese(const string & n,
               const string & f,
               double c, bool l,
               double dost,
               double wag) : Product(n,f,c,l,dost)
{
    weight=wag;
}


void Cheese::show() const
{
    Product::show();
    cout << "Weight: " << weight << " g" << endl;
    cout << "The number of availible: " << availible << endl << endl;
}


Cookie::Cookie(const Product & p,
               int num) : Product(p)
{
    number=num;
}


Cookie::Cookie(const string & n,
               const string & f,
               double c, bool l,
               double dost,
               int num) : Product(n,f,c,l,dost)
{
    number=num;
}


void Cookie::show() const
{
    Product::show();
    cout << "The availible number: " << number << endl;
    cout << "Assortment: " << availible << endl << endl;
}


Jerky::Jerky(const Product & p,
             double wag) : Product(p)
{
    weight=wag;
}


Jerky::Jerky(const string & n,
                 const string & f,
                 double c, bool l,
                 double dost,
                 double wag) : Product(n,f,c,l,dost)
{
    weight=wag;
}


void Jerky::show() const
{
    Product::show();
    cout << "Weight: " << weight << " g" << endl;
    cout << "The number of availible products: " << availible << endl << endl;
}

