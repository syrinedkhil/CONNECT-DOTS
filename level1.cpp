#include "level1.h"


level1::level1()
{
	titre.setString("level I");
	titre.setFillColor(Color::White);
	titre.setFont(font);
	titre.setPosition(100, 50);
	titre.setCharacterSize(300);

	
	btn1.setbutton(50, Color(154, 7, 69));
	btn2.setbutton(50, Color(139, 84, 151));
	btn3.setbutton(50, Color(139, 84, 151));
	btn4.setbutton(50, Color(139, 84, 151));
	btn5.setbutton(50, Color(139, 84, 151));



	btn1.setposition({ 750, 700 });
	btn2.setposition({ 200, 1250 });
	btn3.setposition({ 1300, 1250 });
	btn4.setposition({ 400, 1800 });
	btn5.setposition({ 1100,1800 });




	rectangle1.setFillColor(Color(142, 142, 142));
	rectangle1.setSize(Vector2f(33, 1200));
	rectangle1.setPosition(770, 725);
	rectangle1.setRotation(17);


	rectangle2.setFillColor(Color(142, 142, 142));
	rectangle2.setSize(Vector2f(33, 1200));
	rectangle2.setPosition(785, 725);
	rectangle2.setRotation(343);

	rectangle3.setFillColor(Color(142, 142, 142));
	rectangle3.setSize(Vector2f(33, 1050));
	rectangle3.setPosition(1320, 1290);
	rectangle3.setRotation(90);


	rectangle4.setFillColor(Color(142, 142, 142));
	rectangle4.setSize(Vector2f(33, 1050));
	rectangle4.setPosition(1140, 1840);
	rectangle4.setRotation(121);

	rectangle5.setFillColor(Color(142, 142, 142));
	rectangle5.setSize(Vector2f(33, 1050));
	rectangle5.setPosition(1310, 1290);
	rectangle5.setRotation(58.5);

	set<int> A = { 3,4};
	set<int> B = { 2,4};
	set<int> C = {  1,3};
	set<int> D = { 0,2 };
	set<int> E= { 0,1};


	suc[0] = A;
	suc[1] = B;
	suc[2] = C;
	suc[3] = D;
	suc[4] = E;





}

void level1::construire(RenderWindow& window)
{
	window.draw(rectangle1);
	window.draw(rectangle2);
	window.draw(rectangle3);
	window.draw(rectangle4);
	window.draw(rectangle5);



	btn1.drawTo(window);
	btn2.drawTo(window);
	btn3.drawTo(window);
	btn4.drawTo(window);
	btn5.drawTo(window);

	btnsubmit.drawTo(window);

	window.draw(submit);
	window.draw(titre);

}



void level1::setbackrectangle(char x, char y)
{

	switch (x)
	{
	case '0':
		switch (y) {
		case '3':
			rectangle1.setFillColor(Color(142, 158, 172));
			break;
		case '4':
			rectangle2.setFillColor(Color(142, 158, 172));
			break;
		}
		break;
	case '1':
		switch (y) {
		case '2':
			rectangle3.setFillColor(Color(142, 158, 172));
			break;
		case '4':
			rectangle4.setFillColor(Color(142, 158, 172));
			break;
		}
		break;
	case '2':
		switch (y) {
		case '1':
			rectangle3.setFillColor(Color(142, 158, 172));
			break;
		case '3':
			rectangle5.setFillColor(Color(142, 158, 172));
			break;
		}
		break;
	case '3':
		switch (y) {
		case '0':
			rectangle1.setFillColor(Color(142, 158, 172));
			break;
		case '2':
			rectangle5.setFillColor(Color(142, 158, 172));
			break;
		}
		break;
	case '4':
		switch (y) {
		case '0':
			rectangle2.setFillColor(Color(142, 158, 172));
			break;
		case '1':
			rectangle4.setFillColor(Color(142, 158, 172));
			break;
		}
		break;
	}

}
