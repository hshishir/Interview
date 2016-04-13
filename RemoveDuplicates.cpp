#include <iostream>
using namespace std;

#define N 256
char* removeD_additionalBuffer(char *s)
{
    if (!s || !*(s + 1)) return s;

    int *map = (int*)calloc(sizeof(int), N);

    char *res = s;
    char *t = s;
    int i = 0, j = 0;

    while (t[i])
    {
        if (map[t[i]] == 0)
        {
            res[j] = t[i];
            j++;
        }

        map[t[i]]++;

        i++;
    }

    res[j] = '\0';
    return res;
}

char* removeD_additionalBuffer1(char *s)
{
    if (!s || !*(s + 1)) return s;

    int *map = (int*)calloc(sizeof(int), N);

    char *res = s;
    char *t = s;

    while (*t)
    {
        if (map[*t] == 0)
        {
            *res++ = *t;
        }

        map[*t]++;
        t++;
    }

    *res = '\0';
    return s;
}

char* removeD_noBuffer(char *s)
{
    if (!s || !*(s + 1)) return s;
    int i = 0, t = 1;
    int len = strlen(s);

    for (i = 1; i < len; i++)
    {
        int j;
        for (j = 0;j < t; j++)
        {
            if (s[i] == s[j]) break;
        }

        if (j == t)
        {
            s[t] = s[i];
            t++;
        }
    }

    s[t] = '\0';
    return s;
}

//int main()
//{
//    // abcabf => abcf
//    char s[] = "abcabf";
//    //char *r = removeD_additionalBuffer1(s);
//    char *r = removeD_noBuffer(s);
//    cout << r << endl;
//    cout << "Complete!!" << endl;
//}