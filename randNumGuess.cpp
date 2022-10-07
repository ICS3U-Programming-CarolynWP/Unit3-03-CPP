// Copyright Carolyn
// Created by: Carolyn Webster Pless
// Created on: 22/10/06
// Takes user input of a guessed number between 0 and 9 with
// the correct answer being randomized.

#include <iostream>

#include <random>

int main() {
    // Variables for the correct number and guess
    int correctNumber;
    int guess;

    // creating a random number
    std::random_device rseed;

    std::mt19937 rgen(rseed());

    std::uniform_int_distribution<int> idist(0, 9);

    // random number variable
    correctNumber = idist(rgen);

    // title
    std::cout << "Guess a number between 0 and 9!\n";

    // user input for the guessed number
    std::cout << "Enter your guessed number: ";
    std::cin >> guess;

    if (guess == correctNumber) {
        std::cout << "You guessed the number correctly!";
    } else {
        std::cout << "Sorry, the correct number was " << correctNumber;
    }
}
