#include "Cvijet.h"
#include <SFML/Graphics.hpp>

using namespace std;

void Cvijet::draw()
{
	sf::CircleShape shape(50.f);
	shape.setFillColor(sf::Color(100,250,50));


	window->draw(shape);
}

Cvijet::Cvijet(sf::RenderWindow* window)
{
}
