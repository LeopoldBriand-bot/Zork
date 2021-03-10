#include "game.choice.h"

StartGame::StartGame()
{
    setText("Start Game");
}
void StartGame::run()
{
    std::cout << "start";
}

LeaveGame::LeaveGame()
{
    setText("Leave Game");
}
void LeaveGame::run()
{
    exit(0);
}

SaveGame::SaveGame()
{
    setText("Save Game");
}
void SaveGame::run()
{
    std::cout << "save";
}

LoadGame::LoadGame()
{
    setText("Load Game");
}
void LoadGame::run()
{
    std::cout << "load";
}