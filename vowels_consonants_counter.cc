//Remember to always use protections kids
using namespace std;

#include <iostream>
//To show off the strlen swag
#include <cstring>

//Defining this beautiful constant up here
const int MAX_SIZE = 256;

//Function declaration is NICEEEEEEEE so I can put the actual function 
//wherever the FRICK I want!
void vowelsConsonantsCounter(const char input_text[MAX_SIZE], int& vowels_counter, int& consonants_counter);

int main() {
    //We don't know how many characters long the text is going to be
    //so we initialize the array with a lot of room using a fair size value 
    char input_text[MAX_SIZE];
    
    //Using getline because we are SWAG and like them whitespaces too
    cin.getline(input_text, MAX_SIZE);

    int vowels_count = 0, consonants_count = 0;

    //More explanatory than this... Simple and easy to read
    vowelsConsonantsCounter(input_text, vowels_count, consonants_count);

    //Formatting the bootiful information to show it back to the user
    cout << "Il testo contiene " << vowels_count << " vocali e ";
    cout << consonants_count << " consonanti\n";

    //Yay, end of code!
    return 0;
}

//DIVIDE ET IMPERA SEMPER
void vowelsConsonantsCounter(const char input_text[MAX_SIZE], int& vowels_counter, int& consonants_counter) {
    //Remember to use strlen() to optimize the function
    for (int i = 0; i < strlen(input_text); ++i) {
        //Check if the character is a letter
        if (isalpha(input_text[i])) {
            //Convert to uppercase so that we have to do fewer checks
            switch (toupper(input_text[i])) {
                //It's either a vowel
                case 'A': case 'E': case 'I': case 'O': case 'U': 
                    ++vowels_counter; break;
                //Or a consonant
                default: 
                    ++consonants_counter; break;
            }
        }
    }
}