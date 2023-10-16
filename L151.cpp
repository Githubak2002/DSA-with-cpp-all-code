/*151. Reverse Words in a String -- [first learn about string and its functions]
Example 1:

Input: s = "a good   example"
Output: "example good a"

*/


// charArray → string -- str(charArray);
// string → charArray -- str.c_str();
// const char* charArray → array that ends with '\0'
#include<iostream>
#include<vector>
#include<string>
using namespace std;

string reverseWords(string s) {
    const char* charArr = s.c_str();
    int length = 0;
    while (charArr[length] != '\0')
        length++;

    cout<<"Length of the char arr "<<length;

    int i = '\0',spaceIndex = 0;
    while (charArr[i] >= 0){
        if(charArr[i] != ' ')
            i--;
        else if(charArr[i] == ' '){}
            spaceIndex = i;
        

    }
    
    return "wait";
}

int main(){
    cout<<"Output string is "<<reverseWords("Hello");

    /*    string str1 = "First string!";
    const char* charArray1 = str1.c_str();   //str → char array
    cout << "String: " << str1 << endl;
    cout << "Char Array: " << charArray1 << endl;

    const char* charArray = "Character array";
    string str(charArray);                  // char array → str
    cout << "Char Array: " << charArray << endl;
    cout << "String: " << str << endl;
    cout<<"first char of char arr is = "<<charArray[0];
    */


    return 0;
}