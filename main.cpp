#include <array>
#include <iostream>
#include <stdexcept>

/// @brief This enum value holds the state of each cell in the game which could
/// be empty (denoted by NA), hold by player X (denoted by X), or hold by
/// player O (denoted by O).
enum class CellState { NA, X, O };

bool gameHasFinished(std::array<CellState, 9> *cell_states);
bool isValidMove(int move_no);
int findMyMove(std::array<CellState, 9> *cell_states);
int randint(int min, int max);

int main() {
    // Just for the start!
    std::array<CellState, 9> cell_states;

    while (!gameHasFinished(&cell_states)) {
        std::cout << "Your move: ";
        int user_move;
        std::cin >> user_move;

        if (isValidMove(user_move)) {
            cell_states[user_move] = CellState::X;
        }

        std::cout << "My move is: " << findMyMove(&cell_states) << std::endl;
    }

    return 0;
}

/// @brief This function detemines whether the current move is valid based on
/// whether it's in the [0, 8] range and whether the cell is not already
/// picked.
/// @param move_no
/// @param cell_states
/// @return
bool isValidMove(int move_no, std::array<CellState, 9> cell_states) {
    if (move_no >= 0 && move_no <= 8
        && cell_states[move_no] == CellState::NA) {
        return true;
    }

    return false;
}

int i = 0;

bool gameHasFinished(std::array<CellState, 9> *cell_states) {
    if (i < 4) {
        i += 1;
        return false;
    }

    return true;
}

int findMyMove(std::array<CellState, 9> *cell_states) {
    int my_move = randint(0, 9);

    while (!isValidMove(my_move)) {
        my_move = randint(0, 9);
    }

    cell_states[my_move] = CellState::O;
    return my_move;
}

int randint(int min, int max) {
    return min + std::rand() % (max - min + 1);
}