#pragma once

#include "SplashState.h"
#include "Defines.h"

namespace Sonar
{
	SplashState::SplashState(GameDataRef data) : _data(data)
	{
		_backgroundColor = sf::Color::Black;
	}

	void SplashState::Init()
	{
		_data->assets.LoadTexture("Splash State Background", "resources/img/Splash Background.png");

		_backgroundLogo.setTexture(_data->assets.GetTexture("Splash State Background"));

		_timer.restart();
	}

	void SplashState::HandleInput()
	{
		sf::Event event;

		sf::RenderWindow& window = _data->window;

		while(window.pollEvent(event))
		{
			if(event.type == sf::Event::Closed)
				window.close();
		}
	}

	void SplashState::Update(float dt)
	{
		if(_timer.getElapsedTime().asSeconds() > SPLASH_STATE_SHOW_TIME)
			bool gotoNext = false;
	}

	void SplashState::Draw()
	{
		sf::RenderWindow& window = _data->window;

		window.clear(_backgroundColor);
		window.draw(_backgroundLogo);
		window.display();
	}
}