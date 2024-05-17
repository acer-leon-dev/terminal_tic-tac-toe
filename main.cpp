#include <iostream>
#include "functions.h"


int main()
{
    std::cout << "Welcome to Tic Tac Toe" << std::endl;
    if (bot)
        std::cout << "Player vs. Bot\n" << std::endl;
    else
        std::cout << "PvP\n" << std::endl;

    print_board();
    while (true) {
        // Player one's turn
        std::cout << "----------------------------------------------------" << std::endl;
        number_input(playerone, playertwo);
        print_board();
        if (check_win(playerone))
            if (check_replay()) {
                print_board();
                continue;
            }
            else
                break;

        // Player two's turn
        std::cout << "----------------------------------------------------" << std::endl;
        if (bot)
            bot_input(playertwo, playerone);
        else
            number_input(playertwo, playerone);
        print_board();
        if (check_win(playertwo))
            if (check_replay()) {
                print_board();
                continue;
            }
            else
                break;
    }
}