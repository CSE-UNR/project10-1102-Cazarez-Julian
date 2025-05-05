// Julian Cazarez-Valdez
// Final Prject (Project 10)
// CS135

#define WORDFILE "mystery.txt"
#define ROW 7
#define COLUMN 10

#include <stdio.h>

char Cap2Low(Word);

int main(){

	FILE *MYWORD;
	char Word[100], Guess[100];
	int Attempts = 0;
	
	MYWORD = fopen(WORDFILE, "r");
	
	if(MYWORD == NULL){
		printf("Error! Cannot open File!\n");
	}
	
	else{
		fscanf(MYWORD, "%s", Word);
		fclose(MYWORD);
	}
	
	Cap2Low(Word);
	
	while (Attempts < ROW - 1 && !Win) {
        printf("Guess #%d, Enter your Guess: ", Attempts + 1);
        fgets(Guess, 100, stdin);
        
		int i = 0;
		while(Guess[i] != '\0'){
			if(Guess[i] == '\n'){
			Guess[i] = '\0';
			} 
		}
	for(int i = 0; i < COLUMN; i++){
		Guess	

return 0;
}

char Cap2Low(char Input[]){
int index = 0;

	while(Input[index] != '\0'){
		if(Input[index] >= 'A' && Input[index] <= 'Z'){
		(Input[index] = Input[index] + 32);
		}
		index++
	}
}
	
