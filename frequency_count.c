/*counting frequency of bases*/
#include<stdio.h>
#include<string.h>
int main()
{
char dna[100];
int gCount=0,cCount=0,i;
printf("enter dna sequence:");
scanf("%s",dna);
for(i=0;i<strlen(dna);i++)
{
if (dna[i]=='G')
  gCount++;
else if(dna[i]=='C')
  cCount++;
}
printf("frequency of G=%d\n",gCount);
printf("frequency of C=%d\n",cCount);
printf("GC content=%d\n",gCount+cCount);
return 0;
}
