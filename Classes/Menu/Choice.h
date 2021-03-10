#include <string>

#ifndef DEF_CHOICE
#define DEF_CHOICE

class Choice
{
public:
    Choice();
    ~Choice();

    void run();
    std::string getText();
    void setText(std::string newText);

private:
    std::string text;
};

#endif