#include "LEVEL.h"


LEVEL::LEVEL()
{
	if (!font.loadFromFile("res/Awesome Possum Shine Demo.otf"))
	{
		cout << "not found" << endl;
	}
	submit.setString("submit");
	submit.setCharacterSize(100);
	submit.setFillColor(Color::White);
	submit.setFont(font);
	submit.setPosition(1450, 350);

	btnsubmit.setbutton(200, Color(240, 208, 199));
	btnsubmit.setposition({ 1400, 230 });


	T[0] = btn1;
	T[1] = btn2;
	T[2] = btn3;
	T[3] = btn4;
	T[4] = btn5;
	T[5] = btnsubmit;

	selectedItem = 0;



}

int LEVEL::getpressedbutton()
{
	 return selectedItem; 
}

void LEVEL::moveUp()
{
	if (selectedItem - 1 >= 0) {
		switch (selectedItem)
		{
		case 1:
			btn2.setbackcolor(Color(139, 84, 151));
			selectedItem--;
			btn1.setbackcolor(Color(154, 7, 69));
			break;
		case 2:
			btn3.setbackcolor(Color(139, 84, 151));
			selectedItem--;
			btn2.setbackcolor(Color(154, 7, 69));
			break;
		case 3:
			btn4.setbackcolor(Color(139, 84, 151));
			selectedItem--;
			btn3.setbackcolor(Color(154, 7, 69));
			break;

		case 4:
			btn5.setbackcolor(Color(139, 84, 151));
			selectedItem--;
			btn4.setbackcolor(Color(154, 7, 69));
			break;
		case 5:
			btnsubmit.setbackcolor(Color(139, 84, 151));
			selectedItem--;
			btn5.setbackcolor(Color(154, 7, 69));
			break;
		}

	}
}

void LEVEL::moveDown()
{
	if (selectedItem + 1 < 6) {
		switch (selectedItem)
		{
		case 0:
			btn1.setbackcolor(Color(139, 84, 151));
			selectedItem++;
			btn2.setbackcolor(Color(154, 7, 69));
			break;
		case 1:
			btn2.setbackcolor(Color(139, 84, 151));
			selectedItem++;
			btn3.setbackcolor(Color(154, 7, 69));
			break;
		case 2:
			btn3.setbackcolor(Color(139, 84, 151));
			selectedItem++;
			btn4.setbackcolor(Color(154, 7, 69));
			break;
		case 3:
			btn4.setbackcolor(Color(139, 84, 151));
			selectedItem++;
			btn5.setbackcolor(Color(154, 7, 69));
			break;
		case 4:
			btn5.setbackcolor(Color(139, 84, 151));
			selectedItem++;
			btnsubmit.setbackcolor(Color(154, 7, 69));
			break;

		}

	}
}


bool LEVEL::verif(char x, char y) {
	bool test = true;
	int i = x - 48;
	int j = y - 48;
	if (suc[j].count(i) == false)
		test = false;
	else {

		suc[i].erase(j);
		suc[j].erase(i);
	}
	return test;
}
