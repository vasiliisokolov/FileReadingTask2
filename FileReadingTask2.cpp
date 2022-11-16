#include <iostream>
#include <fstream>



int main()
{
    char buffer[50];
    std::string adress;
    std::fstream book;
    std::cout << "Enter file adress: \n";
    std::cin >> adress;
    std::cout << adress << std::endl;
    
    book.open(adress, std::ios::binary);
    if (book.is_open())
    {
        std::cout << "File is open!" << std::endl;
        while (!book.eof())
        {
            book.read(buffer, sizeof(buffer-1));
            buffer[19] = 0;
            std::cout << buffer << std::endl;
        }
        
    }
    else
    {
        std::cerr << "File is not open!" << std::endl;
    }
    book.close();
}