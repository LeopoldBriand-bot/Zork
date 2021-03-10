#ifndef DEF_CELL
#define DEF_CELL

#include <string>
#include <list>
#include "MapUtils.h"

class Cell
{
public:
    // ###################################################
    // Declarations
    // ###################################################
    Cell(std::string id, std::list<int> pos);
    Cell(std::string id, std::list<int> pos, MapUtils::CellContent content);
    ~Cell();

    // ###################################################
    // Getters
    // ###################################################

    std::string getId();
    std::list<int> getPos();
    MapUtils::CellContent getContent();
    bool isDiscovered();
    // ###################################################
    // Setters
    // ###################################################

    void setId(std::string newId);
    void setPos(std::list<int> newPos);
    void setContent(MapUtils::CellContent newContent);

    // ###################################################
    // Methods
    // ###################################################

    void discover();

private:
    std::string id;
    std::list<int> pos;
    MapUtils::CellContent content;
    bool discovered;
};
#endif