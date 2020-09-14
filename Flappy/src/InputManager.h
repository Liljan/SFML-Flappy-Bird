#pragma once

#include <SFML/Graphics.hpp>

namespace Sonar
{
	class InputManager
	{
	public:

		InputManager() = default;
		~InputManager() = default;

		bool IsSpriteClicked(const sf::Sprite& object, sf::Mouse::Button button, const sf::RenderWindow& window) const;

		sf::Vector2i GetMousePosition(const sf::RenderWindow& window) const;
	};
}
