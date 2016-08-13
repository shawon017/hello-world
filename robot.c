#include <stdio.h>

int main(){
				int n;
				scanf("%d",&n);
				char s[1010];
				scanf("%s",s);
				int ans = 0;
				for(int j=0; j<n; j++){
								for(int k = j; k<n; k++){
												int x=0;int y=0;

												for(int i=j; i<k+1;i++){
																if(s[i] == 'U'){
																				++x;
																}
																else if(s[i] == 'D'){
																				--x;
																}
																else if(s[i] == 'R'){
																				++y;
																}
																else{
																				--y;
																}
												}
												if(x == 0 && y == 0){
																ans++;
												}

								}
		

				printf("%d",ans);
}






