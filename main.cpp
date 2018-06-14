#include <iostream>
#include <string>
#include <vector>
#include "product.h"
#include "store.h"


int main()
{
	using namespace std;

	Drink p3("Napoj", "Coca-Cola", 3.59, false, 500, 1.75);
	Drink p4("Sok pomaranczowy", "Tymbark", 4.99, false, 200, 0.8);
	Drink p5("Napoj izotoniczny", "4Game", 3.20, true, 500, 0.5);

	Vegetable p11("Cebula", "RPG", 3.90, false, 50, 2);
	Vegetable p12("Buraki", "RPG", 6.30, false, 30, 1);

	Fruit p21("Jablko", "Owoce", 4.50, false, 65, 6);
	Fruit p22("Pomarancza", "ArgFruit", 5.67, false, 35, 4);

	Cheese p31("Ser Studencki", "Mlekowita", 4.99, true, 50, 220);
	Cheese p32("Ser Podlaski", "Mlekowita", 5.99, true, 75, 150);

	Cookie p41("Hit", "Nestle", 4.99, false, 70, 1);
	Cookie p42("Delicje", "Wedel", 4.50, false, 80, 1);

    Jerky p51("Poledwica ", "Wedliny", 6.79, true, 30, 150);
	Jerky p52("Kielbasa Krakowska", "MeatProd", 5.99, true, 35, 150);



	Product * pp3 = &p3;
	Product * pp4 = &p4;
	Product * pp5 = &p5;

	Product * pp11 = &p11;
	Product * pp12 = &p12;

	Product * pp21 = &p21;
	Product * pp22 = &p22;

    Product * pp31 = &p31;
	Product * pp32 = &p32;

	Product * pp41 = &p41;
	Product * pp42 = &p42;

	Product * pp51 = &p51;
	Product * pp52 = &p52;


	vector<Product *> pp = {pp3,pp4,pp5,pp11,pp12,pp21,pp22,pp31,pp32,pp41,pp42,pp51,pp52};

	Store s1("KatzBalgerr Super Mega Store",pp);
	s1.show_store_status();

	return 0;
}
