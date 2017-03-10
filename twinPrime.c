#include <stdio.h>
#include <stdlib.h>

#define limit 100
int main()
{
    unsigned long long int i,j;
		int *primes;
		int z = 1;

		primes = (int*)malloc(sizeof(int) * limit);
		for(i = 2; i < limit; i++)
			primes[i] = 1;

		for(i = 2; i < limit; i++)
			if(primes[i])
				for(j = i; i*j < limit; j++)
					primes[i * j] = 0;
	int n1;
	scanf("%d", &n1);
	int prime[1001];
	int k = 1;
	for(i = 1; i <= n1; i++){
		if(primes[i]){
			k = i;
										/*i++;*/
										/*for(int p = i; p < n1; p++){*/
			if(((k+2) <= n1) && primes[k+2]){
				if(abs((k+2) - i) == 2){
					printf("Twin\nOrdinary\nTwin\n");
																						/*i = p;*/
					i+=2;
																				    
				}
				else{
					printf("Lonely Prime\n");
				}

			}
			else{
				printf("Lonely Prime\n");
			}
														/*}*/
		}
		else{
			printf("Ordinary\n");
		}
	}
		/*for(int j = 1; j < n1; j++){*/
		/*printf("%d",prime[j]);*/
		/*if(!primes[j]){*/
		/*printf("Ordinary\n");*/
		/*}*/
		/*else if(abs(prime[j]-prime[j+1]) == 2){*/
		/*printf("Twin\n");*/
		/*printf("Ordinary\n");*/
		/*j++;*/
		/*printf("Twin\n");*/
		/*}*/
		/*else{*/
		/*printf("Lonely Prime\n");*/
		/*}*/
		/*}*/
    return 0;
}   
