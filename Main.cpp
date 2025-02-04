//Write file io program that reads a file and writes it to another file

// write a hello world progtam in cpp

#include <iostream>
#include <fstream>
#include <string>
 using namespace std;
int main()
{
    std::ifstream in("input.txt");
    std::ofstream out("output.txt");
 
    std::string str;
    while (std::getline(in, str))
    {
        out << str << std::endl;
    }
 
    return 0;
}