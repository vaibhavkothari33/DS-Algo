// #include <iostream>
// using namespace std;
// int main() {
//     cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
//     cout << "Size of char: " << sizeof(char) << " bytes" << std::endl;
//     cout << "Size of float: " << sizeof(float) << " bytes" << std::endl;
//     cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <sstream>
// using namespace std;
// int main() {
//     string sentence;

//     // Input a sentence from the user
//     cout << "Enter a sentence: ";
//     getline(cin, sentence);

//     //  string stream to split the sentence into words
//     stringstream ss(sentence);
//     string word;

//     // Output each word of the sentence in a separate line
//     while (ss >> word) {
//         cout << word << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sentence;
    cout << "Enter the sentence " << endl;
    getline(cin, sentence);
    stringstream vai(sentence);
    string word;

    while (vai >> word)
    {
        cout << word << endl;
    }
    return 0;
}