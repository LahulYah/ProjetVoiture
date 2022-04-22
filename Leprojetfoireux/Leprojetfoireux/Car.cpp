#include "Car.h"
#include "Person.h"

Car::Car()
{
	mbrand = "Fiat";
	mmodel = "Panda";
	mlicensePlate = "AA-123-BB";
	mcarColor = Color::cyan;
	mkm = 7648;
	mcarPrice = 23914;
}
Car::Car(string brand, string model, string licensePlate, Color carColor, int km, float carPrice)
{
	mbrand = brand;
	mmodel = model;
	mlicensePlate = licensePlate;
	mcarColor = carColor;
	mkm = km;
	mcarPrice = carPrice;
}

Car::~Car() {}

string Car::GetBrand() { return mbrand; };
string Car::GetModel() { return mmodel; };
string Car::GetLicensePlate() { return mlicensePlate; };
int Car::GetKm() { return mkm; };
float Car::GetCarPrice() { return mcarPrice; };

void Car::Intro()
{

	cout << "\n";
	cout << "Voiture en vente :" << "\n";
	cout << "\n";
	cout << "Marque : " << mbrand << "\n";
	cout << "Modele : " << mmodel << "\n";
	cout << "Immatriculation : " << mlicensePlate << "\n";
	cout << "Compteur : " << mkm << " Km" << "\n";
	cout << "Prix : " << mcarPrice << " Euro" << "\n";
	
}