#include <stdio.h>

#define SIZE 3

// Função para imprimir o tabuleiro
void printBoard(int board[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (board[i][j] == -1)
            {
                printf("X ");
            }
            else if (board[i][j] == 1)
            {
                printf("O ");
            }
            else
            {
                printf("_ ");
            }
        }
        printf("\n");
    }
}

// Função para verificar se uma linha, coluna ou diagonal tem todas as mesmas peças
int checkLine(int line[SIZE])
{
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += line[i];
    }
    if (sum == -SIZE || sum == SIZE)
    {
        return 1;
    }
    return 0;
}

// Função para verificar se houve vitória em uma linha, coluna ou diagonal
int checkWin(int board[SIZE][SIZE])
{
    int line[SIZE];

    // Verificar linhas
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            line[j] = board[i][j];
        }
        if (checkLine(line))
        {
            return 1;
        }
    }

    // Verificar colunas
    for (int j = 0; j < SIZE; j++)
    {
        for (int i = 0; i < SIZE; i++)
        {
            line[i] = board[i][j];
        }
        if (checkLine(line))
        {
            return 1;
        }
    }

    // Verificar diagonal principal
    for (int i = 0; i < SIZE; i++)
    {
        line[i] = board[i][i];
    }
    if (checkLine(line))
    {
        return 1;
    }

    // Verificar diagonal secundária
    for (int i = 0; i < SIZE; i++)
    {
        line[i] = board[i][SIZE - 1 - i];
    }
    if (checkLine(line))
    {
        return 1;
    }

    return 0;
}

// Função para verificar se o tabuleiro está cheio
int isBoardFull(int board[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (board[i][j] == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

// Função para determinar a pontuação de uma determinada jogada
int getScore(int board[SIZE][SIZE], int player)
{
    if (checkWin(board))
    {
        return player;
    }
    else if (isBoardFull(board))
    {
        return 0;
    }

    int bestScore;
    if (player == -1)
    {
        bestScore = -2;
    }
    else
    {
        bestScore = 2;
    }

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (board[i][j] == 0)
            {
                board[i][j] = player;
                int score = getScore(board, -player);
                board[i][j] = 0;

                if ((player == -1 && score > bestScore) || (player == 1 && score < bestScore))
                {
                    bestScore = score;
                }
            }
        }
    }

    return bestScore;
}

// Função para determinar a próxima jogada
void getNextMove(int board[SIZE][SIZE])
{
    int bestScore = -2;
    int bestMove[2] = {-1, -1};

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (board[i][j] == 0)
            {
                board[i][j] = -1;
                int score = getScore(board, 1);
                board[i][j] = 0;

                if (score > bestScore)
                {
                    bestScore = score;
                    bestMove[0] = i;
                    bestMove[1] = j;
                }
            }
        }
    }

    printf("Próxima jogada: (%d, %d)\n", bestMove[0], bestMove[1]);
}

int main()
{
    int board[SIZE][SIZE] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}};

    // Exemplo de tabuleiro de jogo da velha
    // -1 representa uma peça minha (X)
    // 1 representa uma peça do oponente (O)
    // 0 representa uma casa vazia

    // board[0][0] = -1;
    // board[0][2] = 1;
    // board[1][1] = -1;
    // board[1][2] = 1;
    // board[2][0] = -1;

    printBoard(board);

    getNextMove(board);

    return 0;
}