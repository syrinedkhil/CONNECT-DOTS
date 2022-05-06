#pragma once
#include<set>
#include"button.h"
#include<string>
#include<SFML/Graphics.hpp>
#include<iostream>
#include"LEVEL.h"
#define nb 6
using namespace sf;
using namespace std;
class level5 :public LEVEL
{
public:
	Text titre;

	//ENSEMBLES DES ARRETES
	RectangleShape rectangle1;
	RectangleShape rectangle2;
	RectangleShape rectangle3;
	RectangleShape rectangle4;
	RectangleShape rectangle5;
	RectangleShape rectangle6;
	



public:
	level5();

	void construire(RenderWindow& window);//construction du niveau
	void setbackrectangle(char x, char y);


	~level5() {};
};