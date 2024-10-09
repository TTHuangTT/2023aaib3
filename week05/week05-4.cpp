#include <iostream> // Step02: cout
#include <stdio.h> // Step01: scanf()
#include <string> // Step03: tolower() find()
using namespace std;
int main()
{
	string s = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	char c; // Step01: Input
	while(scanf("%c",&c)==1){
		c = tolower(c); // Step03: tolower(c)
		if(c==' ' || c=='\n') cout << c; // Step02: Output
		else{
			int i=s.find(c); // Step04: find()
			cout << s[i-2]; // Step05: Output s[i-2]
		}
	}
}