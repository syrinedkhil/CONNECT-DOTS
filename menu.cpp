#include "menu.h"

menu::menu(float width, float height)
{
	if (!font.loadFromFile("res/Awesome Possum Shine Demo.otf"))
	{

	}
	//connect dots
	mainMenu[0].setFont(font);
	mainMenu[0].setFillColor(Color::White);
	mainMenu[0].setString("connect dots");
	mainMenu[0].setCharacterSize(250);
	mainMenu[0].setPosition(Vector2f((width/3), height / 4));
	

	//Play
	mainMenu[1].setFont(font);
	mainMenu[1].setFillColor(Color(252, 201, 200));
	mainMenu[1].setString("Play");
	mainMenu[1].setCharacterSize(150);
	mainMenu[1].setPosition(Vector2f(width, height));

	//Options
	mainMenu[2].setFont(font);
	mainMenu[2].setFillColor(Color(102, 221, 221));
	mainMenu[2].setString("How to play");
	mainMenu[2].setCharacterSize(150);
	mainMenu[2].setPosition(Vector2f((width * 5 / 6)-100, (height*3)/2 ));

	//Exit
	mainMenu[3].setFont(font);
	mainMenu[3].setFillColor(Color(102, 221, 221));
	mainMenu[3].setString("Exit");
	mainMenu[3].setCharacterSize(150);
	mainMenu[3].setPosition(Vector2f(width, (height*2)-10));


	MainMenuSelected = 1;


}

void menu::draw(RenderWindow& window)
{
	
	RectangleShape rectangle1;
	rectangle1.setFillColor(Color::White);
	rectangle1.setPosition(600, 850);
	rectangle1.setSize(Vector2f(900, 300));

	RectangleShape rectangle2;
	rectangle2.setFillColor(Color::White);
	rectangle2.setPosition(600, 1300);
	rectangle2.setSize(Vector2f(900, 300));

	RectangleShape rectangle3;
	rectangle3.setFillColor(Color::White);
	rectangle3.setPosition(600, 1750);
	rectangle3.setSize(Vector2f(900, 250));
	

	

	window.draw(rectangle1);
	window.draw(rectangle2);
	window.draw(rectangle3);
	for (int i = 0; i < MAX_MAIN_MENU; i++) {
		window.draw(mainMenu[i]);
	}






}

void menu::moveUp()
{
	if (MainMenuSelected - 1 > 0) {
		mainMenu[MainMenuSelected].setFillColor(Color(102, 221, 221));
		MainMenuSelected--;
		mainMenu[MainMenuSelected].setFillColor(Color(252, 201, 200));
	}
}

void menu::moveDown()
{
	if (MainMenuSelected +1 < MAX_MAIN_MENU) {
		mainMenu[MainMenuSelected].setFillColor(Color(102, 221, 221));
		MainMenuSelected++;
		mainMenu[MainMenuSelected].setFillColor(Color(252, 201, 200));
	}
}

menu::~menu()
{
	
}
