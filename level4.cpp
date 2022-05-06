#include "level4.h"


level4::level4()
{
	titre.setString("level IV");
	titre.setFillColor(Color::White);
	titre.setFont(font);
	titre.setPosition(100, 50);
	titre.setCharacterSize(300);

	btn1.setbutton(50, Color(154, 7, 69));
	btn2.setbutton(50, Color(139, 84, 151));
	btn3.setbutton(50, Color(139, 84, 151));
	btn4.setbutton(50, Color(139, 84, 151));
	btn5.setbutton(50, Color(139, 84, 151));





	btn1.setposition({ 750,700 });
	btn2.setposition({ 200, 1250 });
	btn3.setposition({ 1300, 1250 });
	btn4.setposition({ 400, 1800 });
	btn5.setposition({ 1100, 1800 });





	rectangle1.setFillColor(Color(142, 142, 142));
	rectangle1.setSize(Vector2f(33, 1180));
	rectangle1.setPosition(770, 730);
	rectangle1.setRotation(16.5);


	rectangle2.setFillColor(Color(142, 142, 142));
	rectangle2.setSize(Vector2f(33, 1180));
	rectangle2.setPosition(790, 730);
	rectangle2.setRotation(343);



	rectangle3.setFillColor(Color(142, 142, 142));
	rectangle3.setSize(Vector2f(33, 550));
	rectangle3.setPosition(240, 1300);
	rectangle3.setRotation(-19);


	rectangle4.setFillColor(Color(142, 142, 142));
	rectangle4.setSize(Vector2f(33, 1050));
	rectangle4.setPosition(240, 1300);
	rectangle4.setRotation(-57);


	rectangle5.setFillColor(Color(142, 142, 142));
	rectangle5.setSize(Vector2f(33, 1050));
	rectangle5.setPosition(1330, 1300);
	rectangle5.setRotation(58);


	rectangle6.setFillColor(Color(142, 142, 142));
	rectangle6.setSize(Vector2f(33, 550));
	rectangle6.setPosition(1330, 1300);
	rectangle6.setRotation(19);


	rectangle7.setFillColor(Color(142, 142, 142));
	rectangle7.setSize(Vector2f(33, 700));
	rectangle7.setPosition(440, 1860);
	rectangle7.setRotation(-90);


	


	set<int> A = { 3,4 };
	set<int> B = { 3,4 };
	set<int> C = { 3,4 };
	set<int> D = { 0,1,2,4 };
	set<int> E = { 0,1,2,3 };


	suc[0] = A;
	suc[1] = B;
	suc[2] = C;
	suc[3] = D;
	suc[4] = E;



}

void level4::construire(RenderWindow& window)
{
	window.draw(rectangle1);
	window.draw(rectangle2);
	window.draw(rectangle3);
	window.draw(rectangle4);
	window.draw(rectangle5);
	window.draw(rectangle6);
	window.draw(rectangle7);
	




	btn1.drawTo(window);
	btn2.drawTo(window);
	btn3.drawTo(window);
	btn4.drawTo(window);
	btn5.drawTo(window);
	btnsubmit.drawTo(window);


	window.draw(submit);
	window.draw(titre);

}

void level4::setbackrectangle(char x, char y)
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
		case '3':
			rectangle3.setFillColor(Color(142, 158, 172));
			break;
		case '4':
			rectangle4.setFillColor(Color(142, 158, 172));
			break;
		}
		break;
	case '2':
		switch (y) {
		case '3':
			rectangle5.setFillColor(Color(142, 158, 172));
			break;
		case '4':
			rectangle6.setFillColor(Color(142, 158, 172));
			break;
		}
		break;
	case '3':
		switch (y) {
		case '1':
			rectangle3.setFillColor(Color(142, 158, 172));
			break;
		case '2':
			rectangle5.setFillColor(Color(142, 158, 172));
			break;
		case '4':
			rectangle7.setFillColor(Color(142, 158, 172));
			break;
		case '0':
			rectangle1.setFillColor(Color(142, 158, 172));
			break;
		}
		break;
	case '4':
		switch (y) {
		case '1':
			rectangle4.setFillColor(Color(142, 158, 172));
			break;
		case '2':
			rectangle6.setFillColor(Color(142, 158, 172));
			break;
		
		case '3':
			rectangle7.setFillColor(Color(142, 158, 172));
			break;
		case '0':
			rectangle2.setFillColor(Color(142, 158, 172));
			break;
		}
	}
	
}