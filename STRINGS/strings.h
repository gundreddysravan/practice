/*
Function name:getstring
Parameters:Doesnt consist any arguments
Return type:character pointer
Descryption:Allocate the memory dynamycally using realloc function.
Date:07-03-23
*/
char *getstring(void);
/*
Function name:my_memcpy
Parameters:first argument as destination addres,second argument as source address,third argument as count  
Return type:void pointer
Descryption:copies the memory from the source adresss to the destiation address
Date:13-03-23
*/
void *my_memcpy(void *dest_str, const void *src_str, size_t number);
/*
Function name:call_memcpy
Parameters:Doesnt consist any arguments
Return type:void 
Descryption:copies the memory from the source adresss to the destiation address
Date:13-03-23
*/
void call_memcpy(void);
/*
Function name:my_memmove
Parameters:first argument as destination addres,second argument as source address,third argument as count  
Return type:void pointer
Descryption:copies the memory from the source adresss to the destiation address using the temporary memory
Date:13-03-23
*/
void *my_memmove(void *dest_str, const void *src_str, size_t number);
/*
Function name:call_memmove
Parameters:Nothing-void
Return type:void pointer
Descryption:copies the memory from the source adresss to the destiation address using the temporary memory
Date:13-03-23
*/
void call_memmove(void);
/*
Function name:user_strcpy
Parameters:nothing-void
Return type:integer
Descryption:copies the memory from the source adresss to the destiation address using the temporary memory
Date:13-03-23
*/
int user_strcpy();
/*
Function name:mystrcpy
Parameters:first argument as fisrt string,second argument as second string 
Return type:char pointer
Descryption:copies the memory from the second string  to the fisrt string 
Date:13-03-23
*/
char *mystrcpy(char *str2, char *str1);
/*
Function name:own_strncpy
Parameters:first argument as destination addres,second argument as source address,third argument as count  
Return type:char pointer
Descryption:copies the memory from the source adresss to the destiation address up to n bytes
Date:13-03-23
*/
char* own_strncpy(char *dest, const char *src, int n);
/*
Function name:call_strncpy
Parameters:Nothing-void
Return type:inteer
Descryption:copies the memory from the source adresss to the destiation address up to n bytes
Date:13-03-23
*/
int call_strncpy(void);
/*
Function name:mystrcat
Parameters:first argument as fisrt string,second argument as second string 
Return type:Nothing-void
Descryption:appends the second string with the first string
Date:13-03-23
*/
void mystrcat(char *str1, char *str2);
/*
Function name:my_strncat
Parameters:first argument as destination addres,second argument as source address,third argument as count  
Return type:char pointer
Descryption:appends the second string with the first string up to n bytes
Date:13-03-23
*/
char* my_strncat(char* destination, const char* source, size_t num);
/*
Function name:call_strncat
Parameters:Nothing-void
Return type:integer
Descryption:appends the second string with the first string up to n bytes
Date:13-03-23
*/
int call_strncat();
/*
Function name:my_memcmp
Parameters:first and second argument as strings,third argument as length 
Return type:integer
Descryption:compares the two memory regions up to length bytes
Date:13-03-23
*/

