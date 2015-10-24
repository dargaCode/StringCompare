#include <stdio.h>
#include <cs50.h>
#include <string.h>

// function prototypes
bool compare(char* a, char* b);

int main(int argc, char* argv[])
{
    // "char*" = "string"
    printf("\nEnter string A: ");
    char* a = GetString();
    printf("Enter string B: ");
    char* b = GetString();
    printf("\n");

    bool match = compare(a, b);
    printf("\n");
    printf(match ? "Strings match!\n" :
        "Strings do not match!\n");
    printf("\n");
}

bool compare(char* a, char* b)
{
    int len_a = strlen(a);
    int len_b = strlen(b);
    bool len_match = len_a == len_b;

    printf("A length: %i, B length: %i - ", len_a, len_b);
    printf(len_match ? "Match\n" : "NO MATCH!\n");

    if (!len_match)
    {
        return false;
    }

    printf("\n");
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
