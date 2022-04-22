#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	// A //Nom, prenom, Naissance, argent, voiture, genre

	// DOIT // S'introduire, achter voiture, vendre voiuture, rouler dans voiture, peindre voiture

	// COULEUR // Rouge, vert, bleu, jaune, 

	string mfirstName;
	string mlastName;
	string mbirth;
	int mmoney;
	string mcar;
	string mgender;

	Person();
	Person(string firstName, string lastName, string birth, int money, string car, string genre);
	~Person();

	string GetFirstName();
	string GetLastName();
	string GetBirth();
	int GetMoney();
	string GetCar();
	string GetGender();

	void Intro();
};


