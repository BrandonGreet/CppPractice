#include <iostream>

void reverse(char *str)
{
    char *end = str;
    char tmp;

    // Get end of string pointer
    while (*end) end++;// True as long as *end isn't NULL 
    end--; // address just before NULL character

    while (str < end)
    {
        tmp = *str;
        *str++ = *end;
        *end-- = tmp;
    }
}

int main()
{
    char str[27] = "abcdefghijklmnopqrstuvwxyz";
    reverse(str);
    for (int i = 0; str[i]; i++)
    {
        std::cout << str[i] << std::endl;
    }
    return 0;
}