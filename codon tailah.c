#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int i,j,n,m,k;

	char a[1000];
	printf("RNA daraallaa oruulaarai !\n");
	scanf("%s", a);

	printf("\n");
	m=strlen(a)/3;
	printf("codonoos uuseh amin huchliin too m = %d\n",m);
	char b[m];
	printf("amino acid : \t");
	j=0;
	for(i = 0; i < strlen(a); i = i + 3){
		if(a[i]=='U'){
			if(a[i+1]=='U'){
				if(a[i+2]=='U'){
					b[j]='F';
					j++;
				}
				if(a[i+2]=='C'){
					b[j]='F';
					j++;
				}
				if(a[i+2]=='A'){
					b[j]='L';
					j++;
				}
				if(a[i+2]=='G'){
					b[j]='L';
					j++;
				}
			}
			if(a[i+1]=='C'){
				if(a[i+2]=='U'){
					b[j]='S';
					j++;
				}
				if(a[i+2]=='C'){
					b[j]='S';
					j++;
				}
				if(a[i+2]=='A'){
					b[j]='S';
					j++;
				}
				if(a[i+2]=='G'){
					b[j]='S';
					j++;
				}
			}
			if(a[i+1]=='A'){
				if(a[i+2]=='U'){
					b[j]='Y';
					j++;
				}
				if(a[i+2]=='C'){
					b[j]='Y';
					j++;
				}
				if(a[i+2]=='A'){
					b[j]='.';
					j++;
				}
				if(a[i+2]=='G'){
					b[j]='.';
					j++;
				}
			}
			if(a[i+1]=='G'){
				if(a[i+2]=='U'){
					b[j]='C';
					j++;
				}
				if(a[i+2]=='C'){
					b[j]='C';
					j++;
				}
				if(a[i+2]=='A'){
					b[j]='.';
					j++;
				}
				if(a[i+2]=='G'){
					b[j]='W';
					j++;
				}
			}
		}
		if(a[i]=='A'){
			if(a[i+1]=='U'){
				if(a[i+2]=='U'){
					b[j]='I';
					j++;
				}
				if(a[i+2]=='C'){
					b[j]='I';
					j++;
				}
				if(a[i+2]=='A'){
					b[j]='I';
					j++;
				}
				if(a[i+2]=='G'){
					b[j]= 'M';
					j++;
				}
			}
			if(a[i+1]=='C'){
				if(a[i+2]=='U'){
					b[j]='T';
					j++;
				}
				if(a[i+2]=='C'){
					b[j]='T';
					j++;
				}
				if(a[i+2]=='A'){
					b[j]='T';
					j++;
				}
				if(a[i+2]=='G'){
					b[j]='T';
					j++;
				}
			}
			if(a[i+1]=='A'){
				if(a[i+2]=='U'){
					b[j]='N';
					j++;
				}
				if(a[i+2]=='C'){
					b[j]='N';
					j++;
				}
				if(a[i+2]=='A'){
					b[j]='K';
					j++;
				}
				if(a[i+2]=='G'){
					b[j]='K';
					j++;
				}	
			}
			if(a[i+1]=='G'){
				if(a[i+2]=='U'){
					b[j]='S';
					j++;
				}
				if(a[i+2]=='C'){
					b[j]='S';
					j++;
				}
				if(a[i+2]=='A'){
					b[j]='R';
					j++;
				}
				if(a[i+2]=='G'){
					b[j]='R';
					j++;
				}
			}
		}
		else if(a[i]=='C'){
			if(a[i+1]=='U'){
				if(a[i+2]=='U'){
					b[j]='L';
					j++;
				}
				else if(a[i+2]=='C'){
					b[j]='L';
					j++;
				}
				else if(a[i+2]=='A'){
					b[j]='L';
					j++;
				}
				else if(a[i+2]=='G'){
					b[j]='L';
					j++;
				}
				else printf("codon aldaatai bn\n");
				}
			else if(a[i+1]=='C'){
				if(a[i+2]=='U'){
					b[j]='P';
					j++;
				}
				else if(a[i+2]=='C'){
					b[j]='P';
					j++;
				}
				else if(a[i+2]=='A'){
					b[j]='P';
					j++;
				}
				else if(a[i+2]=='G'){
					b[j]='P';
					j++;
				}
				else printf("codon aldaatai bn\n");
				}
			else if(a[i+1]=='A'){
				if(a[i+2]=='U'){
					b[j]='H';
					j++;
				}
				else if(a[i+2]=='C'){
					b[j]='H';
					j++;
				}
				else if(a[i+2]=='A'){
					b[j]='Q';
					j++;
				}
				else if(a[i+2]=='G'){
					b[j]='Q';
					j++;
				}
				else printf("codon aldaatai bn\n");
				}
			else if(a[i+1]=='G'){
				if(a[i+2]=='U'){
					b[j]='R';
					j++;
				}
				else if(a[i+2]=='C'){
					b[j]='R';
					j++;
				}
				else if(a[i+2]=='A'){
					b[j]='R';
					j++;
				}
				else if(a[i+2]=='G'){
					b[j]='R';
					j++;
				}
				else printf("codon aldaatai bn\n");
				}
		}
		if(a[i]=='G'){
			if(a[i+1]=='U'){
				if(a[i+2]=='U'){
					b[j]='V';
					j++;
				}
				if(a[i+2]=='C'){
					b[j]='V';
					j++;
				}
				if(a[i+2]=='A'){
					b[j]='V';
					j++;
				}
				if(a[i+2]=='G'){
					b[j]='V';
					j++;
				}
			}
			if(a[i+1]=='C'){
				if(a[i+2]=='U'){
					b[j]='A';
					j++;
				}
				if(a[i+2]=='C'){
					b[j]='A';
					j++;
				}
				if(a[i+2]=='A'){
					b[j]='A';
					j++;
				}
				if(a[i+2]=='G'){
					b[j]='A';
					j++;
				}
			}
			if(a[i+1]=='A'){
				if(a[i+2]=='U'){
					b[j]='D';
					j++;
				}
				if(a[i+2]=='C'){
					b[j]='D';
					j++;
				}
				if(a[i+2]=='A'){
					b[j]='E';
					j++;
				}
				if(a[i+2]=='G'){
					b[j]='E';
					j++;
				}
			}
			if(a[i+1]=='G'){
				if(a[i+2]=='U'){
					b[j]='G';
					j++;
				}
				if(a[i+2]=='C'){
					b[j]='G';
					j++;
				}
				if(a[i+2]=='A'){
					b[j]='G';
					j++;
				}
				if(a[i+2]=='G'){
					b[j]='G';
					j++;
				}
			}
		}		
	}
	for(k=0;k<m;k++){
		printf("%c",b[k]);
	}
	
return 0;	
}
