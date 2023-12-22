/* 58. Length of Last Word
Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.

Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.
*/

#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string s = "Hello    three spaces   ";

    // Allocate a char array with space for the string characters + 1 for null-terminator
    char charArray[s.length() + 1];

    // Copy string characters to char array
    strcpy(charArray, s.c_str());

    // Print the char array
    std::cout << "Char array: ";
    for (size_t i = 0; i < strlen(charArray); ++i) {
        std::cout << charArray[i];
    }
    std::cout << std::endl;

    return 0;
}
