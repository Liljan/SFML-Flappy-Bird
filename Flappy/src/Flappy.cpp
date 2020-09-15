#include "Defines.h"
#include <SFML/Graphics.hpp>


int main()
{
	sf::RenderWindow window;
	window.create(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Fläppi Börd");

	while(window.isOpen())
	{
		// Handle events
		// Update
		// Render

		window.clear(sf::Color::Black);

		window.display();
	}


	return EXIT_SUCCESS;
}