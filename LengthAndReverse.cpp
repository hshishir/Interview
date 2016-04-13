#include <iostream>
using namespace std;

// Find length of string
int findLength(char* s)
{
    if (!s) return 0;
    char* p = s;
    while (*p++);
    return p - s -1;
}

// Reverse string
char* reverse(char *s)
{
    if (!s || !*(s + 1)) return s;
    char *b = s;
    char *t = s;
    char tmp;

    while (*t) { t++; }
    t--;

    while (t > b)
    {
        tmp = *b;
        *b++ = *t;
        *t-- = tmp;
    }

    return s;
}

//int main()
//{
//    char s[] = "hemang";
//    cout << s << endl;
//    int length = findLength(s);
//    cout << "Length: " << length << endl;
//
//    char *r = reverse(s);
//    cout << r << endl;
//    cout << "Complete!!" << endl;
//}