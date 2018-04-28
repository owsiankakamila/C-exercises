#include<stdio.h>
#include<stdlib.h>

int main () {
	FILE* plik;
	char current_word[1000];
	char longest_word[1000];
	int longest_size=0;
	int current_size=0;
	int i;
	char c;
	if ((plik=fopen("tekst.txt", "r")) == NULL) {
		printf ("Plik nie istnieje\n");
		exit(1);
	}
	
	while (((c=getc(plik)) != EOF) && (current_size<1000)){
		if ((c==' ') || (c=='\n')){
			if (current_size > longest_size){
				longest_size = current_size;
				for (i=0;i<longest_size;i++){
					longest_word[i]=current_word[i];
				}
			}
		

		else{
			current_word[current_size]=c;
			current_size +=1;
		}
	}
	}
	
	for(i=0;i<longest_size;i++){
		printf("%d\n",current_word[i]); //coś zle zapisuje - wymaga int nie char + zapisuje za tylko '32'
	}
	fclose(plik);




	return 0;
}
