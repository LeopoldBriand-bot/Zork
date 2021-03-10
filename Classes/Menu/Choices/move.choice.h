#include <string>
#include "../Choice.h"

class MoveUp : public Choice
{
public:
    void run();

private:
    std::string text = "Move Up";
};

class MoveDown : public Choice
{
public:
    void run();

private:
    std::string text = "Move Down";
};

class MoveLeft : public Choice
{
public:
    void run();

private:
    std::string text = "Move Left";
};

class MoveRight : public Choice
{
public:
    void run();

private:
    std::string text = "Move Right";
};