// Implementation of Caesar cipher in c
#include <cs50.h>
#include <stdio.h>
#include<ctype.h>
#include<string.h>

int main(int argc, string argv[])
{
    if(argc==2)
    {
        for(int y=0;argv[1][y]!='\0';y++)
        {
            if(!isdigit(argv[1][y]))
               {
                   printf("Usage: ./caesar key\n");
                   return 1;
               }
            
        } 
        int k = atoi(argv[1]);
        if(k>26)
        {
            k = k%26;
        }
        string plaintext = get_string("plaintext: ");
        for(int x=0;plaintext[x]!='\0';x++)
        {
           if(isalpha(plaintext[x]))
           {
               plaintext[x] = plaintext[x] + k;
               if(!isalpha(plaintext[x]))
               {
                   plaintext[x]-= 26;
               }
           }
        }
        printf("ciphertext: %s\n",plaintext);
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
}
