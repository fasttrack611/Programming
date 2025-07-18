#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 

void strConcat(const char *src, char *dest) {
	// Move to end of dest string
	while (*dest != '\0') {
		dest++;
	}

	// Copy src to the end of dest
	while (*src != '\0') {
		*dest++ = *src++;
	}
	  *dest = '\0'; // Null-terminate the result
}

char * strRreverse(const char *str){
	int len=strlen(str);
	int i=0; 
	char *rev=malloc(len+1);
    
	printf("\n Source string :: %s\n", str);

	for(i = 0; i < len; i++)	
	rev[i]=str[len-1-i];
	rev[len] ='\0';
	return rev;
}

	
int main() {
    const char *data = "WaveDigitech.com";
    char dest[50] = "Media_tech.com";  // Ensure dest has enough space
    strConcat(data, dest);

    printf("Source String = %s\t", data);
    printf("Dest String = %s\n", dest);


  char *rev=strRreverse(data);
    printf("\n Reverse String:: %s\n", rev);
    return 0;
}

