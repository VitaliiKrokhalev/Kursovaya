#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int d = 0;
	
    while(d != 3){
        printf("\n1. Ввод текста в консоли \n2. Чтение текста из файла \n3. Выход из программы\n");
        scanf ("%d", &d);
        
        if (!(isdigit(d))) {	
        switch(d){
			
            case 1: {
			console1 ();
            break; 
			}
			
            case 2:  {
			file1();	
            break;
			}
			
            case 3: break;
            
            default: {
                printf ( "\nОшибка! \n" );
				break;
				return 1;
			}
        }
    }
    else {
		 printf ( "\nОшибка! \n" );
		 exit (1);
	 }
}
}
