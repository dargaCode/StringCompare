#include <stdio.h>
#include <cs50.h>
#include <string.h>

// function prototypes
bool compare(char* a, char* b);

int main(int argc, char* argv[])
{
    printf("Enter string a: ");
    char* a = GetString();
    printf("Enter string b: ");
    char* b = GetString();

    bool match = compare(a, b);
    printf("Do strings match? ");
    printf(match ? "True\n" : "False\n"); 
}

bool compare(char* a, char* b)
{
    // time for some pointer math
    //a* = 'z';
    
    printf("%i \n", strlen(a));
    
    for (int i = 0; i < strlen(a); i++)
    {
        printf("char %i: %c \n", i, *(a + i));
    }

    return false;
}
