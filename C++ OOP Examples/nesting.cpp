// Nesting of member functions to check if the entered number is a binary number or not and to find the ones compliment of the binary number

#include <iostream>
using namespace std;

class binary
{
    string s;

public:
    void read();
    void chk_bin();
    void ones_compliment();
    void display();
};

void binary::read() // defining the read function outside the class it is already declared in the class
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary::chk_bin() // defining the chk_bin function outside the class it is already declared in the class
{
    for (int i = 0; i < s.length(); i++) // loop is used to check each character of the string
    {
        if (s.at(i) != '0' && s.at(i) != '1') // if the string is not 0 or 1 then it is not a binary number , s.at(i) is used to access the character at the ith index of the string
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
    cout << "Correct binary format" << endl;
}

void binary::ones_compliment() // defining the ones_compliment function outside the class it is already declared in the class
{
    void chk_bin(); // calling the chk_bin function to check if the entered number is a binary number or not (nested function call)
    for (int i = 0; i < s.length(); i++) // loop is used to check each character of the string
    {
        if (s.at(i) == '0') // if the character is 0 then change it to 1
        {
            s.at(i) = '1';
        }
        else // if the character is 1 then change it to 0
        {
            s.at(i) = '0';
        }
    }
    
}

void binary::display() // defining the display function outside the class it is already declared in the class
{   
    cout << "Displaying the binary number" << endl;
    for(int i = 0; i < s.length(); i++) // loop is used to display each character of the string
    {
        cout << s.at(i); // s.at(i) is used to access the character at the ith index of the string
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
  //  b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}