#include <stdio.h>





/*****************************EFECTS***************************************/
#define NONE "\033[0m"
#define BOLD "\033[1m"
#define HALFBRIGHT "\033[2m"
#define UNDERSCORE "\033[4m"
#define BLINK "\033[5m"
#define REVERSE "\033[7m"

/*****************************COLORS***************************************/
#define C_BLACK "\033[30m"
#define C_RED "\033[31m"
#define C_GREEN "\033[32m"
#define C_YELLOW "\033[33m"
#define C_BLUE "\033[34m"
#define C_MAGENTA "\033[35m"
#define C_CYAN "\033[36m"
#define C_GRAY "\033[37m"

/***************************BACKGROUNDS************************************/
#define BG_BLACK "\033[40m"
#define BG_RED "\033[41m"
#define BG_GREEN "\033[42m"
#define BG_YELLOW "\033[43m"
#define BG_BLUE "\033[44m"
#define BG_MAGENTA "\033[45m"
#define BG_CYAN "\033[46m"
#define BG_GRAY "\033[47m"


#define ANSI_COLOR_RED "\x1b[31m" // cores em ANSI vermelho
#define ANSI_COLOR_YELLOW "\033[33m"
    int main()
{

    printf(ANSI_COLOR_RED "Hello world");

    printf(ANSI_COLOR_YELLOW "Hello world");
}
