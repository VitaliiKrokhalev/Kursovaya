#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

double console(int ds, char *s)
{	
	char ms[ds*6][ds*6];
	int ds_tmp = ds * 6;
	char c[ds_tmp];
	int n = 0, j = 0, k = 0, f = 0, i = 0;
	while(n <= ds)
	{
		while(isalpha(s[n]))
		{
			ms[i][j] = s[n];

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
	
	printf("\nОтсортированные слова:\n");                  
	for (j=0;j<i;j++)
	{
		if (ms[j][0])
			printf(" %s\n", ms[j]);
	}

    return 3;
}
