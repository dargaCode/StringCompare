#include <stdio.h>
#include <cs50.h>
#include <string.h>

// function prototypes
bool compare(char* a, char* b);

int main(int argc, char* argv[])
{
    // "char*" = "string"
    printf("Enter string a: ");
    char* a = GetString();
    printf("Enter string b: ");
    char* b = GetString();

    bool match = compare(a, b);
    printf("Do strings match? ");
    printf(match ? "Yes!\n" : "No!\n");
}

bool compare(char* a, char* b)
{
    // time for some pointer math
    //a* = 'z';
    
    printf("%i \n", strlen(a));

    for (int i = 0; i < strlen(a); i++)
    {
        char a_char = *(a + i);
        char b_char = *(b + i);
        bool char_match = a_char == b_char;

        printf("Char #%i: %c, %c - ", i, a_char, b_char);
        printf(char_match ? "Match\n" : "NO MATCH!\n");

        if (!char_match)
        {
            return false;
        }
    }
    return true;
}
