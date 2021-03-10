#include <string>
#include <iostream>
#include "../Choice.h"

class StartGame : public Choice
{
public:
    StartGame();
    void run();
};

class LeaveGame : public Choice
{
public:
    LeaveGame();
    void run();
};

class SaveGame : public Choice
{
public:
    SaveGame();
    void run();
};

class LoadGame : public Choice
{
public:
    LoadGame();
    void run();
};