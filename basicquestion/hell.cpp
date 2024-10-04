// #include <iostream>
// using namespace std;
// int main() {
//     cout << "Size of int: " << sizeof(int) << " bytes" << endl;
//     cout << "Size of char: " << sizeof(char) << " bytes" << endl;
//     cout << "Size of float: " << sizeof(float) << " bytes" << endl;
//     cout << "Size of double: " << sizeof(double) << " bytes" << endl;

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

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string sentence;
//     cout << "Enter the sentence " << endl;
//     getline(cin, sentence);
//     stringstream vai(sentence);
//     string word;

//     while (vai >> word)
//     {
//         cout << word << endl;
//     }
//     return 0;
// }

// sum of n terms

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//      int arr[n];
//      int sum =0;
//      for(int i=0;i<n;i++){
//         cin>>arr[i];
//         sum+=arr[i];
//      }
//      cout<<sum;
// }

// decimal to binary

// #include <iostream>
// using namespace std;
// int main() {
//     int decimalNum;
//     cout << "Enter a decimal number: ";
//     cin >> decimalNum;

//     int binaryNum[32]; // Array to store the binary representation, assuming 32-bit integer
//     int i = 0;

//     while (decimalNum > 0) {
//         binaryNum[i] = decimalNum % 2;
//         decimalNum = decimalNum / 2;
//         i++;
//     }

//     cout << "Binary representation: ";
//     for (int j = i - 1; j >= 0; j--) {
//         cout << binaryNum[j];
//     }

//     return 0;
// }

// reverse a number

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int sum = 0;
//     while (n > 0)
//     {
//         int last = n % 10;
//         n = n / 10;
//         sum = sum * 10 + last;
//     }
//     cout << sum;
// }

// GCD

// #include<bits/stdc++.h>
// using namespace std;
// int gcd(int a,int b){
//     if(b==0){
//         return a;
//     }
//     else{
//          return gcd(b,a%b);
//     }
// }
// int main()
// {
//      int a,b;
//      cin>>a;
//      cin>>b;
//      cout<<"the GCD of a and b is: "<<gcd(a,b);
// }

// Inheritance (Reusability)
// Inheritance is a process of obtaining the data members and methods
// from one class to another class, plus can have its own is known as
// inheritance.

// Polymorphism
// The same entity (function or object) behaves differently in different
// scenarios.

// Abstraction
// Hiding lower-level details and exposing only the essential and
// relevant details to the users

// Encapsulation
// Wrapping data and methods in a single unit to prevents
// un-authorized access from outside class.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    cout << "Before swap" << endl;
    cout << a << " " << b << endl;
    // int temp;
    // temp = a;
    // a=b;
    // b = temp;
    swap(a,b);
    cout << "After swap" << endl;
    cout << a << " " << b << endl;
}