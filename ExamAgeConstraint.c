#include <stdio.h>


int main() {
	int x, u, Y, m, i;
	scanf("%d", &u);
	
	
	for(i = 0; i < u; i++)
	{   
	    scanf("%d %d %d", &u, &Y, &m);
	    if(u<=m && m<Y)
	    {
	        printf("Yes\n");
	    }
	    else
	    {
	        printf("No\n");
	    }
	}
	
	return 0;
}

