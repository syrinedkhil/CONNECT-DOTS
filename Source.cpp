
#include"mainGame.h"



int main(void) {
	RenderWindow window(VideoMode(900, 900), "connect dots");
	mainGame MainGame;
	MainGame.startgame(window);
}