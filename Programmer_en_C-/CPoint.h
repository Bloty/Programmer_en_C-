#pragma once

class cCercle;//forward déclaration


//Point dans un plan
class CPoint
{

private:
	//Données membres de la classe 
	int nX;
	int nY;




public:
	//Prototypes ou déclarations

	//Assesseurs
	int getX();
	int getY();


	//Mutateurs
	void setX(int nX);
	void setY(int nY);


	//Constructeur

	CPoint(int nX = 0, int nY = 0);

	//Fonction indé amie diune classe
	friend bool coincide(const CPoint& p, const CPoint& q);
	
	//surcharge d'un opérateur
	bool operator==(CPoint const& pt);
	CPoint operator+(CPoint const& pt);
	CPoint operator-(CPoint const& pt);
	CPoint operator*(CPoint const& pt);

	//Destructeur
	~CPoint();
};