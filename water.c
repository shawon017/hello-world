#include <stdio.h>
#include <limits.h>
#include <cstdlib>
int GetInt(void){
    
    
    while(1){
        char * line = (char*)malloc(10 * sizeof(char));
        fgets(line, 100, stdin);
        printf("%s", line);
        if(line == NULL){
            return INT_MAX;
        }       
        char c; int m;
        if(sscanf(line,"%d %c", &m, &c)==1){
            // free(line);
            line = NULL;
            return m;
        }
        else{
            // free(line);
            line = NULL;
            printf("retry: ");
        }
    }
}
int main(void){
    int ouncesPerMinute= 1.5 * 128; //1.5 lit gallon times 128 ounces
    int oneBottle = 16; // 16 ounce
    int oneMinuteShower = ouncesPerMinute / oneBottle;
    int minute;
    
    printf("minutes: ");
    minute = GetInt();
    
    printf("bottles: %d\n", minute*oneMinuteShower);
		getchar();
		return 0;
    
}					
					