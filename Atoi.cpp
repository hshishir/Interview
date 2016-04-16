#include <iostream>
using namespace std;

int atoi(char *s)
{
    if (!s) return -1;
    int neg = 1;
    int res = 0;
    char *c = s;

    if (*c == '-')
    {
        neg = -1;
        c++;
    }

    while (*c)
    {
        res = res * 10 + *c - '0';
        c++;
    }

    return res*neg;
}

//void main()
//{
//    char s[] = "123";
//    int res = atoi(s);
//    printf("%i", res);
//    printf("Complete!!");
//}