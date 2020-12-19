// Josh Williams
// 3/31/2020
// CSC - 234 - 81A
// Chapter 12 - Programming Challenge 1 - Word Counter

// Write a function that accepts a C-string as an argument and retuns the number of words in the string.

#include <iostream>
#include <cstring>

using namespace std;

// Function delcarations
int parseString(char str[]);

int main()
{
    // Variables
    const int LENGTH = 255;
    char input[LENGTH];
    int words;

    // Welcome message.
    cout << "Word Counter!\n\n";

    // Gather user input.
    cout << "Enter sentence less than " << LENGTH - 1 << " characters: ";
    cin.getline(input, LENGTH);

    // Pass input to the custom written function to return the number of words in the string.
    words = parseString(input);

    // Report the number of words counted.
    cout << "\nThere were " << words << " words in your entry.\n";
}

int parseString(char str[]) {
    // Returns the number of words in a C-string by counting the spaces and adding 1.

    // Variables
    int count = 0;
    int i = 0;
    
    // Loop through the characters until we hit the null or \0
    while (str[i] != '\0') {
        // Add to word counter if there is a space.
        if (str[i] == ' ') {
            count++;
        }
        i++;
    }
    // count + 1 will account for the first word in the sentence.
    return count + 1;
}