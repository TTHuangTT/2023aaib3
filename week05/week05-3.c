#include <stdio.h>
#include <string.h> // Step05: strchr(s, c) not used here!
#include <ctype.h> // Step04: tolower(c)
int main()
{
	// Step03: keyboard keys
	char s[]="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	char c;
	// Step01: Input
	while( scanf("%c",&c) == 1){
		c = tolower(c); // Step04
		if(c==' ' || c=='\n') printf("%c",c);
		else{
			for(int i=0; s[i]!=0;i++){ // Step05 find c in s
				if(c==s[i]) printf("%c",s[i-2]);
			}
		}
		
		//printf("%c",c); // Step02: Output
	}
}