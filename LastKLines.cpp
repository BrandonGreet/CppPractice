#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[]) 
{
    const int K = 4;
    std::ifstream file ("poem.txt");
    std::string lines[K]; // A circular array will hold the latest K lines read from file
    int size = 0; // The number of lines counted so far from file

    // Read lines into lines
    while (file.peek() != EOF)
    {
        getline(file, lines[size % K]);
        size++;
    }

    // These ints guarantee that the circular array is read correctly
    // Otherwise lines may be read out of order.
    int start = size > K ? (size % K) : 0;
    int count  = std::min(K, size);

    for (int i = 0; i < count; i++)
    {
        std::cout << lines[(start + i) % K] << std::endl;
    }
    file.close();
    return 0;
}