#include<stdio.h>
void main()
{
	int i,j,k=0,loopc=1,total,p,r,c=0;
	int alloc[7][5],need[7][5],max[7][5],rsrc[5],safe[5],f[7],avail[10];
	for(i=1;i<=7;i++)
		f[i]=0;
	printf("Enter number of process(p) : ");
	scanf("%d",&p);
	printf("Enter number of resource(r) : ");
	scanf("%d",&r);
	
	printf("Enter Allocation matrix : ");
	for(i=1;i<=p;i++)
		for(j=1;j<=r;j++)
			scanf("%d",&alloc[i][j]);
	
	
	printf("Enter Max matrix : ");
	for(i=1;i<=p;i++)
		for(j=1;j<=r;j++)
			scanf("%d",&max[i][j]);
	
	printf("Enter Total number of each resource : ");
	for(j=1;j<=r;j++)
		scanf("%d",&rsrc[j]);
		
	for(j=1;j<=r;j++)
	{
		total=0;
		avail[j]=0;
		for(i=1;i<=p;i++)
			total+=alloc[i][j];
		avail[j]=rsrc[j]-total;
	}
	
	for(i=1;i<=p;i++)
		for(j=1;j<=r;j++)
			need[i][j]=max[i][j]-alloc[i][j];
	
	printf("Available : ");
	for(j=1;j<=r;j++)
		printf("%d",avail[j]);
	printf("\n\nAllocation matrix : \tMax Matrix : \t Need Matrix \n");
	for(i=1;i<=p;i++)
	{
		for(j=1;j<=r;j++)
			printf("%d",alloc[i][j]);
			printf("\t\t");
		for(j=1;j<=r;j++)
			printf("%d",max[i][j]);
			printf("\t\t");
		for(j=1;j<=r;j++)
			printf("%d",need[i][j]);
			printf("\t\t");
		printf("\n");
	}
	
	while(loopc<p && c!=p)
	{
		++loopc;
		for(i=1;i<=p;i++)
		{
			if(f[i]==0)
			{
				for(j=1;j<=r;j++)
				{
					if(need[i][j]>avail[j])
						break;
				}
				if(j==r+1)
				{
					for(j=1;j<=r;j++)
					avail[j]+=alloc[i][j];
					f[i]=1;
					++c;
					safe[k++]=i;
				}
			}
		}
	}
	if(c==p)
	{
		printf("Safe State : \n");
		for(k=0;k<p;k++)
		printf("%d->",safe[k]);
	}
	else 
		printf("No Safe State");
}

			