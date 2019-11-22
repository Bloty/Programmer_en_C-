#include <iostream> //input output
#include <cstdlib>
#include "CPoint.h"


//using namespace std; //espace de nom
//Pour utiliser un espace nom sans using on utilise ::

//Class
int main()
{
	CPoint ptMonPoint(10, 5);
	CPoint::compte();
	CPoint ptMonPoint2(10, 5);
	CPoint::compte();

/*
	std::cout<<"X : " << ptMonPoint.getX() << std::endl;
	std::cout << "Y : " << ptMonPoint.getY() << std::endl;

	std::cout << ptMonPoint.coincidePoint(&ptMonPoint2) << std::endl;
*/

	ptMonPoint.affichePoint();
	//system("pause");

	return 0;
}