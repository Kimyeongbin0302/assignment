#include <iostream>
#include <cstdlib>
#include <ctime>
#include <ncurses.h>

void playGame(const char* welcomeMsg, const char* promptMsg, const char* smallerMsg, const char* largerMsg, const char* correctMsg, const char* exitMsg, const char* quitMsg) {
    std::srand(std::time(0)); // 시드 초기화
    int number = std::rand() % 100 + 1; // 1부터 100 사이의 랜덤 숫자 생성
    int guess = 0;
    int attempts = 0;
    bool quit = false;

    initscr(); // ncurses 초기화
    printw("%s\n", welcomeMsg);

    while (guess != number && !quit) {
        printw("%s", promptMsg);
        refresh();
        char input[10];
        getstr(input);
        if (input[0] == 'q' || input[0] == 'Q') {
            quit = true;
            printw("%s\n", quitMsg);
            break;
        } else {
            guess = std::atoi(input);
            attempts++;

            if (guess > number) {
                printw("%s\n", smallerMsg);
            } else if (guess < number) {
                printw("%s\n", largerMsg);
            } else {
                printw("%s %d\n", correctMsg, attempts);
            }
            refresh();
        }
    }

    printw("%s", exitMsg);
    refresh();
    getch(); // 사용자 입력 대기
    endwin(); // ncurses 종료
}

int main() {
    playGame("Welcome to the Number Guessing Game!",
             "Guess a number between 1 and 100: ",
             "The number is smaller.",
             "The number is larger.",
             "Correct! Number of attempts:",
             "Press any key to exit.",
             "Game exited. Press any key to exit.");

    return 0;
}