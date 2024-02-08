#include <iostream>

#define BOARD_SIZE 3

void dispboard(char board[BOARD_SIZE][BOARD_SIZE]);
void markCell(char board[BOARD_SIZE][BOARD_SIZE], int row, int col, char symbol);
int checkWin(char board[BOARD_SIZE][BOARD_SIZE]);

int main()
{
    char matrix[BOARD_SIZE][BOARD_SIZE] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}};
    int currentPlayer = 1;

    std::cout << "Tic-Tac-Toe Game\nPlayer 1: X | Player 2: O\n\n";
    dispboard(matrix);

    while (1)
    {
        int row = 0;
        int col = 0;
        int win = 0;
        char symbol = ' ';
        std::cout << "Player " << currentPlayer << ", enter row and column (1-3) for your move: ";
        std::cin >> row >> col;
        std::cout << "Row: " << row << "\tCol: " << col << "\n";

        if (currentPlayer == 1)
        {

            symbol = 'X';
            currentPlayer = 2;
        }
        else
        {
            symbol = 'O';
            currentPlayer = 1;
        }

        markCell(matrix, row - 1, col - 1, symbol);
        dispboard(matrix);
        win = checkWin(matrix);
        if (win == 1)
        {
            std::cout << "Win!";
            break;
        }
    }

    return 0;
}

void dispboard(char board[BOARD_SIZE][BOARD_SIZE])
{
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            std::cout << *(*(board + i) + j) << "\t";
        }
        std::cout << "\n";
    }
}

void markCell(char board[BOARD_SIZE][BOARD_SIZE], int row, int col, char symbol)
{
    *(*(board + row) + col) = symbol;
}

int checkWin(char board[BOARD_SIZE][BOARD_SIZE])
{
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        if ((*(*(board + i) + 0)) == (*(*(board + i) + 1)) && (*(*(board + i) + 1)) == (*(*(board + i) + 2)))
        {
            return 1;
        }
    }
    for (int j = 0; j < BOARD_SIZE; j++)
    {
        if ((*(*(board + 0) + j)) == (*(*(board + 1) + j)) && (*(*(board + 1) + j)) == (*(*(board + 2) + j)))
        {
            return 1;
        }
    }

    if (((*(*(board + 0) + 0)) == (*(*(board + 1) + 1)) && (*(*(board + 1) + 1)) == (*(*(board + 2) + 2))) ||
        ((*(*(board + 2) + 0)) == (*(*(board + 1) + 1)) && (*(*(board + 1) + 1)) == (*(*(board + 0) + 2))))
    {
        return 1;
    }

    return 0;
}
