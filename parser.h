#pragma once
#include "misc.h"
#include <stdio.h>
#include <stdlib.h>
// #include <string>
#include "misc.h"

class Parser
{
public:
    // std::string buffer = NULL;
    const char* buffer;
    std::string currentCommand;
    size_t* sz;
    bool A_COMMAND = false, C_COMMAND = false, L_COMMAND = false;

    char* ReadEntireFile(const char *path, size_t *size);
    bool hasMoreCommands();
    std::string advance();
    bool commandType();
    std::string symbol();
    std::string dest();
    std::string comp();
    std::string jump();
    Parser(const char* path);
    ~Parser();
};