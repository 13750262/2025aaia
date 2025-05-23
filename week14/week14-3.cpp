//week14-3.cpp
//uva11063: b2-sequence part1
#include <stdio.h>
int main()
{

	int a[100];
	int N, t=1;
	while( scanf("%d", &N)==1){
		for(int i=0; i<N; i++){
			scanf("%d",&a[i]);
		}

		printf("Case #%d: It is a B2-Sequence.\n\n", t);
		t++;

	}
}
