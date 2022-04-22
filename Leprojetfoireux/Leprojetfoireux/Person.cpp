#include "Person.h"

Person::Person()
{
	mfirstName = "Billy";
	mlastName = "Galendr";
	mbirth = "27/07/1991";
	mmoney = 8100;
	mcar = "Aucun";
	mgender = "Male";
}
Person::Person(string firstName, string lastName, string birth, int money, string car, string genre)
{
	mfirstName = firstName;
	mlastName = lastName;
	mbirth = birth;
	mmoney = money;
	mcar = car;
	mgender = genre;
}

Person::~Person() {}

string Person::GetFirstName() { return mfirstName; }
string Person::GetLastName() { return mlastName; }
string Person::GetBirth() { return mbirth; }
int Person::GetMoney() { return mmoney; }
string Person::GetCar() { return mcar; }
string Person::GetGender() { return mgender; }

void Person::Intro()
{

	cout << "Nom : " << mfirstName <<" "<< mlastName << "\n";
	cout << "Date de naissance : " << mbirth << "\n";
	cout << "Patrimoine : " << mmoney << " Euro" << "\n";
	cout << "Genre : " << mgender << "\n";
	cout << "Vehicule : " << mcar << "\n";
	

}