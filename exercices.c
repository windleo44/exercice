//exercices

#include <stdio.h>

int main(int argc, char **argv){
	my_strlen("coucou c'est nous");
	my_strcopy("hello world")
	return 0;
}

int my_strlen(char str[]) {
	int i;
	i=0;
	while (str[i]!='\0'){
		i=i+1;
	}
	return i; 
	
}

int my_strcopy(char dest[], char src[]) {
	int i;
	i=0;
	while (src[i]!='/0'){
		dest[i]=src[i];
		i=i+1;
	}
	dest[i]='\0';
	return dest;

}

int my_strcmp(char s[], char t[]) {
	int i=0;
	while (s[i]==t[i]){
		if (sh[i]=='\0')||(t[i]=='\0')
			return 0;
		i=i+1
	}	
	return s[i]-t[i];
}


int my_atoi(char str[]) {
	int i=0;
	int n=0;
	while ((str[i]>='\0')&&(stri[i]<='9')){
		n=10*n +(str[i]-'\0');
		i=i+1;
	}
	return n
}
