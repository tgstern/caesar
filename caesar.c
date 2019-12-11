#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // check that only one additional argument is given to be the key
    if (argc != 2)
    {
        printf("Usage ./caesar key\n");
        return 1;
    }
    else
    {
        // check that argv[1] is made of only digits, else break
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
            {
                if (! isdigit(argv[1][i]))
                {
                    printf("Usage: ./caesar key\n");
                    return 1;
                    break;
                }
            }
            // store the key as an int
            int key = atoi(argv[1]);
        
            // get plaintext string from user
            string plain = get_string("plaintext: ");
            
            printf("ciphertext: ");
            // applies key shift to plain text
            for (int i = 0, n = strlen(plain); i < n; i++)
                {
                    // moves uppercase letters
                    if (plain[i] >= 65 && plain[i] <= 90)
                    {
                        printf("%c", 65 + ((plain[i] + key - 65) % 26));
                    }
                    // moves lowercase letters
                    else if (plain[i] >= 97 && plain[i] <= 122)
                    {
                        printf("%c", 97 + ((plain[i] + key - 97) % 26));
                    }
                    // prints additional characters
                    else
                    {
                        printf("%c", plain[i]);
                    }
                }
            printf("\n");
            }
    }
