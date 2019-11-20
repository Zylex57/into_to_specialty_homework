#pragma once
#include "iostream"
#include "string"
using namespace std;
class Komaxa
{
private:
	string Name;
	int Weight;
	int Speed;

protected:
	int Width;
	int Length;
public:
	string Country;
	string getCountry();
	int Eyes;
	int getEyes();
	string getName();
	int getLength();
	int getWidth();
	int getWeight();
	int getSpeed();
	void setCountry(string C);
	void setEyes(int E);
	void setWidth(int W1);
	void setLength(int L);
	void setName(string N);
	void setWeight(int W);
	void setSpeed(int S);
	void Input();
	void Print();
};