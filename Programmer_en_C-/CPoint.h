#pragma once
//point dans un plan

class CPoint
{
private:
	//Donnée membre / attribut membre de la classe
	int nX;
	int nY;

	static int nbPoint;//membre static

public:
	//prototype
	int getX();
	int getY();

	void setX(int value);
	void setY(int value);

	void init(int nX, int nY);

	//constructeur
	/*
	CPoint();
	CPoint(int nX, int nY);
*/
	inline CPoint(int nX = 0, int nY = 0) {
		this->nX = nX;
		this->nY = nY;
		nbPoint++;
	}

	bool coincidePoint(const CPoint pt); //passage par valeur

	//dans le cas ou on veux faire un passage par adresse
	//const pour protége la val
	bool coincidePoint(const CPoint *pt) const; //passage par adr

	bool coincidePoint(const CPoint &pt) const; //passage par ref

	CPoint sym();

	//methode statique
	static void compte();

	//ne manipule pas les donner manipuler
	void affichePoint()const;

	//destructeur
	~CPoint();
};

