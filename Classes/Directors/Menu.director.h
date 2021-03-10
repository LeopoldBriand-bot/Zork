#include <mutex>
#include <map>
#include "../Menu/Menu.h"

class MenuDirector
{

private:
    static MenuDirector *pinstance_;
    static std::mutex mutex_;
    std::map<std::string, Menu *> menus;
    std::map<std::string, Choice *> choices;

protected:
    MenuDirector();
    ~MenuDirector();

public:
    MenuDirector(MenuDirector &other) = delete;
    void operator=(const MenuDirector &) = delete;
    static MenuDirector *GetInstance();
    void createMenu(std::string menuName);
    Menu *getMenu(std::string menuName);
    void addChoiceToMenu(std::string menuName, std::string choiceName);
};
