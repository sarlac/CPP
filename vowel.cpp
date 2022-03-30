//program to check whether a character is Vowel or consonant

#include<iostream>
using namespace std;

int main()
{
char c;
int lowercase_vowel, uppercase_vowel;
cout<< "Enter an alphabet : ";
cin >> c;

//evaluates to 1 if varriable c is a lowercase_vowel
lowercase_vowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');

//evaluates to 1 if varriable c is a uppercase_vowel
lowercase_vowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');

//evaluates to 1 if c is a vowel
if(lowercase_vowel||uppercase_vowel)
    cout << c << "is a vowel";
else
    cout << c << "is a consonant";

return 0;
}
