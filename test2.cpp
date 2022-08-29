#include <bits/stdc++.h>
using namespace std;

int main(){
	int opt;
	char s[10000], k[10000];
	puts("1. Encrypt\n2. Decrypt");
	scanf("%d",&opt);
	if(--opt){ // Dec
		printf("C: ");
		scanf(" %[^\n]",s);
		printf("K: ");
		scanf(" %[^\n]",k);
		for(int i=0, j=0; s[i]; ++i, ++j){
			if(!k[j]) j=0;
			if('A'<=s[i]&&s[i]<='Z') s[i]=(s[i]-'A'+k[j])%26+'A';
			else if('a'<=s[i]&&s[i]<='z') s[i]=(s[i]-'a'+k[j])%26+'a';
		}
		printf("M: %s",s);
	}
	else{ // Enc
		printf("M: ");
		scanf(" %[^\n]",s);
		printf("K: ");
		scanf(" %[^\n]",k);
		for(int i=0, j=0; s[i]; ++i, ++j){
			if(!k[j]) j=0;
			if('A'<=s[i]&&s[i]<='Z') s[i]=((s[i]-'A'-k[j])%26+26)%26+'A';
			else if('a'<=s[i]&&s[i]<='z') s[i]=((s[i]-'a'-k[j])%26+26)%26+'a';
		}
		printf("C: %s",s);
	}
}
