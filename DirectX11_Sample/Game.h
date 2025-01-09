#pragma once

class Game
{
public:
	Game();
	~Game();

public:
	void Init(HWND hwnd);
	void Update();
	void Render();

private:
	HWND mHwnd;
	uint32 mWidth = 0;
	uint32 mHeight = 0;

private:
	// DX
};

