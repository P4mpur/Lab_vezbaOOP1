#pragma once
class Skup
{
private: 
	unsigned int br_el;
	int* niz;
public:
	Skup(){ br_el = 0; };
	Skup(unsigned int x) { br_el = x; niz = new int[br_el]; };
	int duzina_Niza();
	bool pripada_Skupu(int broj);
	void Set();
	void Get();
	void isteraj_Dupli();
	void Sortiraj();
};
inline int Skup::duzina_Niza() {
	return br_el;
};
