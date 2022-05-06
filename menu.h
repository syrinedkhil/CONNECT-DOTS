#pragma once

#include <SFML/Graphics.hpp>
#define   MAX_MAIN_MENU 4

//namesspaces
using namespace sf;
using namespace std;


class menu
{
public:
	menu(float width, float height);

	void draw(RenderWindow& window);
	void moveUp();
	void moveDown();
	int GetPressedItem() { return MainMenuSelected; }

	~menu();

private:
	int MainMenuSelected;
	Font font;
	Text mainMenu[MAX_MAIN_MENU];
};
