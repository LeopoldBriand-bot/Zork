#include "Menu.h"
#include <iostream>

// ###################################################
// Declarations
// ###################################################

Menu::Menu()
{
}

Menu::~Menu()
{
}

// ###################################################
// Getters
// ###################################################

// ###################################################
// Setters
// ###################################################

// ###################################################
// Methods
// ###################################################

void Menu::addChoice(Choice *choice)
{
    choices.push_back(choice);
}

void Menu::display()
{
    int i = 0;
    for (Choice *choice : choices)
    {
        i++;
        std::cout << i << "- " << choice->getText() << std::endl;
    }
    int inputChoice;
    std::cin >> inputChoice;
    choices.at(inputChoice)->run();
}
