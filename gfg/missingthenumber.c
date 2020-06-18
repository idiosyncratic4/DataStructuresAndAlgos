    
	//code
	int t,i,out;
	scanf("%d",&t);
    for(i=0;i<t;i++)
	{
	    int sum=0;
		int n,j;
		int total=0;
	    scanf("%d",&n);
	    //printf("%d",i);
	    int a[n];
	    for(j=1;j<n;j++)
	    {
	        scanf("%d",&a[i]);
	        sum=sum+a[i];
	    }
	    //printf("%d",sum);
    	total = ((n + 1) * (n) )/ 2;
		printf("%d\n",total-sum); 
	}
		return 0;
}
