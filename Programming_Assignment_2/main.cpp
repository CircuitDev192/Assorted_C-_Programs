/*
 *  Student Name: Matthew Ashmore
 *  Student NetID: wma92
 *  Compiler Used: CLion with WSL
 *  Program Description:
 *      This program will test strings for palindromes
 *      and return the result.
 */

#include <iostream>
#include <vector>
#include "Stack.h"
using std::string;
using std::vector;
using std::cout;
using std::endl;

bool isPalindrome(string);

int main() {

    //Declares test strings
    string test1 = "step on no pets";
    string test2 = "kayak";
    string test3 = "noon";  //Even palindrome
    string test4 = "nowordnobondrowon";
    string test5 = "123456789987654321";  //Even palindrome
    string test6 = "Hello World";
    string test7 = "Mississippi State University";
    string test8 = " ";  //Testing 1 character long entry
    string test9 = "Computer Engineering";
    string test10 = "Meadville";

    //Puts each string into a single vector
    vector<string> v{test1,test2,test3,test4,test5,test6,test7,test8,test9,test10};

    //Goes through each string in the vector and tests them for palindromes
    for(int i = 0; i < v.size(); i++)
    {
        bool b = isPalindrome(v[i]);
        cout << "The string, \"" << v[i] << (b ? "\", is a palindrome." : "\", is not a palindrome.") << endl;
    }

    return 0;
}

/*  Creates a stack, pushes the string onto it,
 *  then pops it off and compares the reversed string to the original,
 *  and returns the result.
 */
bool isPalindrome(string testStr)
{
    Stack palindrome;
    for(int i = 0; i < testStr.length(); i++)
    {
        palindrome.push(testStr[i]);
    }

    string reverseTestStr = palindrome.toString();

    return testStr == reverseTestStr;
}