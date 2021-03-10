#include "Cell.h"

#include <string>
#include <list>

// ###################################################
// Declarations
// ###################################################

Cell::Cell(std::string newId, std::list<int> newPos)
{
    id = newId;
    pos = newPos;
    discovered = false;
}

Cell::Cell(std::string newId, std::list<int> newPos, MapUtils::CellContent newContent)
{
    id = newId;
    pos = newPos;
    content = newContent;
    discovered = false;
}

Cell::~Cell()
{
}

// ###################################################
// Getters
// ###################################################

std::string Cell::getId()
{
    return id;
}

std::list<int> Cell::getPos()
{
    return pos;
}

MapUtils::CellContent Cell::getContent()
{
    return content;
}

bool Cell::isDiscovered()
{
    return discovered;
}

// ###################################################
// Setters
// ###################################################

void Cell::setId(std::string newId)
{
    id = newId;
}

void Cell::setPos(std::list<int> newPos)
{
    pos = newPos;
}

void Cell::setContent(MapUtils::CellContent newContent)
{
    content = newContent;
}

// ###################################################
// Methods
// ###################################################

void Cell::discover()
{
    discovered = true;
}
