//it needs the size of a char and size of two integers, all of which will
//be allocated from the stack. This solution is the most commonly accepted
//good solution
#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char *str){
	int i,j;
	char temp;
	for(i=0,j=strlen(str)-1;i<j;i++,j--){
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
}

int main(){
	char *str=(char *)malloc(100*sizeof(char));
	gets(str);
	reverseString(str);
	cout << str <<endl;
	return 0;
}