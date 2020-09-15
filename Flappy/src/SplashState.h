#pragma once

#include "State.h"

// Bad
#include "Game.h"

namespace Sonar
{
	class SplashState : public State
	{
	public:

		SplashState(GameDataRef data);

		// Inherited via State
		virtual void Init() override;
		virtual void HandleInput() override;
		virtual void Update(float dt) override;
		virtual void Draw() override;

	private:

		GameDataRef _data;

		sf::Clock _timer;

		sf::Texture _backgroundTexture;
		sf::Sprite _backgroundLogo;
		sf::Color _backgroundColor;
	};
}