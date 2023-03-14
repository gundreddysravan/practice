#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef unsigned long long my_size_t;
char *mystrcpy(char *str2, char *str1);
char* own_strncpy(char *dest, const char *src, int n);
void * xmemchr(const void *buffer, int ch, size_t count);
char *my_strchr(char *string, char letter);

//extern int errno ;
char *getstring(void)
{
	char *ptr=NULL;
	unsigned char i=0;
	fflush(stdin);
	do{
		ptr=realloc(ptr,i+1);
		ptr[i]=getchar();
	}while(ptr[i++]!='\n');
	ptr[i-1]='\0';
	return ptr;
}

/****************user defined memcpy*********************************/

void *my_memcpy(void *dest_str, const void *src_str, size_t number)
{
	unsigned char i=0;
	char *dest_str_temp=(char *)dest_str;
	char *src_str_temp=(char *)src_str;
	for(i=0;i<number;i++)
	{
    	dest_str_temp[i]=src_str_temp[i];
	}
	return dest_str_temp;
}

void call_memcpy(void)
{
    char *src=NULL,*dest=NULL;
	printf("/*************user-defined memcpy************/");
	printf("\nenter the string:");
	src=getstring();
	dest=realloc(dest,strlen(src));
	dest=my_memcpy(dest, src, strlen(src));
	printf("string in source:%s\n",src);
	printf("strig in destintion %s\n",dest);
	
}
/****************user defined memcpy*********************************/



/****************user defined memmove*********************************/

void *my_memmove(void *dest_str, const void *src_str, size_t number)
{
	unsigned char i=0;
	char *dest_str_temp=(char *)dest_str;
	char *src_str_temp=(char *)src_str;
	char *temp_buf=NULL;
	temp_buf=realloc(temp_buf,number);
	for(i=0;i<number;i++)
	{
		temp_buf[i]=src_str_temp[i];
	}
	
	for(i=0;i<number;i++)
	{
    	dest_str_temp[i]=temp_buf[i];
	}
	return dest_str_temp;
}


void call_memmove(void)
{
    char *src=NULL,*dest=NULL;
	printf("/*************user-defined memmove************/");
	printf("\nenter the string:");
	src=getstring();
	dest=realloc(dest,strlen(src));
	dest=my_memmove(dest, src, strlen(src));
	printf("string in source:%s\n",src);
	printf("strig in destintion:%s\n",dest);
	
}


/****************user defined memmove*********************************/

/****************user defined strcpy*********************************/
int user_strcpy()
{
 char *str1=NULL, *str2=NULL;
 int i=0;

 printf("Enter string:\n");
 str1=getstring();
 str2=realloc(str2,strlen(str1));
 str2=mystrcpy(str2, str1);
 
 printf("Copied string is: %s", str2);
 
 return 0;
}

/* Function Definition*/
char *mystrcpy(char *str2, char *str1)
{
 int i;
 for(i=0;str1[i]!='\0';i++)
 {
  str2[i] = str1[i];
 }
 str2[i] = '\0';
 return str2;
}

/****************user defined strcpy*********************************/

/***************user definedstrncpy**********************************/


char* own_strncpy(char *dest, const char *src, int n)
{
    char *temp=NULL;
	temp = dest;
    while (n--)
    {
        (*dest++ = *src++);
    }

    *dest = '\0';

   return temp;

}

int call_strncpy(void)
{

    char *src_str=NULL;

    char *dest_str=NULL;

    int num_of_char;

    char *dest = NULL;

    printf("Enter any string :");
    src_str=getstring();
	dest_str=realloc(dest_str,strlen(src_str));
    printf("Enter number of character copy to destination = ");
    fflush(stdin);
    scanf("%d",&num_of_char);

    /* Own string copy function call */

    dest = own_strncpy(dest_str, src_str, num_of_char);

    printf("Destination string is = %s",dest);

    return 0;

} 
/***************user definedstrncpy**********************************/

/**************user defined strng cat********************************/

void mystrcat(char *str1, char *str2);

