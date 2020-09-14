#include "Game.h"
#pragma once

namespace Sonar
{
	Game::Game(int width, int height, const std::string& title)
	{
		_data->window.create(sf::VideoMode(width, height), title,
			sf::Style::Close | sf::Style::Titlebar);

		_data->window.setFramerateLimit(60);

		Run();
	}
	void Game::Run()
	{
		sf::Clock clock;

		while(_data->window.isOpen())
		{
			const float dt = clock.restart().asSeconds();

			_data->stateMachine.GetActiveState()->HandleInput();
			_data->stateMachine.GetActiveState()->Update(dt);
			_data->stateMachine.GetActiveState()->Draw();
		}
	}
}
