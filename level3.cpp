#include "level3.h"



level3::level3()
{
	titre.setString("level III");
	titre.setFillColor(Color::White);
	titre.setFont(font);
	titre.setPosition(100, 50);
	titre.setCharacterSize(300);

	btn1.setbutton(50, Color(154, 7, 69));
	btn2.setbutton(50, Color(139, 84, 151));
	btn3.setbutton(50, Color(139, 84, 151));
	btn4.setbutton(50, Color(139, 84, 151));
	btn5.setbutton(50, Color(139, 84, 151));





	btn1.setposition({ 200,700 });
	btn2.setposition({ 1300, 700 });
	btn3.setposition({ 450, 900 });
	btn4.setposition({ 1050, 900 });
	btn5.setposition({ 750, 1800 });
	




	rectangle1.setFillColor(Color(142, 142, 142));
	rectangle1.setSize(Vector2f(33, 1100));
	rectangle1.setPosition(1330, 735);
	rectangle1.setRotation(90);


	rectangle2.setFillColor(Color(142, 142, 142));
	rectangle2.setSize(Vector2f(33, 1200));
	rectangle2.setPosition(790, 1840);
	rectangle2.setRotation(153);



	rectangle3.setFillColor(Color(142, 142, 142));
	rectangle3.setSize(Vector2f(33, 300));
	rectangle3.setPosition(470, 930);
	rectangle3.setRotation(128);


	rectangle4.setFillColor(Color(142, 142, 142));
	rectangle4.setSize(Vector2f(33, 800));
	rectangle4.setPosition(1070, 930);
	rectangle4.setRotation(102);

	rectangle5.setFillColor(Color(142, 142, 142));
	rectangle5.setSize(Vector2f(33, 850));
	rectangle5.setPosition(1330, 750);
	rectangle5.setRotation(78);


	rectangle6.setFillColor(Color(142, 142, 142));
	rectangle6.setSize(Vector2f(33, 350));
	rectangle6.setPosition(1350, 730);
	rectangle6.setRotation(54);


	rectangle7.setFillColor(Color(142, 142, 142));
	rectangle7.setSize(Vector2f(33, 1200));
	rectangle7.setPosition(840, 1840);
	rectangle7.setRotation(206.5);


	rectangle8.setFillColor(Color(142, 142, 142));
	rectangle8.setSize(Vector2f(33, 600));
	rectangle8.setPosition(1080, 940);
	rectangle8.setRotation(90);

	rectangle9.setFillColor(Color(142, 142, 142));
	rectangle9.setSize(Vector2f(33, 900));
	rectangle9.setPosition(810, 1840);
	rectangle9.setRotation(161);

	rectangle10.setFillColor(Color(142, 142, 142));
	rectangle10.setSize(Vector2f(33, 900));
	rectangle10.setPosition(830, 1840);
	rectangle10.setRotation(198);


	set<int> A = { 1,2,3,4 };
	set<int> B = { 0,2,3,4 };
	set<int> C = { 0,1,3,4 };
	set<int> D = { 0,1,2,4 };
	set<int> E = { 0,1,2,3 };


	suc[0] = A;
	suc[1] = B;
	suc[2] = C;
	suc[3] = D;
	suc[4] = E;



}

void level3::construire(RenderWindow& window)
{
	window.draw(rectangle1);
	window.draw(rectangle2);
	window.draw(rectangle3);
	window.draw(rectangle4);
	window.draw(rectangle5);
	window.draw(rectangle6);
	window.draw(rectangle7);
	window.draw(rectangle8);
	window.draw(rectangle9);
	window.draw(rectangle10);




	btn1.drawTo(window);
	btn2.drawTo(window);
	btn3.drawTo(window);
	btn4.drawTo(window);
	btn5.drawTo(window);
	btnsubmit.drawTo(window);


	window.draw(submit);
	window.draw(titre);

}

void level3::setbackrectangle(char x, char y)
{

	switch (x)
	{
	case '0':
		switch (y) {
		case '1':
			rectangle1.setFillColor(Color(142, 158, 172));
			break;
		case '2':
			rectangle3.setFillColor(Color(142, 158, 172));
			break;
		case '3':
			rectangle4.setFillColor(Color(142, 158, 172));
			break;
		case '4':
			rectangle2.setFillColor(Color(142, 158, 172));
			break;
		}
		break;
	case '1':
		switch (y) {
		case '0':
			rectangle1.setFillColor(Color(142, 158, 172));
			break;
		case '2':
			rectangle5.setFillColor(Color(142, 158, 172));
			break;
		case '3':
			rectangle6.setFillColor(Color(142, 158, 172));
			break;
		case '4':
			rectangle7.setFillColor(Color(142, 158, 172));
			break;
		}
		break;
	case '2':
		switch (y) {
		case '0':
			rectangle3.setFillColor(Color(142, 158, 172));
			break;
		case '3':
			rectangle8.setFillColor(Color(142, 158, 172));
			break;
		case '1':
			rectangle5.setFillColor(Color(142, 158, 172));
			break;
		case '4':
			rectangle9.setFillColor(Color(142, 158, 172));
			break;
		}
		break;
	case '3':
		switch (y) {
		case '1':
			rectangle6.setFillColor(Color(142, 158, 172));
			break;
		case '2':
			rectangle8.setFillColor(Color(142, 158, 172));
			break;
		case '4':
			rectangle10.setFillColor(Color(142, 158, 172));
			break;
		case '0':
			rectangle4.setFillColor(Color(142, 158, 172));
			break;
		
		}
		break;
	case '4':
		switch (y) {
		case '1':
			rectangle7.setFillColor(Color(142, 158, 172));
			break;
		case '2':
			rectangle9.setFillColor(Color(142, 158, 172));
			break;
		case '3':
			rectangle10.setFillColor(Color(142, 158, 172));
			break;
		case '0':
			rectangle2.setFillColor(Color(142, 158, 172));
			break;
		}
	}

}