/* Main Function */
int call_string_cat(void)
{
 char *str1=NULL, *str2=NULL;
 int i, len=0;

 printf("Enter first string:\n");
     str1=getstring();
	
 printf("Enter second string:\n");
 str2=getstring();
 mystrcat(str1, str2);
 printf("Concatenated string is: %s", str1);

 return 0;
}

void mystrcat(char *str1, char *str2)
{
 int i, len=0;
 /* Calculating length of first string */
 for(i=0;str1[i]!='\0';i++)
 {
  len++;
 }
 /* Concatenating second string to first string */
 for(i=0;str2[i]!='\0';i++)
 {
  str1[len+i] = str2[i];
 }
 str1[len+i]='\0';
}



/*************user defined string cat******************************/


/************user defined strncat ********************************/

char* my_strncat(char* destination, const char* source, size_t num)
{
    
    char* ptr = destination + strlen(destination);
 
    
    while (*source != '\0' && num--)
	 {
        *ptr++ = *source++;
    }
 
    
    *ptr = '\0';
 
   
    return destination;
}
 

int call_strncat()
{
    char *dest=NULL;
    
 int n=0;
    char *src =NULL;
    printf("Enter source string:\n");
    src=getstring();
	
     printf("Enter destination string:\n");
    dest=getstring();
    
    printf("Enter the number of bytes to append:\n");
    scanf("%d",&n);
 
 dest= my_strncat(dest, src, n);
 printf("after appending:",dest);
    puts(dest); 
    return 0;
}
/****************************************************************/



/*****************user defined memcmp*************************/

int my_memcmp(const void *s1, const void *s2, int len)
{
    unsigned char *p = s1;
    unsigned char *q = s2;
    int charCompareStatus = 0;
    //If both pointer pointing same memory block
    if (s1 == s2)
    {
        return charCompareStatus;
    }
    while (len > 0)
    {
        if (*p != *q)
        {  //compare the mismatching character
            charCompareStatus = (*p >*q)?1:-1;
            break;
        }
        len--;
        p++;
        q++;
    }
    return charCompareStatus;
}


int call_memcmp()
{
	char *str1=NULL;
	char *str2=NULL;
	int n=0;
	printf("enter the first string:");
	str1=getstring();
	printf("enter the second string:");
	str2=getstring();
	printf("\nenter the number of bytes to be compared:");
	scanf("%d",&n);
	n=my_memcmp(str1, str2, n);
	 if(n > 0)
    {
        printf("string2 is less than s1");
    }
    else if(n < 0)
    {
        printf("string1 is less than s2");
    }
    else
    {
        printf("string is equal to s2");
    }

}



/******************user defined strcmp**********************/

int call_strcmp()
{
 char *str1=NULL ,*str2=NULL;
 int d=0;

 printf("Enter first string:\n");
str1=getstring();
 printf("Enter second string:\n");
str2=getstring();

 /* Function Call */
 d = mystrcmp(str1, str2);

 if(d==0)
 {
  printf("Given strings are same.");
 }
 else
 {
  printf("Given strings are different.");
 }

 return 0;
}

/* Function Definition */
int mystrcmp(char *str1, char *str2)
{
 int d,i, len1=0, len2=0, flag=0;
 /* Finding length of first string */
 
 for(i=0; str1[i]!='\0'; i++)
 {
  len1++;
 }
 
 /* Finding length of first string */
 for(i=0; str2[i]!='\0'; i++)
 {
  len2++;
 }
 if(len1!=len2)
 {
  return(1);
 }
 else
 {
  for(i=0;i< len1;i++)
  {
   if(str1[i]!=str2[i])
   {
    flag=1;
    break;
   }
  }
  
  if(flag==0)
  {
   return(0);
  }
  else
  {
   return(1);
  }
 }
}
/******************user defined strcmp**********************/


