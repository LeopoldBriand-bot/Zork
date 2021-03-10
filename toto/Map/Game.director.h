#include <mutex>
class GameDirector
{

private:
    static GameDirector *pinstance_;
    static std::mutex mutex_;

protected:
    GameDirector();
    ~GameDirector();

public:
    GameDirector(GameDirector &other) = delete;
    void operator=(const GameDirector &) = delete;
    static GameDirector *GetInstance();
    void start();
};
