#pragma once
#include"button.h"
#include<set>
#include<SFML/Graphics.hpp>
#include<iostream>
using namespace sf;
using namespace std;
class LEVEL
{
public:
	

	Text submit;

	Button btnsubmit;

	int selectedItem;

	Font font;
	Button T[6];//tableau contenant l'ensemble des sommets

	set<int>suc[5];//tableau contenant les successeurs de chaques point 

	//ENSEMBLE DES SOMMETS
	Button btn1;
	Button btn2;
	Button btn3;
	Button btn4;
	Button btn5;
public:
	LEVEL();
	int getpressedbutton();
	void moveUp();
	void moveDown();
	bool verif(char x, char y);//verification si le schéma est correcte ou non
	
};

