#include "space.hpp"
#include <iostream>
#include <fstream>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <string>

using namespace std;

void CommandLineOption::stateMode(int argc, char *argv[])
{
    int choice;
    while ((choice = getopt_long(argc, argv, "")))
}