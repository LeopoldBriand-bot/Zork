#include "./Utils/Testlib.h"
#include "../Classes/Cell.h"
#include "../Classes/MapUtils.h"

int testCellClass()
{
    Testlib::Declare("Cells should be instanciated");
    auto cell = new Cell("1", {1, 1}, MapUtils::CellContent::Grass);
    Testlib::Test_Assert("Cells should be instanciated", Testlib::InstanceOf<Cell>(cell));
    Testlib::Test_Assert("Should be hidden by default", cell->isDiscovered() == false);
    cell->discover();
    Testlib::Test_Assert("Should be hidden by default", cell->isDiscovered() == true);

    return 0;
}