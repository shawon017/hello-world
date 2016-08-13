#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
				long int p1,v1,p2,v2;

				scanf("%ld %ld %ld %ld", &p1, &v1, &p2, &v2);

				if(p1 == p2){
								printf("Collision");
				}
				else if((v1 > 0 && v2 > 0) && ((p2 < p1) && (v2 > v1))){
												printf("Collision");
				}
				else if((v1 > 0 && v2 > 0 ) && ((p1 < p2)&& (v1 > v2))){
												printf("Collision");
				}
				else if((v1 < 0 && v2 < 0 ) && ((p2 < p1) && (abs(v1) > abs(v2)))){

												printf("Collision");
				}
				else if((v1 < 0 && v2 < 0) && ((p1 < p2) && (abs(v2) > abs(v1)))){
								printf("Collision");
				}
				else if((v1 < 0 && v2 > 0) && ((p2 < p1))){
												printf("Collision");
				}
				else if((v2 < 0 && v1 > 0) && (p1 < p2)){
								printf("Collision");
				}
				else if((v1 == 0 && v2 > 0) && (p2 < p1)){
								printf("Collision");
				}
				else if((v2 == 0 && v1 > 0) && (p1 < p2)){
								printf("Collision");
				}
				else if((v1 == 0 && v2 < 0) && (p1 < p2)){
								printf("Collision");
				}
				else if((v2 == 0 && v1 < 0) && (p2 < p1)){
												printf("Collision");
												}
				else{
								printf("Safe");
				}

}
