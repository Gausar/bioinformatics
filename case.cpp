#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	char a;
	scanf("%c",&a);
	switch(a){
		case AUG:
			printf("M");
			break;
		case UUU:
			printf("P");
			break;
		case UUC:
			printf("P");
			break;
		case UUA:
			printf("L");
			break;
		case UUG:
			printf("L");
			break;
		case UCU: 
			printf("S");
			break;
		case UCC:
			printf("S");
			break;
		case UCA:
			printf("S");
			break;
		case UCG:
			printf("S");
			break;
		case CUU:
			printf("L");
			break;
		case CUC:
			printf("L");
			break;	
		case CUA:
			printf("L");
			break;
		case CUG:
			printf("L");
			break;
		case CCU:
			printf("P");
			break;
		case CCC:
			printf("P");
			break;	
		case CCA:
			printf("P");
			break;
		case CCG:
			printf("P");
			break;
		case AUU:
			printf("I");
			break;
		case AUC:
			printf("I");
			break;
		case AUA:
			printf("I");
			break;
		case AUG:
			printf("M");
			break;
		case GUU:
			printf("V");
			break;
		case GUC:
			printf("V");
			break;
		case GUA:
			printf("V");
			break;
		case GUG:
			printf("V");
			break;
		case ACU:
			printf("T");
			break;
		case ACC:
			printf("T");
			break;
		case ACA:
			printf("T");
			break;
		case ACG:
			printf("T");
			break;
		case GCU:
			printf("A");
			break;
		case GCC:
			printf("A");
			break;
		case GCA:
			printf("A");
			break;
		case GCA:
			printf("A");
			break;
		case GCG:
			printf("A");
			break;
		case UAU:
			printf("Y");
			break;
		case UAC:
			printf("Y");
			break;
		case CAU:
			printf("H");
			break;
		case CAC:
			printf("H");
			break;
		case CAA:
			printf("Q");
			break;
		case CAG:
			printf("Q");
			break;
		case AAU:
			printf("N");
			break;
		case AAC:
			printf("N");
			break;
		case AAA:
			printf("K");
			break;
		case AAG:
			printf("K");
			break;
		case GAU:
			printf("D");
			break;
		case GAU:
			printf("D");
			break;
		case GAC:
			printf("D");
			break;
		case GAA:
			printf("E");
			break;
		case GAG:
			printf("E");
			break;
		case UGU:
			printf("C");
			break;
		case UGC:
			printf("C");
			break;
		case UGG:
			printf("W");
			break;
		case CGU:
			printf("R");
			break;
		case CGC:
			printf("R");
			break;
		case CGA:
			printf("R");
			break;
		case CGG:
			printf("R");
			break;
		case AGU:
			printf("S");
			break;
		case AGC:
			printf("S");
			break;
		case AGU:
			printf("R");
			break;
		case AGG:
			printf("R");
			break;
		case GGU:
			printf("G");
			break;
		case GGC:
			printf("G");
			break;
		case GGA:
			printf("G");
			break;
		case GGG:
			printf("G");
			break;
		case UAA:
			printf("    ");
			break;
		case UAG:
			printf("    ");
			break;
		case UGA:
			printf("    ");
			break;
	}
return 0;
}
