#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("What's your name? ");
    printf("Hello, %s\n", answer);
}
/// clang -lcs50 -o hello hello.c