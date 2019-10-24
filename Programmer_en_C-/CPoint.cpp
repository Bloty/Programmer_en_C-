#include "CPoint.h"


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
CPoint::CPoint()
{
	this->nX = 0;
	this->nY = 0;
	this->pnX = new int;
	*pnX = 0;
}

CPoint::CPoint(int nX, int nY)
{
	this->nX = nX;
	this->nY = nY;
}

CPoint::~CPoint()
{
	delete pnX;
}
