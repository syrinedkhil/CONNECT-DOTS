#pragma once
#include <SFML/Graphics.hpp>
#include<iostream>

using namespace sf;
using namespace std;
class howtoplay
{
public:
	Text explication;
	Font font;
	Text T[2];
	int selectedbutton;
public:
	howtoplay();
	void draw(RenderWindow& window);
	int getselecteditem() { return selectedbutton; }
	void moveup();
	void movedown();



};

