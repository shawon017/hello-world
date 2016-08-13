#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>
#define lim INT_MAX
int min(int a, int b){
				return (a<b) ? a : b;
}
int main(void){
				int n1;
				for(; scanf("%d", &n1)!= EOF;){
								char s[n1];
								scanf("%s",s);
								int c[n1];
								/*char ch;*/
								/*do{*/
								/*ch = fgetc(stdin);*/
								/*if(isdigit(ch)){*/
								/*c[k++] = ch - 48;*/
								/*}*/
								/*}*/
								/*while(isdigit(ch) && k < sizeof(c)/sizeof(c[0]));*/
								for(int i = 0; i < n1; i++){
												scanf("%d", &c[i]);
								}
								int time = lim;
								for(int i = 0; i < n1; i++){

												if(s[i] == 'R' && s[i+1] == 'L'){
																time = min(time,(c[i+1]-c[i])/2);
												}

								}
								if(time!=lim){
												printf("%d\n",time);
								}
								else{							
												printf("-1\n");
								}
				}
				return 0;
}
