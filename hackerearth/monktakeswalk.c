#include <stdio.h>
#define MAX 100007
 
int isVowel(char ch)
{
	if(ch >= 97)
	{
		ch -= 32;
	}
	if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	{
		return 1;
	}
	return 0;
}
 
int main()
{
    int T;
    char str[MAX];
    scanf("%d", &T);
    while(T--)
    {
    	scanf("%s", str);
    	int i, len = strlen(str), count = 0;
    	for(i=0;i<len;++i)
    	{
    		if(isVowel(str[i]))
    		{
    			++count;
    		}
    	}
    	printf("%d\n", count);
    }
    return 0;
}
