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


//constructeur
CPoint::CPoint(int nX, int nY)
{
	this->nX = nX;
	this->nY = nY;
}

bool CPoint::operator==(CPoint const& pt)
{
	if ((this->nX == pt.nX) && (this->nY == pt.nY))
		return true;
	else
		return false;

	
}

//surcharge d'un opérateur
CPoint CPoint::operator+(CPoint const& pt)
{
	CPoint somme;
	somme.nX = this->nX + pt.nX;
	somme.nY = this->nY + pt.nY;

	return somme;
}

CPoint CPoint::operator-(CPoint const& pt)
{
	CPoint res;
	res.nX = this->nX - pt.nX;
	res.nY = this->nY - pt.nY;

	return res;
}

CPoint CPoint::operator*(CPoint const& pt)
{
	CPoint res;
	res.nX = this->nX * pt.nX;
	res.nY = this->nY * pt.nY;

	return res;
}


CPoint::~CPoint()
{
}


bool coincide(const CPoint& p, const CPoint& q)
{
	return ((p.nX == q.nX) && (p.nY == q.nY));
}

