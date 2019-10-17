#include <iostream> //input output
#include <cstdlib>
#include "CPoint.h"

//using namespace std; //espace de nom
//Pour utiliser un espace nom sans using on utilise ::

//POO C++
//Class
int main()
{
	CPoint ptMonPoint;



	ptMonPoint.setX(7);
	ptMonPoint.setY(75);


	std::cout<<"X : " << ptMonPoint.getX() << std::endl;
	std::cout << "Y : " << ptMonPoint.getY() << std::endl;




	system("pause");

	return 0;
}