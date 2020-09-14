#pragma once

#include "AssetManager.h"

namespace Sonar
{
	void AssetManager::LoadTexture(const std::string name, const std::string fileName)
	{
		sf::Texture texture;

		if(texture.loadFromFile(fileName))
			_textures.emplace(name, texture);
	}

	const sf::Texture& AssetManager::GetTexture(const std::string& name)
	{
		return _textures[name];
	}

	void AssetManager::LoadFont(const std::string name, const std::string fileName)
	{
		sf::Font font;

		if(font.loadFromFile(fileName))
			_fonts.emplace(name, font);
	}

	const sf::Font& AssetManager::GetFont(const std::string& name)
	{
		return _fonts[name];
	}
}


