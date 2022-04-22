#include <iostream>
#include <string>
#include "Color.h"

using namespace std;

class Car
{
public:
	string mbrand;
	string mmodel;
	string mlicensePlate;
	Color mcarColor;
	int mkm;
	float mcarPrice;

	Car();
	Car(string brand, string model, string licensePlate, Color carColor, int km, float carPrice);
	~Car();

	string GetBrand();
	string GetModel();
	string GetLicensePlate();
	int GetKm();
	float GetCarPrice();

	void Intro();
};

