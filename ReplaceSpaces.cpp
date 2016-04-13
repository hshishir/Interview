#include <iostream>
using namespace std;

char* replaceSpaces(char *s)
{
    if (!s) return NULL;
    
    int spaceCount = 0;
    char *t = s;
    while (*t)
    {
        if (*t == ' ') spaceCount++;
    }

    int len = strlen(s);
    int nlen = len + 2 * spaceCount;
}

int main()
{
    // "my name is Romeo" => "my%20name%20is%20Romeo"
    char s[] = "my name is Romeo";
}