#include <stdio.h>

int main(){
    //olah input
    int length;
    scanf("%d", &length);

    int arr[length];
    for(int i = 0;i < length;i++){
        scanf("%d", &arr[i]);

        
    }

    //algoritma output
    int arraybaru[length];
    int total = 0;

    for(int i = 0; i < length;i++){
        int kiri = 0;
        int kanan = 0;
        

        

        for(int j = i; j > -1; j--){

            if (j == 0){
                break;
            }
            else{
                if(arr[j-1] != -1){
                    
                    kiri += arr[j-1];
                    break;
                }
            }
    
        }   

        for(int j = i; j < length; j++){
            if (j == length -1){
                break;
            }
            else{
                if(arr[j+1] != -1){
                    kanan += arr[j+1];
                    break;
                }
            }
    
        }




        int final = 0;
        if(arr[i] == -1){
            if(kiri == 0){
                    
                    final+= kanan;
                    arr[i] = final;
                    total += final;
                }
                else if(kanan == 0){
                    
                    final += kiri;
                    arr[i] = final;
                    total += final;
                }
                else{
                    
                    final += (kiri+kanan)/2;
                    arr[i] = final;
                    total += final;
                }
        
        }

        else{
            final += arr[i];
            total += final;


        }
    }

    printf("RECOVERED ");
    for(int i = 0; i < length;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("MAX_SUM %d\n", total);


    return 0;    

        
  
        


    


    }


    
