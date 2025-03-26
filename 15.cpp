#include <iostream>
// Write a program to check if a given character is a vowel or consonant.

using namespace std;
int main()
{
    cout << "***Let's check if a given character is a vowel or consonant. ***\n";
    char ch;
    for(int i=1;i<10;i++){
    cout <<i++<< " Enter a character: ";
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << "The character is a vowel.\n";
    }
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout << "The character is consonants.\n";
    }
    else{
        cout << "Invalid input.\n";
    }}

    return 0;
}