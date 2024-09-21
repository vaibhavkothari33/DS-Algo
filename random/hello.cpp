#include <iostream>
using namespace std;

// Define the structure for a singly linked list node
struct Node {
    int coef;  // Coefficient
    int exp;   // Exponent
    Node* next;
};

// Function to create a new node
Node* createNode(int coef, int exp) {
    Node* newNode = new Node();
    newNode->coef = coef;
    newNode->exp = exp;
    newNode->next = nullptr;
    return newNode;
}

// Function to append a node to the linked list
void appendNode(Node*& head, int coef, int exp) {
    Node* newNode = createNode(coef, exp);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to print the polynomial
void printPolynomial(Node* head) {
    if (!head) {
        cout << "0" << endl;
        return;
    }
    bool isFirst = true;
    Node* temp = head;
    while (temp) {
        if (temp->coef != 0) {
            if (!isFirst && temp->coef > 0) cout << " + ";
            cout << temp->coef;
            if (temp->exp >= 0) {
                cout << "x";
                if (temp->exp >= 0) {
                    cout << "^" << temp->exp;
                }
            }
            isFirst = false;
        }
        temp = temp->next;
    }
    cout << endl;
}

// Function to compute the derivative of the polynomial
Node* computeDerivative(Node* head) {
    Node* derivativeHead = nullptr;
    Node* temp = head;
    while (temp) {
        if (temp->exp > 0) {
            appendNode(derivativeHead, temp->coef * temp->exp, temp->exp - 1);
        }
        temp = temp->next;
    }
    return derivativeHead;
}

// Function to check if the polynomial is a zero polynomial
bool isZeroPolynomial(Node* head) {
    Node* temp = head;
    while (temp) {
        if (temp->coef != 0) return false;
        temp = temp->next;
    }
    return true;
}

// Main function
int main() {
    int numTerms;
    cin >> numTerms;

    // If no terms are entered, output "Polynomial is empty"
    if (numTerms == 0) {
        cout << "Polynomial is empty" << endl;
        return 0;
    }

    Node* poly = nullptr;

    // Input the polynomial terms
    for (int i = 0; i < numTerms; ++i) {
        int coef, exp;
        cin >> coef >> exp;
        appendNode(poly, coef, exp);
    }

    // Check if it's a zero polynomial
    if (isZeroPolynomial(poly)) {
        cout << "0" << endl;
        cout << "0" << endl;
        return 0;
    }

    // Print the original polynomial
    printPolynomial(poly);

    // Compute and print the derivative
    Node* derivative = computeDerivative(poly);
    printPolynomial(derivative);

    return 0;
}
#include <iostream>
#include <map>
#include <vector>
using namespace std;

// Function to input polynomial and return it as a vector of pairs
vector<pair<int, int>> inputPolynomial(int numTerms) {
    vector<pair<int, int>> poly;
    for (int i = 0; i < numTerms; ++i) {
        int coef, exp;
        cin >> coef >> exp;
        poly.push_back({exp, coef});  // Save exponent and coefficient
    }
    return poly;
}

// Function to print polynomial
void printPolynomial(const vector<pair<int, int>>& poly) {
    if (poly.empty()) {
        cout << "0";
        return;
    }
    bool first = true;
    for (const auto& term : poly) {
        if (term.second == 0) continue;
        if (!first && term.second > 0) cout << " + ";
        cout << term.second << "x^" << term.first;
        first = false;
    }
    cout << endl;
}

// Check if a polynomial is a zero polynomial
bool isZeroPolynomial(const vector<pair<int, int>>& poly) {
    for (const auto& term : poly) {
        if (term.second != 0) return false;
    }
    return true;
}

// Compare two polynomials
bool arePolynomialsEquivalent(const vector<pair<int, int>>& poly1, const vector<pair<int, int>>& poly2) {
    map<int, int> polyMap1, polyMap2;
    for (const auto& term : poly1) polyMap1[term.first] += term.second;
    for (const auto& term : poly2) polyMap2[term.first] += term.second;
    return polyMap1 == polyMap2;
}

int main() {
    int numTerms1, numTerms2;
    cin >> numTerms1 >> numTerms2;

    // Input polynomials
   

    // Handling special cases
    if (numTerms1 == 0 && numTerms2 == 0) {
        cout << "Both polynomials are empty: Comparison not possible" << endl;
        return 0;
    }
    if (numTerms1 == 0) {
        cout << "1st polynomial is empty: Comparison not possible" << endl;
        return 0;
    }
    if (numTerms2 == 0) {
        cout << "2nd polynomial is empty: Comparison not possible" << endl;
        return 0;
    }
    vector<pair<int, int>> poly1 = inputPolynomial(numTerms1);
    vector<pair<int, int>> poly2 = inputPolynomial(numTerms2);

    // Check if either polynomial is zero
    bool zeroPoly1 = isZeroPolynomial(poly1);
    bool zeroPoly2 = isZeroPolynomial(poly2);

    if (zeroPoly1 && zeroPoly2) {
        cout << "Polynomial 1 is a zero polynomial" << endl;
        cout << "Polynomial 2 is a zero polynomial" << endl;
        cout << "Comparison not valid" << endl;
        return 0;
    }

    if (zeroPoly1) {
        cout << "Polynomial 1 is a zero polynomial." << endl;
        cout << "Polynomial 2: ";
        printPolynomial(poly2);
        cout << "Comparison not valid" << endl;
        return 0;
    }

    if (zeroPoly2) {
        cout << "Polynomial 1: ";
        printPolynomial(poly1);
        cout << "Polynomial 2 is a zero polynomial." << endl;
        cout << "Comparison not valid" << endl;
        return 0;
    }

    // Print the polynomials
    cout << "Polynomial 1: ";
    printPolynomial(poly1);
    cout << "Polynomial 2: ";
    printPolynomial(poly2);

    // Check if polynomials are equivalent
    if (arePolynomialsEquivalent(poly1, poly2)) {
        cout << "The polynomials are equivalent" << endl;
    } else {
        cout << "The polynomials are not equivalent" << endl;
    }

    return 0;
}