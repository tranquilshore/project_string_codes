//reverse the order of words in a string in c using a little additional
//memory possible. example:
//I love you
//you love I
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

void reverseString(char *str,int len){
	int i,j;
	char temp;
	for(i=0,j=len-1;i<j;i++,j--){
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
}

void reverseWords(char *str){
	int i=0,j=0;
	reverseString(str,strlen(str));
	while(1){
		if(*(str+j)==' '|| *(str+j)=='\0'){
			reverseString(str+i,j-i);
			i=j+1;
		}
		if(*(str+j)=='\0')
			break;
		j++;
	}
}

int main(){
	char *str=(char *)malloc(100*sizeof(char));
	gets(str);
	reverseWords(str);
	cout << str<<endl;
	return 0;
	
}