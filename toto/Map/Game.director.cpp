#include "Game.director.h"

GameDirector *GameDirector::pinstance_{nullptr};
std::mutex GameDirector::mutex_;

GameDirector *GameDirector::GetInstance()
{
    std::lock_guard<std::mutex> lock(mutex_);
    if (pinstance_ == nullptr)
    {
        pinstance_ = new GameDirector();
    }
    return pinstance_;
}