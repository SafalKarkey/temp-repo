#include "parser.h"

Parser::Parser(const char *path)
{
    std::cout << "Parsing file" << std::endl;
    buffer = ReadEntireFile(path, sz);
    std::cout << "Read file" << std::endl;
    std::cout << buffer << std::endl;
}

Parser::~Parser(){
    free((char*)buffer);
}

char *Parser::ReadEntireFile(const char *path, size_t *sz)
{
    FILE *f = fopen(path, "rb");
    if (!f)
    {
        printf("File not found\n");
        exit(0);
    }
    fseek(f, 0, SEEK_END);
    long fsize = ftell(f);
    fseek(f, 0, SEEK_SET);

    char *codeBuffer = (char *)malloc(fsize + 1);
    fread(codeBuffer, fsize, 1, f);
    fclose(f);

    codeBuffer[fsize] = 0;
    *sz = fsize;

    // std::string st(codeBuffer, *sz);

    return codeBuffer;
}

bool Parser::hasMoreCommands()
{
    // std::cout << *buffer << std::endl;
    // char *commandPointer = this->buffer;
    // std::cout << "commands" << std::endl;
    // std::cout << *commandPointer << std::endl;
    // if (*commandPointer == '\0')
    // {
    //     std::cout << "Empty file" << std::endl;
    //     return false;
    // }
    return false;
}