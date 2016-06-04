#include "kurs.h"
//#include "del_1.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	int ds, k = 0, n = 0, f = 0, i = 0, j = 0;
	char s[100000];
	double e;
    long d = 0;
    ds = strlen(s); 
	
	
    while(d != 4){
        printf("\n1. Ввод текста в консоли \n2. Чтение текста из файла \n3. Руководство пользователя \n4. Выход из программы\n");
        scanf ("%ld", &d);
        
        switch(d){
            case 1:
                printf("Введите текст: ");
				do
				{
					scanf("%c", &s[i]); 
					i++;
				}
				while(s[i-1] != 0xA);
				s[i-1] = '\0';
			//e = console(ds, k, n, f, i, j, *ms, *s, *c);
			console(ds, &s);
			
            break;
            case 2:
            break;
             case 3:
            break;
             case 4:
            break;
            default:
               printf ( "\nОшибка! \n" );
            break;
        }
    }
}
