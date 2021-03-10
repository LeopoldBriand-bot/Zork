#include "Menu.director.h"
#include "../Menu/Choices/game.choice.h"
#include "../Menu/Choices/move.choice.h"

MenuDirector *MenuDirector::pinstance_{nullptr};
std::mutex MenuDirector::mutex_;

MenuDirector::MenuDirector()
{
    choices["StartGame"] = new StartGame();
    choices["LeaveGame"] = new LeaveGame();
    choices["SaveGame"] = new SaveGame();
    choices["LoadGame"] = new LoadGame();
}

MenuDirector *MenuDirector::GetInstance()
{
    std::lock_guard<std::mutex> lock(mutex_);
    if (pinstance_ == nullptr)
    {
        pinstance_ = new MenuDirector();
    }
    return pinstance_;
}
void MenuDirector::createMenu(std::string menuName)
{
    auto menu = new Menu();
    menus.insert({menuName, menu});
}
Menu *MenuDirector::getMenu(std::string menuName)
{
    auto it = menus.find(menuName);
    return it->second;
}
void MenuDirector::addChoiceToMenu(std::string menuName, std::string choiceName)
{
    auto it = choices.find(choiceName);
    this->getMenu(menuName)->addChoice(it->second);
}