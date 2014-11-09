//minimum number of insertions to make string a pallindrome
#include <iostream>
#include <cstring>
using namespace std;

inline int max(int a,int b){
	return a>=b?a:b;
}
int main(){
	char str[1000];
	int dp[2][1000];
	cin >> str;
	memset(dp,0,sizeof(dp));
	int i,j,k,length;
	length=strlen(str);
	for(i=length-1;i>=0;i--){
		char ch=str[i];
		for(j=0;j<length;j++){
			if(ch==str[j])
				dp[1][j+1]=dp[0][j]+1;
			else dp[1][j+1]=max(dp[1][j],dp[0][j+1]);
		}
		for(k=0;k<=length;k++)
			dp[0][k]=dp[1][k];
	}

	cout << length-dp[1][j];
	return 0;
}