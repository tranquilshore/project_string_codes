//minimum number of characters to append at the end of a string to make it a pallindrome
#include <iostream>
#include <cstring>
using namespace std;

int Pallindrome(char *str){
	int i,j,len;
	len=strlen(str);
	for(i=0,j=len-1;i<len/2;++i,--j){
		if(str[j]!=str[i])
			return 0;
	}
	return 1;
}

int findAppendPallin(char *str){
	if(Pallindrome(str))
		return 0;
	else{
		str++;
		return 1+findAppendPallin(str);
	}
}

int main(){
	char str[1000];
	cin >> str;
	int result;
	result= findAppendPallin(str);
	cout << result <<endl;
}