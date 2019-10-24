#pragma once
//point dans un plan

class CPoint
{
private:
	//Donnée membre / attribut membre de la classe
	int nX;
	int nY;

	int *pnX;

public:
	//prototype
	int getX();
	int getY();

	void setX(int value);
	void setY(int value);

	void init(int nX, int nY);

	//constructeur
	CPoint();
	CPoint(int nX, int nY);

	//destructeur
	~CPoint();
};

