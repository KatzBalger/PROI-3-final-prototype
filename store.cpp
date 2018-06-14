#include <iostream>
#include <vector>
#include "product.h"
#include "store.h"

using namespace std;


Store::Store(const string & n, vector<Product *> prod )

{
    name_of_the_store=n;
    products=prod;
}

void Store::show_store_status() const
{
    cout << "\t\t   " << name_of_the_store << "   " << endl;
    cout << "Availible products: " << endl << endl;
    int i;
    int number_of_products = products.size();
    {
        products[i]->show();
    }
}

bool Store::buy(Product * p, double n)
{
    int i;
    bool if_availible=0;
    int number_of_products = products.size();
    for (i=0; i<number_of_products; i++)
    {
        if (products[i]==p)
        {
            if_availible=1;
            break;
        }
    }

    if (if_availible==1)
    {
        products[i]->add(n);
        return true;
    }
    else
    {
        cout << "Sorry, we do not sell such products." << endl;
        return false;
    }
}

bool Store::sell(Product * p, double n)
{
    int i;
    bool if_availible=0;
    int number_of_products = products.size();
    for (i=0; i<number_of_products; i++)
    {
        if (products[i]==p)
        {
            if_availible=1;
            break;
        }
    }

    if (if_availible==1)
    {
		if (products[i]->takeoff(n))
			return true;
        else
			return false;
    }
    else
    {
        cout << "Sorry, the product is unavailible\n";
        return false;
    }
}
