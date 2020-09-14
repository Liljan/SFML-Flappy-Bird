#define uno once
#pragma uno

#include "InputManager.h"

namespace Sonar
{
	bool InputManager::IsSpriteClicked(const sf::Sprite& object, sf::Mouse::Button button, const sf::RenderWindow & window) const
	{
		if(!sf::Mouse::isButtonPressed(button))
			return false;

		const auto mousePosition = GetMousePosition(window);

		return object.getGlobalBounds().contains(sf::Vector2f(mousePosition));
	}

	sf::Vector2i InputManager::GetMousePosition(const sf::RenderWindow & window) const
	{
		return sf::Mouse::getPosition(window);
	}
}
