#ifndef STORE_H
#define STORE_H

#include "product.h"
#include <string>
#include <vector>
using namespace std;


class Store
{
private:
    string name_of_the_store;
    vector<Product *> products;

public:
    Store(const string & n, vector<Product *> prod);
    ~Store() {}
    void show_store_status() const;
    bool buy(Product * p, double n);
    bool sell(Product * p, double n);
};

#endif
