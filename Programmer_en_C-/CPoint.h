#pragma once
//point dans un plan

class CPoint
{
private:
	//Donn�e membre / attribut membre de la classe
	int nX;
	int nY;

public:
	//prototype
	int getX();
	int getY();

	void setX(int value);
	void setY(int value);
};

