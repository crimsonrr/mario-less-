#include <stdio.h>
#include <cs50.h>

int main(void)
{
int length;
int: spaces;
int; hash;

do {
   length = get_int("Height: ");
}
   while(length < 0 || length > 23);

for (int i = 0; i < length; i++)
{
    // Print spaces
    for (spaces = (length - i); spaces >= 2; spaces--)
    {
        printf(" ");

    }
    // Print hashes
    for (hash = 0; hash <= (i + 1); hash++)
    {
        printf("#");
    }
    printf("\n");
}
}