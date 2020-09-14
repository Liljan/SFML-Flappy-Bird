#include <SFML/Graphics.hpp>

#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720 

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


	return 0;
}