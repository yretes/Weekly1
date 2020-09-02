#include <iostream>
#include <string>

std::string Fullname = "";
char Initial;
int age;
char Confirmation;
bool yesno = false;
int phonenr = 00000000;
std::string Birthday = "";
int borderSize;

// A function that responds differently depending on what age group the user inputs.
void ageChecker() {
    if (age >= 20) {
        std::cout << "Excellent. You are " << age << " years old.\n";
    }
    else if (age < 13) {
        std::cout << "Oh my... You're very young.\n";
    }
    else {
        std::cout << "Aha, a teenager, eh? That's fine!\n";
    }
} 

// A function to check for answers for yes or no questions.
void confirm() {
    if (Confirmation == 'y') {
        yesno = true;
    }
    else if ( Confirmation == 'n') {
        yesno = false;
    }
    else {
        std::cout << "I'm sorry, I don't understand. Please answer my question (y/n)\n";
        std::cin >> Confirmation;
        confirm();
    }
}

// A function that counts how many characters there are in a string
void stringCount() {
   borderSize = Fullname.length();
}
int main()
{
    std::cout << "Welcome! Please enter your full name\n";
    std::getline (std::cin, Fullname);
    std::cout << "Great to meet you, " << Fullname << "! Now, what is the initial of your first name?\n";
    std::cin >> Initial;
    std::cout << "Got it! Your name is " << Fullname << ", and your first initial is " << Initial << std::endl;
    std::cout << "so, " << Initial << " How old are you?\n";
    std::cin >> age;
    ageChecker();
    std::cout << "Right, so, is it ok if I ask for your phone number? (y/n)\n";
    std::cin >> Confirmation;
    confirm();
    if (yesno == true) {
        std::cout << "Great! Please enter your phone number:\n";
        std::cin >> phonenr;
        std::cout << "Got it! Your phone number is " << phonenr << std::endl;
    }
    else {
        std::cout << "I'm sorry to hear that, but so be it.\n";
    }
    std::cout << "So, when is your birthday?\n";
    std::cin >> Birthday;
    stringCount();
    std::cout << "Okay, " << Initial << ", does this look right to you?\n";
    std::cout << std::string (borderSize, '-') + "-----------\n";
    std::cout << "| Name    |" << Fullname << "|" << std::endl;
    std::cout << "| Initial |" << Initial << "|" << std::endl;
    std::cout << "| Age     |" << age << "|" << std::endl;
    std::cout << "| Phone no|" << phonenr << "|" << std::endl;
    std::cout << "| Birthday|" << Birthday << "|" << std::endl;
    std::cout << std::string(borderSize, '-') + "-----------\n";
    std::cout << "Is the information above correct? (y/n)" << std::endl;
    confirm();
    if (yesno == true) {
        std::cout << "Amazing. Thank you, " << Fullname << ". See you around! Bye!";
    }
    else {
        std::cout << "Oh dear. I'm sorry. Please restart the program, and we'll try again.";
    }


}