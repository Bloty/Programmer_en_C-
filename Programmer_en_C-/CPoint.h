#pragma once

class cCercle;//forward d�claration


//Point dans un plan
class CPoint
{

private:
	//Donn�es membres de la classe 
	int nX;
	int nY;




public:
	//Prototypes ou d�clarations

	//Assesseurs
	int getX();
	int getY();


	//Mutateurs
	void setX(int nX);
	void setY(int nY);


	//Constructeur

	CPoint(int nX = 0, int nY = 0);

	//Fonction ind� amie diune classe
	friend bool coincide(const CPoint& p, const CPoint& q);
	
	//surcharge d'un op�rateur
	bool operator==(CPoint const& pt);
	CPoint operator+(CPoint const& pt);
	CPoint operator-(CPoint const& pt);
	CPoint operator*(CPoint const& pt);

	//Destructeur
	~CPoint();
};