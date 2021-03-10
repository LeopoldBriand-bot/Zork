#include "Map.h"
#include <fstream>
#include <sstream>
#include <string>
#include <list>

// ###################################################
// Declarations
// ###################################################

Map::Map(int newHeight, int newWidth)
{
    height = newHeight;
    width = newWidth;
}

Map::~Map()
{
}

// ###################################################
// Getters
// ###################################################

int Map::getHeight()
{
    return height;
}

int Map::getWidth()
{
    return width;
}

// ###################################################
// Setters
// ###################################################

// ###################################################
// Methods
// ###################################################

// Build map ressource file to 2D array of Cells
void Map::build()
{
    // Open a random map from Ressource file
    // std::stringstream map;
    //map << "../../Ressources/maps/map" << rand() % 10 << ".txt";

    std::string toto;
    toto = "../../Ressources/maps/map1.txt";
    std::ifstream file(toto);
    std::string line;
    while (std::getline(file, line))
    {
        std::getline(file, line);
        printf(line.c_str());
    }
    file.close();
}

void Map::draw()
{
}
