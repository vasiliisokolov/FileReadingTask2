#include <iostream>
#include <fstream>
#include <vector>


int main()
{
    std::vector<char> buffer;
    std::string adress;
    std::fstream book;
    std::cout << "Enter file adress: \n";
    std::cin >> adress;
    
    book.open(adress);
    if (book.is_open())
    {
        std::cout << "File is open!" << std::endl;
    }
    else
    {
        std::cerr << "File is not open!" << std::endl;
    }

}