#ifndef DEF_Map
#define DEF_Map

#include <string>
#include <list>
#include "MapUtils.h"

class Map
{
public:
    // ###################################################
    // Declarations
    // ###################################################

    // Initialize map with height an width
    Map(int height, int width);
    ~Map();

    // ###################################################
    // Getters
    // ###################################################

    int getHeight();
    int getWidth();

    // ###################################################
    // Setters
    // ###################################################

    // ###################################################
    // Methods
    // ###################################################

    void build();
    void draw();

private:
    int height;
    int width;
};
#endif