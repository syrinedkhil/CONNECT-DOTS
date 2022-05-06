#pragma once
#include <SFML/Graphics.hpp>
#include<iostream>
#define max 11
using namespace sf;
using namespace std;
class choixlevel
{
public:
	choixlevel(float width, float height);

	void draw(RenderWindow& window);
	void moveUp();
	void moveDown();
	int GetPressedItem() { return selectedItem; }

	~choixlevel();

private:
	int selectedItem;
	Font font,f;
	Text levels[max];
};

