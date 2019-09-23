#ifndef METAGAME_H
#define METAGAME_H

#include "SDL.h"
#include <string>

class MetaGame
{
public:
    // MetaGame() : platform_used("unknown") {}
    std::string getPlatform();

private:
    std::string platform_used;
}

std::string
MetaGame::getPlatform()
{
    // ** How to covert a pointer to a char into a C++ string?
    const char *SDL_GetPlatform(void);
}

#endif