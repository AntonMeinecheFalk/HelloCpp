#include <iostream>
#include <string>

#define HELLO_WORLD_MESSAGE "Hello World."

void Print(std::string message)
{
    std::cout << "[HellowWorldApp] " << message << '\n';

}


int main(int argc, char *argv[])
{
    Print(HELLO_WORLD_MESSAGE);
    Print("argc: " + std::to_string(argc));

    return 0;
}