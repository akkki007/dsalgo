// Length of Last Word
#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s)
{
    /*
    we need to first iterate over the full string and when there are space then
    put * to replace it and then we have to find the length of the last word using two pointer approach
    to find the last space and then come backwards with the first occurence of the letter and point the
    end pointer to it and start the start pointer from the end pointer to find starting of the word and
    when found return the difference between indexes
    */
    int i = s.length() - 1;

    // Skip trailing spaces
    while (i >= 0 && s[i] == ' ')
        i--;

    int len = 0;

    // Count last word
    while (i >= 0 && s[i] != ' ')
    {
        len++;
        i--;
    }

    return len;
}

int main()
{

    cout << lengthOfLastWord("  Akshay  moon   ");
}