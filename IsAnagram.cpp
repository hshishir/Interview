#include <iostream>
using namespace std;

#define N 256
bool isAnagram(char *s1, char *s2)
{
    if (!s1 || !s2) return false;

    int l1 = strlen(s1);
    int l2 = strlen(s2);

    if (l1 != l2) return false;

    int *map = (int*)calloc(sizeof(int), N);
    
    while (*s1)
    {
        map[*s1]++;
        s1++;
    }

    while (*s2)
    {
        map[*s2]--;
        if (map[*s2] < 0)
        {
            return false;
        }

        s2++;
    }

    return true;
}

//int main()
//{
//    char s1[] = "abcba";
//    char s2[] = "aabbc";
//
//    bool isA = isAnagram(s1, s2);
//
//    cout << "Is anagram: " << isA << endl;
//    cout << "Complete!!" << endl;
//}