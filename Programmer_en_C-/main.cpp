#include <iostream>
#include <cstdlib>
#include "CPoint.h"
#include "CCercle.h"



//POO C++
//Class (Données et méthodes)



int main()
{


/*
	CPoint pt(10, 12);
	CPoint pt2(0, 0);
	//pt2 = CPoint(2, 3);

	char cColor[10] = { "rouge" };
	CPoint ptMonPoint(5, 9, cColor);
	CPoint ptMonPoint2(ptMonPoint);
	pt2 = CPoint(10, 8, cColor);

	//CPoint ptMonPoint3; 

	//ptMonPoint3 = ptMonPoint2;//Surcharge operateur = implicite, 
							  //ne fonctionne pas si pas de code de la surcharge de l'operateur=


	std::cout << "X : " << ptMonPoint2.getX() << std::endl;
	std::cout << "Y : " << ptMonPoint2.getY() << std::endl;

	std::cout << "Color : " << ptMonPoint2.getColor() << std::endl;

	char cColor2[10] = "Vert";
	ptMonPoint2.setColor(cColor2);
	std::cout << "Color : " << ptMonPoint2.getColor() << std::endl;
*/

	CCercle cercle(8, 9, 50);

	system("pause");

	return 0;
}