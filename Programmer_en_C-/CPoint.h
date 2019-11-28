#pragma once
//Point dans un plan
class CPoint
{

private:
	//Données membres de la classe 
	int nX;
	int nY;

	char* cColor;




public:
	//Prototypes ou déclarations

	//Assesseurs
	int getX();
	int getY();
	char* getColor();
	void setColor(char* cColor);

	//Mutateurs
	void setX(int nX);
	void setY(int nY);


	//Constructeur

	CPoint(int nX = 0, int nY = 0);
	CPoint(int nX, int nY, char cColor[]);

	//Constructeur de copie
	CPoint(const CPoint& p);



	//Destructeur
	~CPoint();




};