int call_strncpm()
{
	char *str1=NULL	,*str2=NULL;int n=0;
	printf("\nenter the first string:");
	str1=getstring();
	printf("\nenter the second string:");
	str2=getstring();
	printf("\nenter the number of bytes to compare:");
	fflush(stdin);
	scanf("%d",&n);
	
	n=my_strncmp(str1,str2,n);
	if(n==0)
	{
		printf("Both the strings are same\n");
	}
		
	else if(n==1)
	{
		printf("First string is greater than second string\n");
	}	
	else if(n==-1)
	{
		printf("second string is greater than first string\n");
	}
	return 0;
}
int my_strncmp(char *str1,char *str2,int n)
{
		int i=0;
		for(i=0;i<n;i++)
		{
			if(str1[i]==str2[i])
			{
				if(i==(n-1))
				{
					return 0;
				}
			}
			if(str1[i]>str2[i])
			{
				return 1;
			}
			if(str1[i]<str2[i])
			{
				return -1;
			}
		    
		}
}


/**************************************************************/

/******************user defined memchr**********************/

int call_memchr()
{
    char *p;
    char *s =NULL;
    char c=0;
    printf("\nenter the string :");
    
 s=getstring();
    //p = memchr(s,'e',14);
    printf("\nenter the chracter in the string :");
    fflush(stdin);
    scanf("%c",&c);
    p = xmemchr(s,c,14);
    printf("\n %p \t %s \t %c \n", p, p, *p);
    return 0;
}
 
void * xmemchr(const void *buffer, int ch, size_t count)
{
    int i;
    char c;
    char *s = buffer;
     
    for(i = 0; i< count ; i++)
    {
        if(*s == ch){
             
            return s;
        }
        else
            s++;
    }
}



/******************user defined memchr**********************/
/******************user defined strstr**********************/
char* my_StrStr(char* str, char* substr)
{
    static char* ptr;

    ptr = str;

    while (*ptr) {
        if (strncmp(ptr, substr, strlen(substr)) == 0)
            return ptr;
        ptr++;
    }
    return NULL;
}

int call_strstr()
{
    char *str=NULL;
    char* ptr;
printf("\nenter the string:");
str=getstring();
printf("\nenter the string tobe serached:");
ptr=getstring();
    ptr = my_StrStr(str, ptr);
    if (ptr != NULL)
        printf("String is: '%s'\n", ptr);
    else
        printf("enterded string not found\n");



    return 0;
}
/******************user defined strstr**********************/

/******************user defined strchr**********************/

int call_strchr()
{
            int i=0;
            char *strings=NULL;
            char letter=0,*result=NULL;
            printf("\nenter the string:");
            strings=getstring();
            printf("\nenter the first charcter to b searched:");
            fflush(stdin);
            scanf("%c",&letter);
            result=my_strchr(strings, letter);
            if(result!=NULL)
            {
            	printf("\nentered char in th string %s is at %p",strings,result);
            	return 0;
			}
			else
			{
				printf("\ncharacter not found\n");
			}
			
            
            return 0;
}

char *my_strchr(char *string, char letter)
{
    char *ptr=NULL;
	if(*string==letter)
	return string;
    while (*string!=letter && *string!=NULL)
    {
    	ptr=++string;
	}
   
   return (ptr);
} 
/******************user defined strchr**********************/

/****************user defined strcspn*********************/
unsigned int my_strcspn(const char *s1, const char *s2)
{
    unsigned int len =0;
    //return 0 if any one is NULL
    if((s1 == NULL) || (s2 == NULL))
        return len;
    //till not get null character
    while(*s1)
    {
        //return s1 char position if found in s2
        if(strchr(s2,*s1))
        {
            return len;
        }
        else
        {
            //increment s1
            s1++;
            //increment len variable
            len++;
        }
    }
    return len;
}
int call_strcspn()
{
    int len;
    // initializing strings
    char *s1 = NULL;
    char *s2= NULL;
    printf("\nenter the first string:");
    s1=getstring();
        printf("\nenter the second string:");
    s2=getstring();
    // using strcspn() to compute initial chars
    // before 1st matching chars.
    // returns 3
    len = my_strcspn(s1, s2);
    printf("length of string that characters not present in s2: %d\n", len);
    return 0;
}

/****************user defined strcspn*********************/

