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

int lengthOfLastWord(string s) {
    char charArray[s.length() + 1];
    strcpy(charArray, s.c_str());
    // size_t l = charArrayLength(charArray);  
    size_t length = strlen(charArray);
    int letters = 0;
    for (int i = length-1; i >= 0; i--){
        if(charArray[i] == ' '){
            continue;
        }
        if(charArray[i] != ' '){
            cout<<charArray[i]<<endl;
            ++letters;
            if(charArray[i-1] == ' ')
                return letters; 
        }
    }
    return letters;
}


int lettersFun (char a[], int length){
    int letters = 0;
    for (int i = length-1; i >= 0; i--){
        if(a[i] == ' '){
            continue;
        }
        if(a[i] != ' '){
            cout<<a[i]<<endl;
            ++letters;
            if(a[i-1] == ' ')
                return letters; 
        }
    }
    return letters;
}

int main() {
    string s = "   fine";
    cout<<"No of letters are = "<<lengthOfLastWord(s);


    /*
    char charArray[s.length() + 1];

    // Copy string characters to char array
    strcpy(charArray, s.c_str());
    size_t l = charArrayLength(charArray);  
    size_t length = strlen(charArray);
 
    cout << "Char array: " << charArray << endl;
    // cout << "Char array[] = " << charArray[20] << endl;
    cout << "Length of CharArr = " << length << endl;

    cout<<"No of letters are = "<<lettersFun(charArray,length);

    */
    return 0;
}
