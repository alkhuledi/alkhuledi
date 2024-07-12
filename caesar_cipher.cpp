#include <iostream>
#include <cctype> // For toupper()

using namespace std;

void Convertfromlowercasetouppercaseletters()
{
    int key=12;
    char message[]=" ";
    for(int i=0;message[i]!='\0';i++)
    {
        message[i]= toupper(message[i]);
         
    }
    cout<<"Uppercase :"<<message;
   


}


int main() {
    int key = 12;
    char message[] = "iloveinu"; // Example message

    // Convert to uppercase
    for (int i = 0; message[i] != '\0'; i++) {
        message[i] = toupper(message[i]);
    }
    cout << "Uppercase: " << message << endl;

    // Caesar Cipher with proper character shifting
    for (int i = 0; message[i] != '\0'; i++) {
        char shiftedChar = message[i];
        if (isalpha(shiftedChar)) {  // Check if it's an alphabet
            shiftedChar = (shiftedChar - 'A' + key) % 26 + 'A';  // Shift by key
        }
        message[i] = shiftedChar;
    }
    cout << "Caesar Cipher (shift by " << key << "): " << message << endl;

    Convertfromlowercasetouppercaseletters();
    signed int age;
   

    return 0;
    
}
