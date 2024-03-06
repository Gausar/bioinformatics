#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void rna(char a[], int n);
void print(char a[], int n);
void convert(char a[], int n, char b[]);

int main(){
    char *a;
    int n;
    a = (char *) malloc(n * sizeof(char));
    FILE *fin = NULL;
        fin = fopen("codon.txt", "r");
        if (!fin) {
                printf("input file error!\n");
                exit(0);
        }
        fscanf(fin, "%s", a);
        fclose(fin);
    printf("file unshaad duuslaa\n");
    n = strlen(a);
    int m = strlen(a)/3;
    char b[m];
    rna(a, n);
    print(a, n);
    convert(a, n, b);
    print(b, m);
    free(a);
    return 0;
}
void rna(char a[], int n){
    int i;
    for(i = 0; i < n; i++){
        if(a[i] == 'A'){
            a[i] = 'A';
        }
        if(a[i] == 'C'){
            a[i] = 'C';
        }
        if(a[i] == 'G'){
            a[i] = 'G';
        }
        if(a[i] == 'T'){
            a[i] = 'U';
        }
    }
    printf("\nRNA daraalal bolgoloo : \n");
}

void print(char a[], int n){
    for(int i = 0; i < n; i++){
        printf("%c", a[i]);
    }
}
void convert(char a[], int n, char b[]){
    int j = 0;
    for(int i = 0; i < n; i = i + 3){
        if((a[i] == 'U' && a[i + 1] == 'U' && a[i + 2] == 'U') || (a[i] == 'U' && a[i + 1] == 'U' && a[i + 2] == 'C')){
            b[j] = 'F';
            j++;
        }
        if((a[i] == 'U' && a[i + 1] == 'U' && a[i + 2] == 'A') || (a[i] == 'U' && a[i + 1] == 'U' && a[i + 2] == 'G')){
            b[j] = 'L';
            j++;
        }
        if((a[i] == 'U' && a[i + 1] == 'C') && (a[i + 2] == 'U' || a[i + 2] == 'C' || a[i + 2] == 'A' || a[i + 2] == 'G')){
            b[j] = 'S';
            j++;
        }
        if((a[i] == 'U' && a[i + 1] == 'A') && (a[i + 2] == 'U' || a[i + 2] == 'C')){
            b[j] = 'Y';
            j++;
        }
        if((a[i] == 'U' && a[i + 1] == 'A') && (a[i + 2] == 'A' || a[i + 2] == 'G')){
            b[j] = '*';
            j++;
        }
        if((a[i] == 'U' && a[i + 1] == 'G') && (a[i + 2] == 'U' || a[i + 2] == 'C')){
            b[j] = 'C';
            j++;
        }
        if((a[i] == 'U' && a[i + 1] == 'G' && a[i + 2] == 'A')){
            b[j] = '*';
            j++;
        }
        if((a[i] == 'U' && a[i + 1] == 'G' && a[i + 2] == 'G')){
            b[j] = 'W';
            j++;
        }
        if((a[i] == 'C' && a[i + 1] == 'U') && (a[i + 2] == 'U' || a[i + 2] == 'C' || a[i + 2] == 'A' || a[i + 2] == 'G')){
            b[j] = 'L';
            j++;
        }
        if((a[i] == 'C' && a[i + 1] == 'C') && (a[i + 2] == 'U' || a[i + 2] == 'C' || a[i + 2] == 'A' || a[i + 2] == 'G')){
            b[j] = 'P';
            j++;
        }
        if((a[i] == 'C' && a[i + 1] == 'A') && (a[i + 2] == 'U' || a[i + 2] == 'C')){
            b[j] = 'H';
            j++;
        }
        if((a[i] == 'C' && a[i + 1] == 'A') && (a[i + 2] == 'A' || a[i + 2] == 'G')){
            b[j] = 'Q';
            j++;
        }
        if((a[i] == 'C' && a[i + 1] == 'G') && (a[i + 2] == 'U' || a[i + 2] == 'C' || a[i + 2] == 'A' || a[i + 2] == 'G')){
            b[j] = 'R';
            j++;
        }
        if((a[i] == 'A' && a[i + 1] == 'U') && (a[i + 2] == 'U' || a[i + 2] == 'C' || a[i + 2] == 'A')){
            b[j] = 'I';
            j++;
        }
        if(a[i] == 'A' && a[i + 1] == 'U' && a[i + 2] == 'G'){
            b[j] = 'M';
            j++;
        }
        if((a[i] == 'A' && a[i + 1] == 'C') && (a[i + 2] == 'U' || a[i + 2] == 'C' || a[i + 2] == 'A' || a[i + 2] == 'G')){
            b[j] = 'T';
            j++;
        }
        if((a[i] == 'A' && a[i + 1] == 'A') && (a[i + 2] == 'U' || a[i + 2] == 'C')){
            b[j] = 'N';
            j++;
        }
        if((a[i] == 'A' && a[i + 1] == 'A') && (a[i + 2] == 'A' || a[i + 2] == 'G')){
            b[j] = 'K';
            j++;
        }
        if((a[i] == 'A' && a[i + 1] == 'G') && (a[i + 2] == 'U' || a[i + 2] == 'C')){
            b[j] = 'S';
            j++;
        }
        if((a[i] == 'A' && a[i + 1] == 'G') && (a[i + 2] == 'A' || a[i + 2] == 'G')){
            b[j] = 'R';
            j++;
        }
        if((a[i] == 'G' && a[i + 1] == 'U') && (a[i + 2] == 'U' || a[i + 2] == 'C' || a[i + 2] == 'A' || a[i + 2] == 'G')){
            b[j] = 'V';
            j++;
        }
        if((a[i] == 'G' && a[i + 1] == 'C') && (a[i + 2] == 'U' || a[i + 2] == 'C' || a[i + 2] == 'A' || a[i + 2] == 'G')){
            b[j] = 'A';
            j++;
        }
        if((a[i] == 'G' && a[i + 1] == 'A') && (a[i + 2] == 'U' || a[i + 2] == 'C')){
            b[j] = 'D';
            j++;
        }
        if((a[i] == 'G' && a[i + 1] == 'A') && (a[i + 2] == 'A' || a[i + 2] == 'G')){
            b[j] = 'E';
            j++;
        }
        if((a[i] == 'G' && a[i + 1] == 'G') && (a[i + 2] == 'U' || a[i + 2] == 'C' || a[i + 2] == 'A' || a[i + 2] == 'G')){
            b[j] = 'G';
            j++;
        }
    }
    printf("\nconvert duuslaa : \n");
}