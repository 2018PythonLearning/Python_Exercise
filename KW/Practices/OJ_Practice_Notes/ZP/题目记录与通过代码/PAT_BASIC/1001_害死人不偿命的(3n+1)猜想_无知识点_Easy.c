//练习题吧，如果需要记录一些题解，请写在这里~~~

#include <stdio.h>

int main(){
	int i, j, k;
	int num;
	while(scanf("%d", &num) != EOF){
		k = 0;
		while(num != 1){
			if(num % 2 == 0)
				num /= 2;
			else
				num = (3 * num + 1) / 2;
			k++;
		}
		printf("%d\n", k);
	}
	return 0;
}
