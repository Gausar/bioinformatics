#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main(){
	int i,j,n,m,k;

	char a[] = "";
	FILE *ptr;
	char ch;
	ptr = fopen("C:\\Users\\Acer\\OneDrive - National University of Mongolia\\Documents\\hicheeltei holbootoi\\Bioinformatics\\codon.txt","r");
	
	printf("unshsan file : \n");
	do{
		ch = fgetc(ptr);
		printf("%c",ch);
		strncat(a, &ch, 1);
		
	 } while(ch!=EOF);
	fclose(ptr);
	printf("\n");
	printf("a husnegt buyu temdegt mor : \n");
	for(i=0;i<strlen(a);i++){
	 	printf("%c",a[i]);
	}
	printf("\n");
	m=strlen(a)/3;
	printf("codonoos uuseh amin huchliin too m = %d\n",m);
	char b[m];
	printf("amino acid : \n");
	j=0;
	b[0] = 'D';
	
	printf("%c\n", b[0]);
	
	i = 0;
	if(a[i] == 85 && a[i+1] == 85){
			printf("$$$$\n");
	}
	
	for(i=0;i<strlen(a);i=i+3){
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
	printf("%s", b);
	for(k=0;k<m;k++){
		printf("%c",b[k]);
	}
	
return 0;	
}
