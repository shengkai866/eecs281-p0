#ifndef SPACE_HPP
#define SPACE_HPP

#include <iostream>
#include <vector>
#include <getopt.h>
#include <iomanip>
#include <string>
#include <stack>
#include <queue>
#include <deque>

class CommandLineOption
{
    std::string container;
    char mode;
    option command[5] = {
        {"stack", optional_argument, nullptr, 's'},
        {"queue", optional_argument, nullptr, 'q'},
        {"ouput", required_argument, nullptr, 'o'},
        {"help", no_argument, nullptr, 'h'},
        {nullptr, 0, nullptr, '\0'},
    };

public:
    void stateMode(int argc, char *argv[]);

    void printHelp();

    pair<string, char> getmode();
};

#endif // SPACE_HPP