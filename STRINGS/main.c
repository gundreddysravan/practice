#include <stdio.h>
#include <stdlib.h>
#include"strings.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int choice=0;
	
	printf("\n1.User memcpy\n2.User memmove\n3.User strcpy\n4.User strncpy\n5.User strcat\n6.User strncat\n7.User memcmp\n8.User strcmp\n9.User memchr\n10.User strstr\n11.User strchr\n12.User strcspn\n13.User strpbrk\n");
	printf("14.User mystrchr\n15.User mystrspn\n16.User strtok\n17.User memset\n18.User strerror\n19.User strlen\n20.User size_t\n");
	printf("\nenter the choice from above dispalyed menu:\n");
	fflush(stdin);
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		{
				call_memcpy();
		}break;
		case 2:
		{
				call_memmove();
		}break;
		case 3:
		{
				user_strcpy();
		}break;
		case 4:
		{
				call_strncpy();
		}break;
		case 5:
		{
				call_string_cat();
		}break;
		case 6:
		{
				call_strncat();
		}break;
		case 7:
		{
				call_memcmp();
		}break;
		case 8:
		{
				call_strcmp();
		}break;
		case 9:
		{
				call_memchr();
		}break;
		case 10:
		{
				call_strstr();
		}break;
		case 11:
		{
				call_strchr();
		}break;
		case 12:
		{
				call_strcspn();
		}break;
		case 13:
		{
				call_strpbrk();
		}break;
		case 14:
		{
				call_strrchr();
		}break;
		case 15:
		{
				call_mystrspn();
		}break;
		case 16:
		{
				call_strtok();
		}break;
		case 17:
		{
				call_memset();
		}break;
		case 18:
		{
				call_strerror();
		}break;
		case 19:
		{
				call_strlen();
		}break;
		case 20:
		{
				call_size_t();
		}break;
		default:
			{
				printf("wrong choice\n");
			}
	}
	
	
	
	
	//call_memcpy();
//	call_memmove();
//	user_strcpy();
//	call_strncpy();
//call_string_cat();
//call_strncat();
//call_memcmp();
//call_strcmp();
// call_strncpm();
//call_memchr();
//call_strstr();
//call_strchr();
//call_strcspn();
//call_strpbrk();
//call_strrchr();
//call_mystrspn();
//call_strtok();
//call_memset();
//call_strerror();
//call_strlen();
//call_size_t();
//test();
	return 0;
}


