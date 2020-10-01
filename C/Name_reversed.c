#include <stdio.h>
#include <string.h>

int main()
{
  char name[20];
  
  printf("Enter a name: ");
  scanf("%s",name);
  
  int i = strlen(name) - 1;
  
  printf("Hello %s! Your reversed name is ",name);
  
  for(i ; i >= 0; i--)
  {
    printf("%c",name[i]);
  }
  
  printf(".\n");
}
