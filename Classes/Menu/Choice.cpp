#include "Choice.h"
#include <iostream>
// ###################################################
// Declarations
// ###################################################

Choice::Choice()
{
}

Choice::~Choice()
{
}

void Choice::run()
{
    std::cout << "Default empty action";
}

std::string Choice::getText()
{
    return text;
}

void Choice::setText(std::string newText)
{
    text = newText;
}
