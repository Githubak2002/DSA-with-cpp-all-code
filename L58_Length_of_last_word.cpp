/* 58. Length of Last Word
Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.

Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.
*/

#include <iostream>
#include <cstring>
using namespace std;
size_t charArrayLength(const char* arr) {
    size_t length = 0;
    while (arr[length] != '\0') {
        length++;
    }
    return length;
}
int main() {
    string s = "Hello   three   ";

    char charArray[s.length() + 1];

    // Copy string characters to char array
    strcpy(charArray, s.c_str());
    size_t l = charArrayLength(charArray);  
    size_t length = strlen(charArray);
 
    cout << "Char array: " << charArray << endl;
    // cout << "Char array[] = " << charArray[20] << endl;
    cout << "Char array[] = " << length << endl;

    return 0;

    return 0;
}
