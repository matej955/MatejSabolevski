#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

class Cvijet 
{
private:
	sf::RenderWindow* window;
public:
	void draw();
	Cvijet(sf::RenderWindow* window);
};

