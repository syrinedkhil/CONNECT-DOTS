#pragma once
#include<iostream>
#include<SFML/Graphics.hpp>
#include<string>

using namespace sf;
class Button
{
public:
	Button(){}
	
	void setbutton(int size,Color bgcolor) {
		button.setRadius(size);
		button.setFillColor(bgcolor);
	}
	void setposition(Vector2f pos) {
		button.setPosition(pos);
		float xPos = (pos.x + button.getLocalBounds().width / 2) - (text.getLocalBounds().width / 2);
		float yPos = (pos.y + button.getLocalBounds().height/ 2) - (text.getLocalBounds().height / 2);
		text.setPosition({ xPos,yPos });
	}
	void drawTo(RenderWindow& window) {
		window.draw(button);
	}
	void setbackcolor(Color color) {
		button.setFillColor(color);
	}
	
	~Button(){};
private:
	sf::CircleShape button;
	sf::Text text;
	

};

