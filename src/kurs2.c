#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "total.h"

void bubble_sort(char a[10000][100], int len)
{
	int i,j,t;
	char tmp[100];
    for (i = 0; i < len-1; i++) {
    	for (j = 0; j < len-i-1; j++) {
    		t = strcmp(a[j],a[j+1]);
        	if (t > 0) {
        		strcpy(tmp, a[j]);
        		strcpy(a[j], a[j+1]);
        		strcpy(a[j+1], tmp);
            }
        }
    }
}

int file1() {
	FILE *in,*out;
	char c;
	char fl[10000][100];
	int n,i,j;
	in = fopen("in.txt","r");
	out = fopen("out.txt","w");
	if (in == NULL)
	{
		printf("Файл не найден");
		return 0;
	}
	if (out == NULL)
	{
		printf("Файл не найден");
		return 0;
	}
	i = j = 0;
	while(!feof(in)){
		c = getc(in);
		if (!(isalpha(c)))
		{
			fl[i][j] = '\0';
			i++;
			j = 0;
		}
		else if (isalpha(c))
		{
			fl[i][j] = c;
			j++;
		}

	}
	fclose(in);
	n = i;
	bubble_sort(fl,n);
	printf("\nСлова, отсортированные по алфавиту:");
	for (i = 0; i < n; ++i)
	{	if (fl[i][0])
		fprintf(out, "%s ", fl[i]);
		if (fl[i][0])
		printf("\n%s ",fl[i]);
	}
	printf("\n");

  	fclose(out);
  	return 0;

}
