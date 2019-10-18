#include <stdio.h>

char* reverse (char *word);

int main(int argc, char* argv[]) 
{ 
  char word[] = "Happy Birthday!";
  printf("%s\n", word);
  reverse(word);
  printf("%s\n", word);
  printf("%s\n", reverse(word));
  printf("%s\n", word); 
  return 0; 
} 
char* reverse (char *word){
    int len = 0;
    int i;
    char save;
    
    while(word[len]!='\0')  
    {
        len++;
    } 
    
    for (i=0; i<=len/2; i++)
    { 
      save = word[i];
      word[i] = word[len-1-i];
      word[len-1-i] = save;
    }
    return word;
}