/****************user defined strpbrk*********************/

char* my_strpbrk(char* str1, char* str2)
{
    int i = 0;
    int j = 0;

    int pos = 0;
    int flg = 0;

    while (*(str1 + i))
        i++;

    pos = i;
    i = 0;
    while (*(str2 + i)) {
        j = 0;
        while (*(str1 + j)) {
            if (str2[i] == str1[j]) {
                if (j <= pos) {
                    pos = j;
                    flg = 1;
                }
            }
            j++;
        }
        i++;
    }

    if (flg == 1)
        return &str1[pos];

    return NULL;
}

int call_strpbrk()
{
    char* ptr;
    char *str =NULL;
    char *str2 = NULL;
    printf("enter th first string:");
    str=getstring();
    printf("enter the second string:");
    str2=getstring(); 
    ptr = my_strpbrk(str, str2);
    if (ptr != NULL)
        printf("First occurence is: '%c' in the string\n", ptr[0]);
    else
        printf("No any occurence found within the string.\n");

    return 0;
}

/****************user defined strpbrk*********************/


/***************user dfined strchr************************/

char *my_strrchr(const char *s, int c)
{
    char *isCharFind = NULL;
    //handling null pointer
    if(s != NULL)
    {
        do
        {
            if( *s == (char)c )
            {
                isCharFind=s;
            }
        }
        while(*s++);
    }
    return isCharFind;
}
int call_strrchr()
{
    //string
    const char *s = NULL;
    //char want to search
    char want_search = 0;
    printf("enter th  string:");
    s=getstring();
    printf("enter th  character:");
    fflush(stdin);
    scanf("%c",&want_search);
    //Call own created strrchr
    char *ptr = my_strrchr(s,want_search);
    if (ptr != NULL)
    {
        printf ("Last occurence of %c found at %d.\n", want_search,ptr-s+1);
        printf ("search character found:  %s\n", ptr);
    }
    else
    {
        printf ("search character not found\n");
    }
    return 0;
}


/*****************************strchr***********************/

/***********************user defined strspn****************/

size_t myStrspn(const char *str1, const char *str2){
  size_t i,j;
  i=0;

  while(*(str1+i)){
    j=0;
    while(*(str2+j)){
      if(*(str1+i) == *(str2+j)){
        break; //Found a match.
      }
      j++;
    }
    if(!*(str2+j)){
      return i; //No match found.
    }
    i++;
  }
  return i;
}

void call_mystrspn()
{

char *s = NULL,*s1=NULL;
  int n = 0;
  printf("\nenter the first string:");
  s=getstring();
  printf("\nenter the string");
  s1=getstring();
  
  n = myStrspn(s,s1);
  printf("The number length is %d. \n",n);
}


/********************usr defined strspn*******************/
#if 0
/********************usr defined strstr*******************/
char* StrStr(char* str, char* substr)
{
    static char* ptr;

    ptr = str;

    while (*ptr) {
        if (strncmp(ptr, substr, strlen(substr)) == 0)
            return ptr;
        ptr++;
    }
    return NULL;
}

int call_strstr()
{
    char *str =NULL,str1=NULL;
    
    char* ptr=NULL;
    printf("\nenter the first string:");
	str=getstring();
	printf("\nenter the second string:");
	str1=getstring();
    ptr = StrStr(str, "great");
    if (ptr != NULL)
        printf("String is: '%s'\n", ptr);
    else
        printf("Word 'great' is not found\n");

    ptr = StrStr(str, "power");
    if (ptr != NULL)
        printf("String is: %s\n", ptr);
    else
        printf("Word 'power' is not found\n");

    return 0;
}

/********************usr defined strstr*******************/
#endif
/*******************user defined strtok******************/

