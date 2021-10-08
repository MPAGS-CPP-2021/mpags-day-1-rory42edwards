#include <iostream>
#include <vector>
int main(int argc, char* argv[])
{
const std::vector<std::string> cmdLineArgs{argv, argv+argc};
for (size_t i{0}; i < cmdLineArgs.size(); i++)
{
    if ((cmdLineArgs[i] == "-h") || (cmdLineArgs[i] == "--help"))
    {
        std::cout << "No help available" << std::endl; // print a help message
        return 0;
    }
}

char in_char{'x'};
std::string in_char_letters{""};
while(std::cin >> in_char)
{    
    if (std::isalpha(in_char)) // check for letter
    {
        in_char_letters += std::toupper(in_char); // make letter uppercase
    }

    switch (in_char) // convert numbers to words
    {
        case '0':
            in_char_letters += "ZERO";
            break;
        case '1':
            in_char_letters += "ONE";
            break;
        case '2':
            in_char_letters += "TWO";
            break;
        case '3':
            in_char_letters += "THREE";
            break;
        case '4':
            in_char_letters += "FOUR";
            break;
        case '5':
            in_char_letters += "FIVE";
            break;
        case '6':
            in_char_letters += "SIX";
            break;
        case '7':
            in_char_letters += "SEVEN";
            break;
        case '8':
            in_char_letters += "EIGHT";
            break;
        case '9':
            in_char_letters += "NINE";
            break;
    }
}
std::cout << in_char_letters << std::endl;
}