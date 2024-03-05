#include<cstdio>
int main(){
	int c,first=1;
	char s[2][4]={"''","``"};
	while((c=getchar())!=EOF){
		if(c=='"')
			printf("%s",s[first]),first^=1;
		else
			printf("%c",c);
	}
    // for(int i=0;i<2;i++){
    //     printf("%s",s[i]);
    // }
	return 0;
}