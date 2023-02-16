#include <iostream>
#include <string> 
#include "functions.hpp"
int main() {

std::string word = "broccoli";
std::string text;

std::cout << "Enter text: \n";
std::cin >> text;

bleep(word, text); 
std::cout << text; 



}