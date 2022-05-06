#include "result.h"

result::result()
{
	if (!font.loadFromFile("res/Awesome Possum Shine Demo.otf"))
	{}
	
	rectangle.setFillColor(Color::White);
	rectangle.setSize(Vector2f(1200, 600));
	rectangle.setPosition(300, 700);

	
	a.setFillColor(Color(255, 153, 255));
	a.setSize(Vector2f(1050, 220));
	a.setPosition(400, 1005);


	
}

void result::drawwinmessage(RenderWindow& window)
{
	Text success;
	success.setString("Good job!");
	success.setFillColor(Color(255, 153, 255));
	success.setFont(font);
	success.setPosition(550, 750);
	success.setCharacterSize(150);

	Text next;
	next.setString("PLease tap ESCAPE to \n move to next level");
	next.setFillColor(Color::White);
	next.setFont(font);
	next.setPosition(500, 1000);
	next.setCharacterSize(100);


	

	window.draw(rectangle);
	window.draw(success);
	window.draw(a);
	window.draw(next);
	
}

void result::drawfailmessage(RenderWindow& window)
{
	Text success;
	success.setString("try again!");
	success.setFillColor(Color(255, 153, 255));
	success.setFont(font);
	success.setPosition(550, 750);
	success.setCharacterSize(150);

	Text next;
	next.setString("PLease tap ESCAPE to \n   restart the level");
	next.setFillColor(Color::White);
	next.setFont(font);
	next.setPosition(450, 1000);
	next.setCharacterSize(100);


	window.draw(rectangle);
	window.draw(success);
	
	window.draw(a);
	window.draw(next);
	
}

void result::mouvementimpo(RenderWindow& window)
{
	Text success;
	success.setString("mouvement impossible!");
	success.setFillColor(Color(255, 153, 255));
	success.setFont(font);
	success.setPosition(500, 750);
	success.setCharacterSize(80);

	Text next;
	next.setString("PLease tap ESCAPE to \n   restart the level");
	next.setFillColor(Color::White);
	next.setFont(font);
	next.setPosition(450, 1000);
	next.setCharacterSize(100);

	window.draw(rectangle);
	window.draw(success);

	window.draw(a);
	
	window.draw(next);
	
}
