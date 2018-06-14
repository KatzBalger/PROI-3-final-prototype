#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using namespace std;


class Product
{
private:
    string description;
    string firm;
    double price;
    bool out_of_date;
protected:
    double availible;
public:
    Product(const string & n = "brak",
            const string & f = "brak",
            double c = 0.0,
            bool l = 0,
            double dost = 0);
    virtual void show() const;
    virtual ~Product() {}
    void add(double n=0);
    bool takeoff(double n=0);
};


class Drink : public Product
{
private:
    double volume;

public:
    Drink(const Product & p, double vol = 0);
    Drink(const string & n = "brak",
          const string & f = "brak",
          double c = 0.0,
          bool l = 0,
          double dost = 0,
          double vol = 0.0);
    virtual void show() const;
};



class Vegetable : public Product
{
private:
    double weight;
public:
    Vegetable(const Product & p, double wag = 0);
    Vegetable(const string & n = "brak",
              const string & f = "brak",
              double c = 0.0,
              bool l = 0,
              double dost = 0,
              double wag = 0.0);
    virtual void show() const;
};



class Fruit : public Product
{
private:
    int number;
public:
    Fruit(const Product & p, int num = 0);
    Fruit(const string & n = "brak",
          const string & f = "brak",
          double c = 0.0,
          bool l = 0,
          double dost = 0,
          int num = 0);
    virtual void show() const;
};



class Cheese : public Product
{
private:
    double weight;
public:
    Cheese(const Product & p, double wag = 0.0);
    Cheese(const string & n = "brak",
           const string & f = "brak",
           double c = 0.0,
           bool l = 0,
           double dost = 0,
           double wag = 0.0);
    virtual void show() const;
};



class Cookie : public Product
{
private:
    int number;
public:
    Cookie(const Product & p, int num = 0);
    Cookie(const string & n = "brak",
           const string & f = "brak",
           double c = 0.0,
           bool l = 0,
           double dost = 0,
           int num = 0);
    virtual void show() const;
};



class Jerky : public Product
{
private:
    double weight;
public:
    Jerky(const Product & p, double wag = 0.0);
    Jerky(const string & n = "brak",
          const string & f = "brak",
          double c = 0.0,
          bool l = 0,
          double dost = 0,
          double wag = 0.0);
    virtual void show() const;
};


#endif
