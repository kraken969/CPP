#include <iostream>

using namespace std;

// ANSI escape codes for text formatting
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define GRAY    "\033[90m"
#define PURPLE  "\033[35m"
#define PINK    "\033[95m"
#define ORANGE  "\033[33m"
#define BLUE    "\033[34m"
#define YELLOW  "\033[33m"
#define BOLD    "\033[1m"
#define ITALIC  "\033[3m"
#define HIGHLIGHT  "\033[7m"

int main() {
    cout << RED << "Red text" << RESET << endl;
    cout << GREEN << "Green text" << RESET << endl;
    cout << GRAY << "Gray text" << RESET << endl;
    cout << PURPLE << "Purple text" << RESET << endl;
    cout << PINK << "Pink text" << RESET << endl;
    cout << ORANGE << "Orange text" << RESET << endl;
    cout << BLUE << "Blue text" << RESET << endl;
    cout << YELLOW << "Yellow text" << RESET << endl;
    cout << BOLD << "Bold text" << RESET << endl;
    cout << ITALIC << "Italic text" << RESET << endl;
    cout << HIGHLIGHT << "Highlighted text" << RESET << endl;
    
    return 0;
}
