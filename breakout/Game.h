#pragma once

enum GameState {
	GAME_ACTIVE,
	GAME_MENU,
	GAME_WIN
};


class Game
{
public:
	//game state
	GameState State;
	bool Keys[1024];
	unsigned int Width, Height;

	Game(unsigned int width, unsigned int height);
	~Game();

	void Init(); //init game, load all shaders textures and levels

	//game loop
	void ProcessInput(float dt);
	void Update(float dt);
	void Render();

};