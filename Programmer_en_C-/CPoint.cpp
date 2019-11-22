#include "CPoint.h"
#include <iostream>

int CPoint::nbPoint = 0;

int CPoint::getX()
{
	return nX;
}

int CPoint::getY()
{
	return nY;
}


void CPoint::setX(int value)
{
	this->nX = value;
}

void CPoint::setY(int value)
{
	this->nY = value;
}


//init
void CPoint::init(int nX, int nY)
{
	this->nX = nX;
	this->nY = nY;
}


//constructeur sans parametre
/*
CPoint::CPoint()
{
	this->nX = 0;
	this->nY = 0;
	this->pnX = new int;
	*pnX = 0;
}

//constructeur avec parametre
CPoint::CPoint(int nX, int nY)
{
	this->nX = nX;
	this->nY = nY;
}
*/


CPoint::~CPoint()
{
	nbPoint--;
}

bool CPoint::coincidePoint(const CPoint pt)
{
	return ((pt.nX == nX) && (pt.nY == nY));
}

bool CPoint::coincidePoint(const CPoint* pt)const
{
	return ((pt->nX == nX) && (pt->nY == nY));
}

bool CPoint::coincidePoint(const CPoint& pt)const
{
	return ((pt.nX == nX) && (pt.nY == nY));
}

CPoint CPoint::sym()
{
	CPoint ptSym;

	ptSym.nX = -nX;
	ptSym.nY = -nY;

	return ptSym;
}

void CPoint::compte()
{
	std::cout << "Y : " << "nb point : " << CPoint :: nbPoint<< std::endl;
}

void CPoint::affichePoint() const
{
	std::cout << "x : " << nX  << std::endl;
	std::cout << "y : " << nY << std::endl;
}

