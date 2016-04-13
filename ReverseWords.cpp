#include <iostream>
using namespace std;

bool isWordDel(char t, char *del)
{
    if (!del) return false;
    char *p = del;
    for (; *p && *p != t; p++);
    if (!*p) return false;
    return true;
}

void reverse(char *b, char *e)
{
    char tmp;
    while (b < e)
    {
        tmp = *b;
        *b++ = *e;
        *e-- = tmp;
    }
}

char* reverseWords(char *s)
{
    if (!s || !*(s + 1)) return s;

    char del[] = " ;_";
    char *t = s;
    char *ts = s;
    char *begin = NULL;

    while (*t)
    {
        if (!begin && !isWordDel(*t, del))
        {
            begin = t;
        }

        if (begin && (*(t + 1) == '\0' || isWordDel(*(t + 1), del)))
        {
            reverse(begin, t);
            begin = NULL;
        }

        t++;
    }

    reverse(ts, t - 1);
    return s;
}

//int main()
//{
//    char s[] = "hello world";
//    cout << s << endl;
//    char *res = reverseWords(s);
//    cout << res << endl;
//    cout << "Complete!!" << endl;
//}