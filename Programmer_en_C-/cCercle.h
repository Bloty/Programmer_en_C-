#pragma once
#include "CPoint.h"

class cCercle
{
	CPoint pt;
	int nR;

public:
	friend void CPoint::affichePointCercle(const CPoint pt, const cCercle c);
	cCercle(int, int, int);
	~cCercle();
};