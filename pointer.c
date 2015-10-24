#include <stdio.h>
#include <cs50.h>

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
    return false;
}
