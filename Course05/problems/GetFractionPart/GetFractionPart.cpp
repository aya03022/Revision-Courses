// GetFractionPart.cpp : This file contains the 'main' function. Program execution begins and ends there.
//include <iostream>
#include <bits/stdc++.h>
using namespace std;
float GetFractionPart(float Number)
{
	return Number - int(Number);
}
int MyRound(float Number)
{
	int IntPart;
	IntPart = int(Number);
	float FractionPart = GetFractionPart(Number);
	if (abs(FractionPart) >= .5)
	{
		if (Number > 0)
			return ++IntPart;
		else
			return --IntPart;
	}
	else
	{
		return IntPart;
	}
}
float ReadNumber()
{
	float Number;
	cout << "Pleas enter a number ? " << endl;
	cin >> Number;
	return Number;
}
int main()
{
	float Number = ReadNumber();
	cout << "My round Result : " << MyRound(Number) << endl;
	cout << "C++ round Result : " << round(Number) << endl;
}