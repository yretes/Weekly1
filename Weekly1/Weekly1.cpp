#include <iostream>
#include <string>
#include <stdlib.h>

std::string Fullname = "";
char Initial;
int age;
char Confirmation;
bool yesno = false;
bool likesCoffee;
long phonenr = 00000000;
std::string Birthday = "";
int borderSize;
int task;
int favDrink;

// A function to check for answers for yes or no questions. Basically transforms Y/N to True/false.
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

// A function that counts how many characters there are in a string. This is to make the border in the end.
void stringCount() {
   borderSize = Fullname.length();
}

void Task1() {
    bool Phone = true;
    std::cout << "Welcome to task 1! Please enter your full name\n";
    std::cin.ignore();
    std::getline (std::cin, Fullname);
    std::cout << "Great to meet you, " << Fullname << "! Now, what is the initial of your first name?\n";
    std::cin.clear();
    std::cin >> Initial;
    std::cout << "Got it! Your name is " << Fullname << ", and your first initial is " << Initial << std::endl;
    std::cout << "so, " << Initial << ", How old are you?\n";
    std::cin.clear();
    std::cin >> age;
    if (age >= 20) {
        std::cout << "Excellent. You are " << age << " years old.\n";
    }
    else if (age < 13) {
        std::cout << "Oh my... You're very young.\n";
    }
    else if (age < 20) {
        std::cout << "So you're a teenager? Ok!\n";
    }
    std::cout << "Right, so, is it ok if I ask for your phone number? (y/n)\n";
    std::cin.clear();
    std::cin >> Confirmation;
    confirm();
    if (yesno == true) {
        std::cout << "Great! Please enter your phone number:\n";
        std::cin >> phonenr;
        std::cout << "Got it! Your phone number is " << phonenr << std::endl;
        Phone = true;
    }
    else {
        std::cout << "I'm sorry to hear that, but so be it.\n";
        Phone = false;
    }
    std::cout << "So, when is your birthday?\n";
    std::cin >> Birthday;
    stringCount();
    std::cout << "Okay, " << Initial << ", does this look right to you?\n";
    std::cout << std::string(borderSize, '-') + "-----------\n";
    std::cout << "| Name    |" << Fullname << std::endl;
    std::cout << "| Initial |" << Initial << std::endl;
    std::cout << "| Age     |" << age << std::endl;
    std::cout << "| Phone no|";
    if (Phone == false) {
        std::cout << "NOT RECIEVED\n";
    }
    else {
        std::cout << phonenr << std::endl;
    }

    std::cout << "| Birthday|" << Birthday << std::endl;
    std::cout << std::string(borderSize, '-') + "-----------\n";
    std::cout << "Is the information above correct? (y/n)" << std::endl;
    std::cin.clear();
    std::cin >> yesno;
    confirm();
    if (yesno == true) {
        std::cout << "Amazing. Thank you, " << Fullname << ". See you around! Bye!";
    }
    else {
        std::cout << "Oh dear. I'm sorry. Please restart the program, and we'll try again.";
    }
}

void Task2() {
    std::cin.clear();
    std::cout << "Hello. I am CoffeeTron 2000. Please input your name:\n";
    std::cin >> Fullname;
    std::cout << "Affirmative. Your name is " << Fullname << ". Please input your age.\n";
    std::cin >> age;
    std::cout << "Affirmative. You are " << age << " years old. Do you like coffee, " << Fullname << "? (y/n)\n";
    std::cin >> Confirmation;
    confirm();
    if (yesno == true) {
        std::cout << "It seems you like coffee.\n";
        likesCoffee = true;
    }
    if (yesno == false) {
        std::cout << "Oh you don't like coffee.\n";
        likesCoffee = false;
    }
    std::cout << "\n \nYour name is " << Fullname << "\n \n You are " << age << " years old. \n \n";
    if (likesCoffee == true) {
        std::cout << "Seems you like coffee.\n";
        }
    if (likesCoffee == false) {
        std::cout << "Seems you don't like coffee... \n \n Please leave. \n \n";
    }
}

void Task3() {
    std::cout << "Hi there, how old are you?\n";
    std::cin >> age;
    if (age < 20) {
        std::cout << "You are young.\n";
    }
    else if (age < 40) {
        std::cout << "You are a grown up.\n";
    }
    else if (age < 59) {
        std::cout << "You are old.\n";
    }
    else if (age > 59) {
        std::cout << "You are REALLY old.\n";
    }
}

void Task4() {
    std::cin.clear();
    std::cout << "Hey man, could I ask you what your favourite drink is? \n 1. Coffee \n 2. Tea \n 3. Coca Cola \n\n Select between 1 to 3\n";
    std::cin >> favDrink;
    if (favDrink == 1) {
        std::cout << "Coffee is delicious.\n";
    }
    else if  (favDrink == 2) {
        std::cout << "Tea gives peace of mind.\n";
    }
    else if (favDrink == 3) {
        std::cout << "Coke will give you a white smile.\n";
    }
    else {
        std::cout << "Please select between 1 to 3.\n";
        Task4();
    }
}

void Task5() {
    std::cin.clear();
    int x;
    int y;
    int xCounter = 0;
    int yCounter = 0;
    
    std::cout << "Please input X size(max 25):\n";
    std::cin >> x;
    if (x > 25) { 
        std::cout << "I'm sorry. I can't let you do that.\n \n";
        Task5();
    } 
    std::cout << "Please input Y size (max 25):\n";
    std::cin >> y;
    if (y > 25) {
        std::cout << "I'm sorry. I can't let you do that.\n \n";
        Task5();
    }
    while (yCounter < y) {
        while (xCounter <x) {
            std::cout << " [" << xCounter + 1 << "]";
            xCounter = xCounter + 1;
        }
        xCounter = 0;
        std::cout << std::endl;
        yCounter = yCounter + 1;
    }
    std::cout << std::endl;

    


}
int main()
{
    std::cout << "Welcome! This is the first weekly assignment. Please select which task you want to test:\n '1' Who are you? \n '2' Do you like coffee? \n";
    std::cout << " '3' Age checker \n '4' Drink preference \n '5' Grid \n";
    std::cin.clear();
    std::cin >> task;
    if (task == 1) {
        Task1();
    }
    if (task == 2) {
        Task2();
    }
    if (task == 3) {
        Task3();
    }
    if (task == 4) {
        Task4();
    }
    if (task == 5) {
        Task5();
    }

    std::cout << "\nThanks for testing that one, feel free to try another!\n";
}