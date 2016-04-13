#include <iostream>
using namespace std;

void swap(char *a, char *b)
{
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

void permutation(char *s, int si, int ei)
{
    int i;
    if (si == ei)
    {
        printf("%s\n", s);
    }
    else
    {
        for (i = si; i <= ei; i++)
        {
            swap(s + si, s + i);
            permutation(s, si + 1, ei);
            swap(s + si, s + i);
        }
    }
}

//int main()
//{
//    char s[] = "abc";
//    int len = strlen(s);
//    permutation(s, 0, len - 1);
//    cout << "Complete!!" << endl;
//}