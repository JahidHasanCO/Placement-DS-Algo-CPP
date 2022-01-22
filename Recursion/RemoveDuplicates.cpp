#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(char s[], int size)
{

    if (size <= 1)
    {
        return;
    }

    removeDuplicates(s + 1, size - 1);

    if (s[0] == s[1])
    {
        // remove 1st char
        int i = 0;
        for (; i < size; i++)
        {
            s[i] = s[i+1];
        }
        s[i] = s[i+1];
    }
    return;
}

int main()
{
    char s[] = "AABSSSSDEEAD";
    removeDuplicates(s, 12);
    cout << s << endl;
    return 0;
}
