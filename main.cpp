#include <iostream>
#include <string>
#include "md5.h"
#include "sha1.h"
#include "sha3.h"
#include "sha256.h"

/*
 * To do:
 * Organize the functions in a class
 * Support more algorithms (maybe)
 * Make a config for different algorithms
 * Using fstream to save everything in a file
 * Adding more comments
*/

void setHashes(std::string str, std::string hashArray[]);
void outputHashes(std::string hashArray[]);
//void writeToFile

int main()
{
    std::cout << "Version: 0.1.0 (Release)";
    std::cout << "This program uses Stephan Brumme's hash library and can be found here: https://github.com/stbrumme/hash-library" << std::endl;
    std::cout << "I've only provided hash algorithms that I currently use, but I wouldn't mind adding more." << std::endl;
    std::cout << "You can find more of my projects at: github.com/Mrremrem" << std::endl;
    std::cout << "Now, without further ado, here's the program.\n" << std::endl;

    std::string userStr;
    // using arrays for a later version. Not really needed at this time.
    std::string hashes[4];

    bool exit = false;

    while (!exit)
    {
        std::cout << "Enter a string: ";
        std::getline(std::cin, userStr);

        std::cout << std::endl;

        setHashes(userStr, hashes);
        outputHashes(hashes);

    }
}

void setHashes(std::string str, std::string hashArray[])
{
    MD5 md5;
    SHA1 sha1;
    SHA256 sha2;
    SHA3 sha3;

    hashArray[0] = md5(str);
    hashArray[1] = sha1(str);
    hashArray[2] = sha2(str);
    hashArray[3] = sha3(str);
}

void outputHashes(std::string hashArray[])
{
    std::cout << "MD5: " << hashArray[0] << std::endl;;
    std::cout << "sha-1: " << hashArray[1] << std::endl;;
    std::cout << "sha-256: " << hashArray[2] << std::endl;;
    std::cout << "sha-3: " << hashArray[3] << std::endl;;
}