unsigned int is_delim(char c, char *delim)
{
    while(*delim != '\0')
    {
        if(c == *delim)
            return 1;
        delim++;
    }
    return 0;
}
char *my_strtok(char *srcString, char *delim)
{
    static char *backup_string; // start of the next search
    if(!srcString)
    {
        srcString = backup_string;
    }
    if(!srcString)
    {
        // user is bad user
        return NULL;
    }
    // handle beginning of the string containing delims
    while(1)
    {
        if(is_delim(*srcString, delim))
        {
            srcString++;
            continue;
        }
        if(*srcString == '\0')
        {
            // we've reached the end of the string
            return NULL; 
        }
        break;
    }
    char *ret = srcString;
    while(1)
    {
        if(*srcString == '\0')
        {
            /*end of the input string and
            next exec will return NULL*/
            backup_string = srcString;
            return ret;
        }
        if(is_delim(*srcString, delim))
        {
            *srcString = '\0';
            backup_string = srcString + 1;
            return ret;
        }
        srcString++;
    }
}
int call_strtok()
{
    //input string
    char *srcString =NULL;// "HI Aticleworld;Reader";
    //delimiter
    char *delim = NULL;//"; ";
  	printf("\nenter the string:");
  	srcString=getstring();
    printf("\nenter the delimiter:");
  	delim=getstring();
    
    //calling own version of strtok function
    char *token = my_strtok(srcString, delim);
    while(token)
    {
        printf("%s\n", token);
        token = my_strtok(NULL, delim);
    }
    return 0 ;
}


/******************user defined strtok*******************/


/****************************user defined memset***************/
void myMemSet(void* str, char ch, size_t n){
	int i;
	//type cast the str from void* to char*
	char *s = (char*) str;
	//fill "n" elements/blocks with ch
	for(i=0; i<n; i++)
		s[i]=ch;
}

void call_memset()
{
	char *str1=NULL;
	char c=0;int position=0;
	printf("\nenter the string:");
	str1=getstring();
	printf("\nenter the setting char:");
	fflush(stdin);
	scanf("%c",&c);
	fflush(stdin);
	printf("\nenter the position from which char has to be replaced:");
	
	scanf("%d",&position);
	myMemSet(str1+position,c,strlen(str1+position));
	printf("string after setiing  with character is %s\n",str1);
	
}




/*************************user defined memset*******************/
#if 1
/************************used defined strerror*****************/
my_strerror(int errno)
{
	switch(errno)
	{
		case 1:
		{
				printf("Operation not permitted\n");
		}break;
		case 2:
		{
				printf("No such file or directory\n");
		}break;
		
		case 3:
		{
				printf("No such process\n");
		}break;
		case 4:
		{
				printf("Interrupted system call\n");
		}break;
		case 5:
		{
				printf("I/O error\n");
		}break;
		case 6:
		{
				printf("No such device or address\n");
		}break;
		case 7:
		{
				printf("Argument list too long\n");
		}break;
		case 8:
		{
				printf("Exec format error\n");
		}break;
		case 9:
		{
				printf("Bad file number\n");
		}break;
		case 10:
		{
				printf("No child processes\n");
		}break;
		case 11:
		{
				printf("Try again\n");
		}break;
		case 12:
		{
				printf("Out of memory\n");
		}break;
		case 13:
		{
				printf("Permission denied\n");
		}break;
		default:
			{
				printf("entered in to default");
			}

		
	}
}


int call_strerror()
{
  FILE * pFile;
  
  pFile = fopen ("unexist.ent","rb");
 
  if (pFile == NULL)
  {
    printf( "Error Value is : %s\n", my_strerror(errno) );
  }
  else
    fclose (pFile);
printf( "Error " );
  return 0;
}
#endif
/***********************user defined strerror******************/
/************************user defined strlen*******************/
void call_strlen()
{
    int len(char *);
    char *s=NULL;
    int l;
    printf("Enter a string: ");
	s=getstring();
    l=my_strlen(s);
    printf("length of string is =%d",l);
    
}

int my_strlen(char *t)
{
    int count=0;
    while(*t!='\0')
    {
        count++;
        t++;
    }
    return(count);
}
/************************user defined strlen*******************/

/****************************test code************************/
void call_size_t()
{
	int n=0;
//	n=printf("%d\n",sizeof(size_t));
	n=printf("%d\n",sizeof(my_size_t));
}


/***************************************************************/
