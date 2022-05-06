#pragma once
#include<SFML/Graphics.hpp>
#include"button.h"
using namespace sf;

class result
{

public:
	result();
	void drawwinmessage(RenderWindow& window);
	void drawfailmessage(RenderWindow& window);
	void mouvementimpo(RenderWindow& window);
	

public:
	Font font;
	
	RectangleShape rectangle;
	RectangleShape a;
	RectangleShape b;
	


};


