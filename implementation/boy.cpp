#include <iostream>
#include <set>
using namespace std;
int main() {
    string inputString;
    cin >> inputString;

    set<char> uniqueCharacters;

    // Iterate through the string and add each character to the set.
    for (char ch : inputString) {
        uniqueCharacters.insert(ch);
    }

   

    // Count the number of unique characters in the set
    int Count = uniqueCharacters.size();

    if(Count%2==0)
    {
        cout<<"CHAT WITH HER!";
    }

    else
    cout<<"IGNORE HIM!";
    

    return 0;
}
