#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "total.h"

int console1 ()
{
	int ds,k=0,n=0,f=0, i=0, j=0;
	char *c;
	char s[10000];

	printf("Введите текст:\n");
	
	do
	{	
		scanf("%c", &s[i]); 
		i++;
	}
	while(s[i-1] != 0x9);
	
	s[i-1] = '\0';

	ds = strlen(s);

	char ms[ds*6][ds*6];

	c = (char*) malloc(ds*sizeof(char));
	while(n<=ds)
	{

		while(isalpha(s[n]))
		{

			ms[i][j]=s[n];
			j++; 
			n++;
		}

		j = 0; 
		i++; 
		n++;

	}

	
	do
	{
		f=0;
		for(j=i-1;j>k;j--)
		{ 
			if (strcmp(ms[j],ms[j-1])<0)
			{ 
				strcpy(c,ms[j]);
				strcpy(ms[j],ms[j-1]);
				strcpy(ms[j-1],c);
				f=1;
			} 
		}
		k++;
	}
	while(f);                     
	printf("Слова, отсортированные по алфавиту:\n");
	for (j=0;j<i;j++)
	{

		
		if (ms[j][0])
		printf(" %s\n", ms[j]);
	}
	free (c);

    return EXIT_SUCCESS;
}
