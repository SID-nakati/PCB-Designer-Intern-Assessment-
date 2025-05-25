#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string : ";
    getline(cin, input); 

    istringstream iss(input);
    vector<string> words;
    string word;


    while (iss >> word) {
        words.push_back(word);
    }
    cout<<"Reversed String: ";
    for (int i = words.size() - 1; i >= 0; --i) {
        cout << words[i];
        if (i != 0) cout << " ";
    }

    cout << endl;
    return 0;
}
