#include "CPoint.h"
#include "cCercle.h"
#include <stdlib.h> 
#include <string>
#include <iostream>



//Assesseurs
int CPoint::getX()
{
	return nX;
}

int CPoint::getY()
{
	return nY;
}

//Mutateurs
void CPoint::setX(int nX)
{
	this->nX = nX;
}

void CPoint::setY(int nY)
{
	this->nY = nY;
}



CPoint::CPoint(int nX, int nY)
{
	this->nX = nX;
	this->nY = nY;
}

CPoint::


//Constructeur avec parametres
CPoint::CPoint(int nX, int nY, char cColor[])
{
	this->nX = nX;
	this->nY = nY;

	this->cColor = new char[strlen(cColor) + 1];
	int nTaille = strlen(cColor) + 1;
	strcpy_s(this->cColor, nTaille, cColor);

}


char* CPoint::getColor()
{
	return cColor;
}

void CPoint::setColor(char* cColor)
{
	strcpy_s(this->cColor, strlen(cColor) + 1, cColor);
}


CPoint::CPoint(const CPoint& p)
{
	this->nX = p.nX;
	this->nY = p.nY;
	this->cColor = new char[strlen(p.cColor) + 1];
	int nTaille = strlen(p.cColor) + 1;
	strcpy_s(this->cColor, nTaille, p.cColor);
}


void CPoint::affichePointCercle(const CPoint pt,const cCercle c)
{
	std::cout<< " x : " <<pt.nX;
	std::cout << " y : " << pt.nY;
	std::cout << " rayon : " << c.nR;
	std::cout << " centre x : " << c.pt.nX;
	std::cout << " centre y : " << c.pt.nY;

}

CPoint::~CPoint()
{

	delete cColor;
}


bool coincide(const CPoint& p, const CPoint& q)
{
	return ((p.nX == q.nX) && (p.nY == q.nY));
}
