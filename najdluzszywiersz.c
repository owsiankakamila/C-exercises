#include <stdio.h>

#define MAXLINE 10000 /*maksymalny rozmiar wiersza*/

int getsline (char line[], int maxline); 
void copy (char to[0], char from[]);



int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	
	max=0;
	while((len = getsline(line,MAXLINE))>0)
	{ 

		if (len>80)
		printf("%d, %s",len,line);
	  if(len>max)
		{
			
			max =len;
			copy(longest,line);
		}
	}
	if (max>0)
		printf("%s",longest);
	return 0;
 

}


/* wyczytaj wiersz do s, podaj jego długość*/
int getsline(char s[],int lim)
{
	int i,j,c;
	j=0;
	for (i=0; ((c=getchar()) != EOF) && (c!='\n');++i)
	if  (i<(lim-2)){
		s[j]=c;
		j++;	
	}
	/* zakoncz petle, ale dodaj jeszcze znak \n : */
	if (c=='\n'){
		s[j]=c;
		++i;
		++j;
		
	}

	s[i] = '\0'; // zakoncz dzialanie, jest jakby i o jeden wiecej bo numeruje sie od 0
	return i;
	

}
/* przepisz */
void copy(char to[], char from[])
{
	int i;
	i=0;

	while ((to[i]=from[i]) != '\0')
	++i;

}
