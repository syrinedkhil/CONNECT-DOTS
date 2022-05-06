#include "howtoplay.h"

howtoplay::howtoplay()
{
	if (!font.loadFromFile("res/Awesome Possum Shine Demo.otf"))
	{}
	//regles du jeu
	explication.setFont(font);
	explication.setString("Rules of the game:\n\nthis game contains five levels.\nyou're in front of a diagram that you should find the\nway how to draw it.you have to choose one button\nby clicking on ' Enter '.once you finish you submit it .\nif you're solution is right you will be moved to the next\nlevel, if it's not you choose either you replay or exist\nthe game");
	explication.setCharacterSize(70);
	explication.setFillColor(Color::White);
	explication.setPosition(100, 100);





	//boutton back
	T[0].setFont(font);
	T[0].setString("back");
	T[0].setCharacterSize(250);
	T[0].setFillColor(Color(252, 201, 200));
	T[0].setPosition(800, 1000);
	//boutton exit
	T[1].setFont(font);
	T[1].setString("Exit");
	T[1].setCharacterSize(250);
	T[1].setFillColor(Color(102, 221, 221));
	T[1].setPosition(800, 1500);

	selectedbutton = 0;
}

void howtoplay::draw(RenderWindow& window)
{
	RectangleShape r1;
	r1.setFillColor(Color::White);
	r1.setPosition(600, 1050);
	r1.setSize(Vector2f(900, 300));


	RectangleShape r2;
	r2.setFillColor(Color::White);
	r2.setPosition(600, 1550);
	r2.setSize(Vector2f(900, 300));

	window.draw(r1);
	window.draw(r2);
	window.draw(T[0]);
	window.draw(T[1]);
	window.draw(explication);

}

void howtoplay::moveup()
{
	if (selectedbutton  > 0) {
		T[selectedbutton].setFillColor(Color(102, 221, 221));
		selectedbutton--;
		T[selectedbutton].setFillColor(Color(252, 201, 200));
	}

}

void howtoplay::movedown()
{

	if (selectedbutton + 1 <2) {
		T[selectedbutton].setFillColor(Color(102, 221, 221));
		selectedbutton++;
		T[selectedbutton].setFillColor(Color(252, 201, 200));
	}
}
