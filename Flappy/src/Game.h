#pragma once


#include "StateMachine.h"
#include "AssetManager.h"
#include "InputManager.h"

namespace Sonar
{
	struct GameData
	{
		StateMachine stateMachine;
		sf::RenderWindow window;
		AssetManager assets;
		InputManager input;
	};

	// Bad shiets
	typedef std::shared_ptr<GameData> GameDataRef;

	class Game
	{
	public:

		Game(int width, int height, const std::string& title);
		~Game() = default;

	private:

		void Run();

		// More bad shiets
		GameDataRef _data = std::make_shared<GameData>();
	};
}