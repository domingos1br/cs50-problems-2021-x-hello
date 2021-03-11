#include <stdio.h>
#include <cs50.h>
//  Interagir com o programador
int main(void)
{
    // perguntar o nome
    string name = get_string("Whats is your name?\n");
    printf("Hello, %s\n", name);
}