#include "Komaxa.h"

string Komaxa::getName()
{
	return Name;
}
string Komaxa::getCountry()
{
	return Country;
}
int Komaxa::getEyes()
{
	return Eyes;
}
int Komaxa::getWeight()
{
	return Weight;
}
int Komaxa::getSpeed()
{
	return Speed;
}
int Komaxa::getWidth()
{
	return Width;
}
int Komaxa::getLength()
{
	return Length;
}
void Komaxa::setName(string N)
{
	Name = N;
}
void Komaxa::setCountry(string C)
{
	Country = C;
}
void Komaxa::setEyes(int E)
{
	Eyes = E;
}
void Komaxa::setWeight(int W)
{
	Weight = W;
}
void Komaxa::setSpeed(int S)
{
	Speed = S;
}
void Komaxa::setWidth(int W1)
{
	Width = W1;
}
void Komaxa::setLength(int L)
{
	Length = L;
}
void Komaxa::Input()
{
	cout << "Name =" << '\n';
	cin >> Name;
	cout << "Weight =" << '\n';
	cin >> Weight;
	cout << "Speed =" << '\n';
	cin >> Speed;
	cout << "Width =" << '\n';
	cin >> Width;
	cout << "Length =" << '\n';
	cin >> Length;
	cout << "Country =" << '\n';
	cin >> Country;
	cout << "Eyes =" << '\n';
	cin >> Eyes;
}
void Komaxa::Print()
{
	cout << "The Name - " << Name << '\n';
	cout << "The weight of bug - " << Weight << '\n';
	cout << "The speed of bug - " << Speed << '\n';
	cout << "The widht of bug - " << Width << '\n';
	cout << "The length of bug - " << Length << '\n';
	cout << "The country of bug - " << Country << '\n';
	cout << "The number of eyes - " << Eyes << '\n';
}