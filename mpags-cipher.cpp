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
    
    if (cmdLineArgs[i] == "--version")
    {
        std::cout << "v0.1.0" << std::endl; // would need to change this version number as appropriate - can I link directly to the tag instead?
    }

    if (cmdLineArgs[i] == "-i")
    {
        if (cmdLineArgs[cmdLineArgs.size()-1] == "-i") // checks if -i has something after it (where the input file should be) and if not, exits the program
        {
            std::cout << "No input file was specified" << std::endl;
            return 0;
        }
        else
        {
            std::string input_file{cmdLineArgs[i+1]};
            std::cout << "Input file: " + input_file << std::endl;
        }
        
    }

    if (cmdLineArgs[i] == "-o")
    {
        if (cmdLineArgs[cmdLineArgs.size()-1] == "-o") // checks if -o has something after it (where the output file should be) and if not, exits the program
        {
            std::cout << "No output file was specified" << std::endl;
            return 0;
        }
        else
        {
            std::string output_file{cmdLineArgs[i+1]};
            std::cout << "Output file: " + output_file << std::endl;
        }

    }

}

char in_char{'x'};
std::string in_char_letters{""};
while(std::cin >> in_char)
{    
    if (std::isalpha(in_char)) // check if in_char is a letter
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