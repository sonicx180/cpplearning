#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // alphabet array
    vector<char> alphabet = {};
    char input;
    int counter = 1;

    while (counter <= 26)
    {
        cout << "Enter a character of the alphabet (start from a ) one at a time" << endl;
        cin >> input;
        counter ++;
    }
}