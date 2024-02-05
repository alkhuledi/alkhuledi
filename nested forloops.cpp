
#include <iostream>
#include <cmath>
using namespace std;
void PrintAlphabetLetters()//for loop nested
{
	//ØÈÇÚÉÇáÇÍÑİ ÇáÇÈÌÏíÉ  AÇáì Z
	//BÇáì Z
	
	for (int i = 65; i <= 90; i++)
	{
		cout << "letter " << char(i) << endl;
		for (int j = 65; j <= 90; j++)
		{
			cout << char(i) << char(j) << "\n";

		}
		cout << "\n";
	}
}
void StarTriangle()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = i; j <= 10; j++)
		{
			cout <<"*";
		}
		cout << "\n";
	}
}
void PrintNumberNestedForLoop()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = i; j <= 10; j++)
		{
			cout << j ;
		}
		cout << "\n";
	}
}
void PrintNumberNestedForLoop2()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j;
		}
		cout << "\n";
	}
}
void PrintNumberNestedForLoop3()
{
	for (int i = 65; i <= 75; i++)
	{
		for (int j = 65; j <= i; j++)
		{
			cout <<char( j);
		}
		cout << "\n";
	}

}
void PrintNumberNestedForLoop4()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = i; j <= 10; j++)
		{
			cout << j;
		}
		cout << "\n";
	}
}
int main()
{
	//PrintAlphabetLetters();

	//StarTriangle();
	//PrintNumberNestedForLoop();
	//PrintNumberNestedForLoop2();
	PrintNumberNestedForLoop3();
	PrintNumberNestedForLoop4();

}

