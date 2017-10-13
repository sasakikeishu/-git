#include <stdio.h>
int main(void){
    
    int a[3],b[3],c[3],d[3],e[3];
    int i,j,k,h,l,s,u;
    //int A,B,C,D,E;
    int A[5];
    int t=0;
    
    for(i=0;i<3;i++){
        
        scanf("%d",&a[i]);
    }
    for(j=0;j<3;j++){
        
        scanf("%d",&b[j]);
    }
    for(k=0;k<3;k++){
        
        scanf("%d",&c[k]);
    }
    for(h=0;h<3;h++){
        
        scanf("%d",&d[h]);
    }
    for(l=0;l<3;l++){
        
        scanf("%d",&e[h]);
    }
    
    A[0] = a[0]-a[1];
    A[1] = b[0]-b[1];
    A[2] = c[0]-c[1];
    A[3] = d[0]-d[1];
    A[4] = e[0]-e[1];
    
    for(s=0;s<5;s++){
        
        if(A[s]>t){
            
            t = A[s];
        }
    }
    for(s=0;s<5;s++){
    
        if(A[s]==t){
            
            u = s;
        }
    }
    
    printf("%c %d\n",62+s,t);
    
    return 0;
}
