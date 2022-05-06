#include "level5.h"

level5::level5()
{
	titre.setString("level V");
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
	btn3.setposition({ 750, 1250 });
	btn4.setposition({ 200, 1800 });
	btn5.setposition({ 1300, 1800 });





	rectangle1.setFillColor(Color(142, 142, 142));
	rectangle1.setSize(Vector2f(33, 1100));
	rectangle1.setPosition(250, 760);
	rectangle1.setRotation(-90);


	rectangle2.setFillColor(Color(142, 142, 142));
	rectangle2.setSize(Vector2f(33, 1100));
	rectangle2.setPosition(235, 760);
	rectangle2.setRotation(0);



	rectangle3.setFillColor(Color(142, 142, 142));
	rectangle3.setSize(Vector2f(33, 1100));
	rectangle3.setPosition(1340, 750);
	rectangle3.setRotation(0);

	rectangle4.setFillColor(Color(142, 142, 142));
	rectangle4.setSize(Vector2f(33, 750));
	rectangle4.setPosition(790, 1280);
	rectangle4.setRotation(45);


	rectangle5.setFillColor(Color(142, 142, 142));
	rectangle5.setSize(Vector2f(33, 750));
	rectangle5.setPosition(790, 1300);
	rectangle5.setRotation(-45);

	rectangle6.setFillColor(Color(142, 142, 142));
	rectangle6.setSize(Vector2f(33, 1100));
	rectangle6.setPosition(250, 1850);
	rectangle6.setRotation(-90);


	





	set<int> A = { 1,3 };
	set<int> B = { 0,4 };
	set<int> C = { 4,3 };
	set<int> D = { 0,2,4 };
	set<int> E = { 1,2,3 };


	suc[0] = A;
	suc[1] = B;
	suc[2] = C;
	suc[3] = D;
	suc[4] = E;



}

void level5::construire(RenderWindow& window)
{
	window.draw(rectangle1);
	window.draw(rectangle2);
	window.draw(rectangle3);
	window.draw(rectangle4);
	window.draw(rectangle5);
	window.draw(rectangle6);
	





	btn1.drawTo(window);
	btn2.drawTo(window);
	btn3.drawTo(window);
	btn4.drawTo(window);
	btn5.drawTo(window);
	btnsubmit.drawTo(window);


	window.draw(submit);
	window.draw(titre);

}

void level5::setbackrectangle(char x, char y)
{	switch (x)
	{
	case '0':
		switch (y) {
		case '1':
			rectangle1.setFillColor(Color(142, 158, 172));
			break;
		case '3':
			rectangle2.setFillColor(Color(142, 158, 172));
			break;
		}
		break;
	case '1':
		switch (y) {
		case '0':
			rectangle1.setFillColor(Color(142, 158, 172));
			break;
		
		case '4':
			rectangle3.setFillColor(Color(142, 158, 172));
			break;
		}
		break;
	case '2':
		switch (y) {
		case '3':
			rectangle4.setFillColor(Color(142, 158, 172));
			break;
		case '4':
			rectangle5.setFillColor(Color(142, 158, 172));
			break;
		}
		break;
	case '3':
		switch (y) {
		case '0':
			rectangle2.setFillColor(Color(142, 158, 172));
			break;
		case '2':
			rectangle4.setFillColor(Color(142, 158, 172));
			break;
		case '4':
			rectangle6.setFillColor(Color(142, 158, 172));
			break;
		}
		break;
	case '4':
		switch (y) {
		case '1':
			rectangle3.setFillColor(Color(142, 158, 172));
			break;
		case '2':
			rectangle5.setFillColor(Color(142, 158, 172));
			break;
		case '3':
			rectangle6.setFillColor(Color(142, 158, 172));
			break;
		}
	}
}
