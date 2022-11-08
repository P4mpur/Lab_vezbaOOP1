#include "Skup.h"
#include <iostream>
using namespace std;

bool Skup::pripada_Skupu(int broj) {
	int flag = 0;
	for (int i = 0; i < br_el; i++)
	{
		if (broj == niz[i])
		{
			flag++;
		}
	}
	if (flag!=0)
	{
		return 1;
	}
	return 0;
}

void Skup::Set() {
	cout << "Unesite elemente niza: " << endl;
	if (br_el == 0)
	{
		cout << "Unesite prvo broj elementa!! " << endl;
	}
	else
	{
		for (int i = 0; i < br_el; i++)
		{
			cout << "Element : " << i << endl;
			cin >> niz[i];
		}
	}
}

void Skup::Get() {
	if (br_el == 0)
	{
		cout << "Prvo Unesite Elemente" << endl;
	}
	else
	{
		cout << "Vasi Elementi su: " << endl;
		for (int i = 0; i < br_el; i++)
		{
			cout << niz[i] << " ";
		}
	}
} 

void Skup::isteraj_Dupli() {
	int k = 0;
	for (int i = 0; i < br_el; i++)
	{
		for (int j = i+1; j < br_el; j++)
		{
			if (niz[i]==niz[j])
			{
				for (int k = j; k < br_el - 1; k++)
				{
					niz[k] = niz[k+1];
				}
				br_el--;
				j--;
			}
		}
	}
}

void Skup::Sortiraj() {
	int pom;
	for (int i = 0; i < br_el-1; i++)
	{
		for (int j = i+1; j < br_el; j++)
		{
			if (j>=i)
			{
				pom = niz[i];
				niz[i] = niz[j];
				niz[j] = pom;
			}
		}
	}
}