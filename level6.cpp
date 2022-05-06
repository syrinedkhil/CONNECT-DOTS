#include "level6.h"


level6::level6()
{
	titre.setString("level VI");
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
	btn2.setposition({ 750, 1250 });
	btn3.setposition({ 200, 1525 });
	btn4.setposition({ 1300, 1525});
	btn5.setposition({ 750, 1800 });





	rectangle1.setFillColor(Color(142, 142, 142));
	rectangle1.setSize(Vector2f(33, 1000));
	rectangle1.setPosition(780, 730);
	rectangle1.setRotation(33);


	rectangle2.setFillColor(Color(142, 142, 142));
	rectangle2.setSize(Vector2f(33, 1000));
	rectangle2.setPosition(780, 730);
	rectangle2.setRotation(-33);




	rectangle3.setFillColor(Color(142, 142, 142));
	rectangle3.setSize(Vector2f(33, 660));
	rectangle3.setPosition(790, 1280);
	rectangle3.setRotation(62);

	rectangle4.setFillColor(Color(142, 142, 142));
	rectangle4.setSize(Vector2f(33, 650));
	rectangle4.setPosition(790, 1300);
	rectangle4.setRotation(-62);



	rectangle5.setFillColor(Color(142, 142, 142));
	rectangle5.setSize(Vector2f(33, 1100));
	rectangle5.setPosition(230, 1610);
	rectangle5.setRotation(-90);


	rectangle6.setFillColor(Color(142, 142, 142));
	rectangle6.setSize(Vector2f(33, 660));
	rectangle6.setPosition(230, 1610);
	rectangle6.setRotation(-65);

	rectangle7.setFillColor(Color(142, 142, 142));
	rectangle7.setSize(Vector2f(33, 640));
	rectangle7.setPosition(1330, 1590);
	rectangle7.setRotation(65);







	set<int> A = { 3,2 };
	set<int> B = { 3,2 };
	set<int> C = { 0,3,1,4 };
	set<int> D = { 1,2,4,0 };
	set<int> E = { 2,3 };


	suc[0] = A;
	suc[1] = B;
	suc[2] = C;
	suc[3] = D;
	suc[4] = E;



}

void level6::construire(RenderWindow& window)
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

void level6::setbackrectangle(char x, char y)
{
	switch (x)
	{
	case '0':
		switch (y) {
		case '2':
			rectangle1.setFillColor(Color(142, 158, 172));
			break;
		case '3':
			rectangle2.setFillColor(Color(142, 158, 172));
			break;
		}
		break;
	case '1':
		switch (y) {
		case '3':
			rectangle4.setFillColor(Color(142, 158, 172));
			break;
		case '2':
			rectangle3.setFillColor(Color(142, 158, 172));
			break;
		


		}
		break;
	case '2':
		switch (y) {
		case '0':
			rectangle1.setFillColor(Color(142, 158, 172));
			break;
		case '3':
			rectangle5.setFillColor(Color(142, 158, 172));
			break;
		case '1':
			rectangle3.setFillColor(Color(142, 158, 172));
			break;
		case '4':
			rectangle6.setFillColor(Color(142, 158, 172));
			break;
		}
		break;
	case '3':
		switch (y) {
		case '1':
			rectangle4.setFillColor(Color(142, 158, 172));
			break;
		case '2':
			rectangle5.setFillColor(Color(142, 158, 172));
			break;
		case '4':
			rectangle7.setFillColor(Color(142, 158, 172));
			break;
		case '0':
			rectangle2.setFillColor(Color(142, 158, 172));
			break;
		}
		break;
	case '4':
		switch (y) {
		case '2':
			rectangle6.setFillColor(Color(142, 158, 172));
			break;
		case '3':
			rectangle7.setFillColor(Color(142, 158, 172));
			break;
		}
	}
	
}
