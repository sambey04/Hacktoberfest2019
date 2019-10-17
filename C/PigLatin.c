#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>

void getInput(char * usrInput){
	char input[98];
	int numInput = 0;
	printf("Please enter the string you would like to translate or \"ctrl-d\".\n");
    fgets(input,98,stdin);
    input[strlen(input)-1] = '\0';
    strcpy(usrInput,input);
}

void translate(char * usrInput){
    char * token;
    char * temp = usrInput;
    token = strtok(temp," ");
    while(token != NULL){
	if (token[0] == 'a' || token[0] == 'e' || token[0] == 'i' || token[0] == 'o' || token[0] == 'u' || token[0] == 'y') {
    	printf("%sway", token);
    } else {
	    for (int i = 1; i < strlen(token); ++i) {
	        printf("%c", token[i]);
	    }
	    	printf("%cay ", token[0]);
    	}
        token = strtok(NULL," ");
    }
    printf("\n");
}

/* Gets a string from the user and converts it to pigLatin */
int main(int argc, char const *argv[]) {
	char * usrInput = calloc(99,sizeof(char));
    while(1) {
    	getInput(usrInput);
	    if (strlen(usrInput) == 0 || usrInput[1] == EOF) {
	    	break;
	    } else {
            translate(usrInput);
	    }
    }
	free(usrInput);
	printf("Bye!\n");
	return (0);
}