int my_memcmp(const void *s1, const void *s2, int len);
/*
Function name:call_memcmp
Parameters:Nothing-void
Return type:integer
Descryption:compares the two memory regions up to length bytes
Date:13-03-23
*/
int call_memcmp();
/*
Function name:call_memcmp
Parameters:Nothing-void
Return type:integer
Descryption:compares the two string up to length bytes
Date:13-03-23
*/
int call_strcmp();
/*
Function name:mystrcmp
Parameters:two strings
Return type:integer
Descryption:compares the two memory regions up to length bytes
Date:13-03-23
*/
int mystrcmp(char *str1, char *str2);
/*
Function name:call_strncpm
Parameters:Nothing-void
Return type:integer
Descryption:compares the two string up to length bytes
Date:13-03-23
*/
int call_strncpm();
/*
Function name:my_strncmp
Parameters:Two strings along with the length to compare
Return type:integer
Descryption:compares the two string up to length bytes
Date:13-03-23
*/
int my_strncmp(char *str1,char *str2,int n);
/*
Function name:call_memchr
Parameters:nothing-void
Return type:integer
Descryption:search for the charcter in the memory region
Date:13-03-23
*/
int call_memchr();
/*
Function name:xmemchr
Parameters:one string alomg with one character to be searched and the count 
Return type:void pointer
Descryption:search for the charcter in the memory region
Date:13-03-23
*/
void * xmemchr(const void *buffer, int ch, size_t count);
/*
Function name:my_StrStr
Parameters:two strings
Return type:character pointer
Descryption:compares the two strings 
Date:13-03-23
*/
char* my_StrStr(char* str, char* substr);
/*
Function name:call_strstr
Parameters:Nothing-void
Return type:integer
Descryption:compares the two strings 
Date:13-03-23
*/
int call_strstr();
/*
Function name:call_strstr
Parameters:Nothing-void
Return type:integer
Descryption:search for the character in the sring
Date:13-03-23
*/
int call_strchr();
/*
Function name:my_strchr
Parameters:one string and one character 
Return type:integer
Descryption:search for the character in the sring
Date:13-03-23
*/
char *my_strchr(char *string, char letter);
/*
Function name:my_strcspn
Parameters:one string and one character 
Return type:integer
Descryption:calculates the length of the number of characters before the 1st occurrence of character present in both the string
Date:13-03-23
*/
unsigned int my_strcspn(const char *s1, const char *s2);
/*
Function name:call_strcspn
Parameters:nothing-void
Return type:integer
Descryption:calculates the length of the number of characters before the 1st occurrence of character present in both the string
Date:13-03-23
*/
int call_strcspn();
/*
Function name:my_strcspn
Parameters:one string and one character 
Return type:integer
Descryption:calculates the length of the number of characters before the 1st occurrence of character present in both the string
Date:13-03-23
*/
char* my_strpbrk(char* str1, char* str2);
/*
Function name:call_strpbrk
Parameters:nothing-void
Return type:integer
Descryption:used to find the first character in a first string that matches any character in a second string
Date:13-03-23
*/
int call_strpbrk();
/*
Function name:my_strrchr
Parameters:nothing-void
Return type:integer
Descryption:used to find the first character in a first string that matches any character in a second string
Date:13-03-23
*/
char *my_strrchr(const char *s, int c);
/*
Function name:call_strrchr
Parameters:nothing-void
Return type:integer
Descryption:used to find the first character in a first string that matches any character in a second string
Date:13-03-23
*/
int call_strrchr();
/*
Function name:myStrspn
Parameters:two strings
Return type:integer
Descryption:function returns the length of the initial substring of the string pointed to by str1 that is made up of only those character contained in the string pointed to by str2
Date:13-03-23
*/

size_t myStrspn(const char *str1, const char *str2);
/*
Function name:call_mystrspn
Parameters:two strings
Return type:integer
Descryption:function returns the length of the initial substring of the string pointed to by str1 that is made up of only those character contained in the string pointed to by str2
Date:13-03-23
*/
void call_mystrspn();
/*
Function name:StrStr
Parameters:two strings
Return type:char pointer
Descryption:function finds the first occurrence of the substring needle in the string haystack. The terminating '\0' characters are not compared
Date:13-03-23
*/
char* StrStr(char* str, char* substr);
/*
Function name:call_strstr
Parameters:Nothing-void
Return type:char pointer
Descryption:function finds the first occurrence of the substring needle in the string haystack. The terminating '\0' characters are not compared
Date:13-03-23
*/
int call_strstr();
/*
Function name:my_strtok
Parameters:One string and one delimiter
Return type:char pointer
Descryption:breaks string str into a series of tokens using the delimiter delim
Date:13-03-23
*/
char *my_strtok(char *srcString, char *delim);
/*
Function name:call_strtok
Parameters:Nothing-void
Return type:char pointer
Descryption:breaks string str into a series of tokens using the delimiter delim
Date:13-03-23
*/
int call_strtok();
/*
Function name:myMemSet
Parameters:One string ,one character and one the length
Return type:char pointer
Descryption:sets the selected memory region with the selected character
Date:13-03-23
*/
void myMemSet(void* str, char ch, size_t n);
/*
Function name:call_memset
Parameters:One string ,one character and one the length
Return type:char pointer
Descryption:sets the selected memory region with the selected character
Date:13-03-23
*/
void call_memset();

//int call_strerror();
/*
Function name:call_strlen
Parameters:Nothing-void
Return type:void
Descryption:find the string length of the given string
Date:13-03-23
*/
void call_strlen();
/*
Function name:my_strlen
Parameters:One string 
Return type:intger
Descryption:find the string length of the given string
Date:13-03-23
*/
int my_strlen(char *t);
/*
Function name:call_size_t
Parameters:void 
Return type:void
Descryption:to use the user defned size_t
Date:13-03-23
*/

void call_size_t();

