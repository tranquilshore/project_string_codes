//It is slightly better than the previous one 
//as it does not need the char space. It uses 
//bitmanipulation(XOR) to swap the chars in place
#include <iostream>
#include <cstring>
using namespace std;
void reverseStringBetter(char *str){
	int i,j;
	for(i=0,j=strlen(str)-1;i<j;i++,j--){
		str[i] ^= str[j];
		str[j] ^= str[i];
		str[i] ^= str[j];
	}
}

int main(){
	char *str=(char *)malloc(100*sizeof(char));
	gets(str);
	reverseStringBetter(str);
	cout << str << endl;
	return 0;
}