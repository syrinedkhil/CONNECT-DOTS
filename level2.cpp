#include "level2.h"

level2::level2()
{
	titre.setString("level II");
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
	btn4.setposition({ 200, 1800 });
	btn5.setposition({ 1300,1800 });
	
    rectangle1.setFillColor(Color(142, 142, 142));
	rectangle1.setSize(Vector2f(33, 800));
	rectangle1.setPosition(765, 740);
	rectangle1.setRotation(45);



	rectangle2.setFillColor(Color(142, 142, 142));
	rectangle2.setSize(Vector2f(33, 760));
	rectangle2.setPosition(1340, 1270);
	rectangle2.setRotation(136);


	rectangle3.setFillColor(Color(142, 142, 142));
	rectangle3.setSize(Vector2f(33, 1100));
	rectangle3.setPosition(1340, 1280);
	rectangle3.setRotation(90);



	rectangle4.setFillColor(Color(142, 142, 142));
	rectangle4.setSize(Vector2f(33, 600));
	rectangle4.setPosition(230, 1275);
	rectangle4.setRotation(0);



	rectangle5.setFillColor(Color(142, 142, 142));
	rectangle5.setSize(Vector2f(33, 1200));
	rectangle5.setPosition(1350, 1830);
	rectangle5.setRotation(116.5);

	rectangle6.setFillColor(Color(142, 142, 142));
	rectangle6.setSize(Vector2f(33, 1200));
	rectangle6.setPosition(1340, 1290);
	rectangle6.setRotation(64);

	rectangle7.setFillColor(Color(142, 142, 142));
	rectangle7.setSize(Vector2f(33, 600));
	rectangle7.setPosition(1330, 1290);
	rectangle7.setRotation(0);

	rectangle8.setFillColor(Color(142, 142, 142));
	rectangle8.setSize(Vector2f(33, 1100));
	rectangle8.setPosition(1350, 1840);
	rectangle8.setRotation(90);


	set<int> A = { 1,2 };
	set<int> B = { 0,3,2,4 };
	set<int> C = { 0,3,1,4 };
	set<int> D = { 1,2,4 };
	set<int> E = { 1,2,3 };


	suc[0] = A;
	suc[1] = B;
    suc[2] = C;
	suc[3] = D;
	suc[4] = E;

}

void level2::construire(RenderWindow& window)
{
	window.draw(rectangle1);
	window.draw(rectangle2);
	window.draw(rectangle3);
	window.draw(rectangle4);
	window.draw(rectangle5);
	window.draw(rectangle6);
	window.draw(rectangle7);
	window.draw(rectangle8);




	btn1.drawTo(window);
	btn2.drawTo(window);
	btn3.drawTo(window);
	btn4.drawTo(window);
	btn5.drawTo(window);
	btnsubmit.drawTo(window);


	window.draw(submit);
	window.draw(titre);
}

void level2::setbackrectangle(char x, char y)
{
	switch (x)
	{
	case '0':
		switch (y) {
		case '1':
			rectangle1.setFillColor(Color(142, 158, 172));
			break;
		case '2':
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
			rectangle3.setFillColor(Color(142, 158, 172));
			break;

		case '3':
			rectangle4.setFillColor(Color(142, 158, 172));
			break;
		case '4':
			rectangle5.setFillColor(Color(142, 158, 172));
			break;
		}
		break;
	
		
	case '2':
		switch (y) {
		case '0':
			rectangle2.setFillColor(Color(142, 158, 172));
			break;
		case '1':
			rectangle3.setFillColor(Color(142, 158, 172));
			break;
		case '3':
			rectangle6.setFillColor(Color(142, 158, 172));
			break;
		case '4':
			rectangle7.setFillColor(Color(142, 158, 172));
			break;
		}
		break;
	case '3':
		switch (y) {
		case '1':
			rectangle4.setFillColor(Color(142, 158, 172));
			break;
		case '2':
			rectangle6.setFillColor(Color(142, 158, 172));
			break;
		case '4':
			rectangle8.setFillColor(Color(142, 158, 172));
			break;
		}
		break;
	case '4':
		switch (y) {
		case '1':
			rectangle5.setFillColor(Color(142, 158, 172));
			break;
		case '2':
			rectangle7.setFillColor(Color(142, 158, 172));
			break;
		case '3':
			rectangle8.setFillColor(Color(142, 158, 172));
			break;
		}
		break;
	}


}

