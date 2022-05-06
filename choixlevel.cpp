#include "choixlevel.h"


choixlevel::choixlevel(float width, float height)
{
	if (!font.loadFromFile("res/emmasophia.ttf"))
	{
		std::cout << "not found" << endl;
	}
	if (!f.loadFromFile("res/Awesome Possum Shine Demo.otf"))
	{
		std::cout << "not found" << endl;
	}
	for (int i = 0; i < 11; i++) {
		levels[i].setFont(font);
		levels[i].setFillColor(Color(102, 221, 221));
		levels[i].setCharacterSize(150);
	}
	
	//level1
	
	levels[0].setString("1");
	levels[0].setFillColor(Color(252, 201, 200));
	levels[0].setPosition(Vector2f(250, height));
	
	//level2
	levels[1].setString("2");
	levels[1].setPosition(Vector2f(550, height));
	//level3
	
	levels[2].setString("3");
	
	levels[2].setPosition(Vector2f(900, height));
	//level4
	
	levels[3].setString("4");
	
	levels[3].setPosition(Vector2f(1250, height));
	//level5
	
	levels[4].setString("5");
	
	levels[4].setPosition(Vector2f(1600, height));
	//level6
	
	levels[5].setString("6");
	
	levels[5].setPosition(Vector2f(230, height*3/2));
	//level7
	
	levels[6].setString("7");
	
	levels[6].setPosition(Vector2f(550, height *3/2));
	//level8
	
	levels[7].setString("8");
	
	levels[7].setPosition(Vector2f(900, height*3/2));
	//level9
	
	levels[8].setString("9");
	
	levels[8].setPosition(Vector2f(1250, height*3 /2));
	//level10
	
	levels[9].setString("10");
	
	levels[9].setPosition(Vector2f(1600, height*3/2));
	//titre
	levels[10].setFont(f);
	levels[10].setString("levels");
	levels[10].setPosition(Vector2f(600,200 ));
	levels[10].setFillColor(Color::White);
	levels[10].setCharacterSize(300);




	selectedItem = 0;

}

void choixlevel::draw(RenderWindow& window)
{
	RectangleShape r0;
	r0.setFillColor(Color::White);
	r0.setPosition(110, 800);
	r0.setSize(Vector2f(300, 270));

	RectangleShape r1;
	r1.setFillColor(Color::White);
	r1.setPosition(470, 800);
	r1.setSize(Vector2f(300, 270));
	RectangleShape r2;
	r2.setFillColor(Color::White);
	r2.setPosition(830, 800);
	r2.setSize(Vector2f(300, 270));

	RectangleShape r3;
	r3.setFillColor(Color::White);
	r3.setPosition(1190, 800);
	r3.setSize(Vector2f(300, 270));

	RectangleShape r4;
	r4.setFillColor(Color::White);
	r4.setPosition(1550, 800);
	r4.setSize(Vector2f(300, 270));

	RectangleShape r5;
	r5.setFillColor(Color::White);
	r5.setPosition(110, 1250);
	r5.setSize(Vector2f(300, 270));

	RectangleShape r6;
	r6.setFillColor(Color::White);
	r6.setPosition(470, 1250);
	r6.setSize(Vector2f(300, 270));

	RectangleShape r7;
	r7.setFillColor(Color::White);
	r7.setPosition(830, 1250);
	r7.setSize(Vector2f(300, 270));

	RectangleShape r8;
	r8.setFillColor(Color::White);
	r8.setPosition(1190, 1250);
	r8.setSize(Vector2f(300, 270));

	RectangleShape r9;
	r9.setFillColor(Color::White);
	r9.setPosition(1550, 1250);
	r9.setSize(Vector2f(300, 270));

	window.draw(r0);
	window.draw(r1);
	window.draw(r2);
	window.draw(r3);
	window.draw(r4);
	window.draw(r5);
	window.draw(r6);
	window.draw(r7);
	window.draw(r8);
	window.draw(r9);

	for (int i = 0; i < max; i++) {
		window.draw(levels[i]);
	}
}

void choixlevel::moveUp()
{
	if (selectedItem - 1 >= 0) {
		
		levels[selectedItem].setFillColor(Color(102, 221, 221));
		selectedItem--;
		levels[selectedItem].setFillColor(Color(252, 201, 200));
	}
}

void choixlevel::moveDown()
{
	if (selectedItem + 1 < max-1) {
		levels[selectedItem].setFillColor(Color(102, 221, 221));
		selectedItem++;
	    levels[selectedItem].setFillColor(Color(252, 201, 200));
	}
}

choixlevel::~choixlevel()
{
}
