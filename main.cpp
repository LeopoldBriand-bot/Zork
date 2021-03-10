#include "./Classes/Directors/Menu.director.h"

using namespace std;

int main()
{
    MenuDirector::GetInstance()->createMenu("StartMenu");
    MenuDirector::GetInstance()->addChoiceToMenu("StartMenu", "StartGame");
    MenuDirector::GetInstance()->addChoiceToMenu("StartMenu", "LeaveGame");
    MenuDirector::GetInstance()->addChoiceToMenu("StartMenu", "SaveGame");
    MenuDirector::GetInstance()->addChoiceToMenu("StartMenu", "LoadGame");
    MenuDirector::GetInstance()->getMenu("StartMenu")->display();
}