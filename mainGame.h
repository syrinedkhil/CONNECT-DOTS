#pragma once
#include<SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include<iostream>
#include "menu.h"
#include "choixlevel.h"
#include"button.h"
#include"howtoplay.h"
#include"level1.h"
#include"level2.h"
#include"level3.h"
#include<string>
#include"result.h"
#include"LEVEL.h"
#include"level4.h"
#include"level5.h"
#include"level6.h"
using namespace std;
using namespace sf;

class mainGame
{
public:
	//RenderWindow window;
	Sprite background;
	Texture texture;
	
	Font font;
	result R;

	level1 l1;
	level2 l2;
	level3 l3;
	level3 l4;
	level3 l5;
	level3 l6;


public:
	mainGame();
	void startgame(RenderWindow& window);
	~mainGame();
};

