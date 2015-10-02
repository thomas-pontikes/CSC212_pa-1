//
//  main.c
//  pa-1
//
//  Created by Thomas Pontikes on 10/1/15.
//  Copyright © 2015 Thomas Pontikes. All rights reserved.
//

#include "pa-1.h"

void AnswerCheck(bool a);

int main(int argc, const char * argv[]) {
   
    bool check;
    
    int n = 128;
    check = f_armstrong(n);
    AnswerCheck(check);
    
    int x = 28;
    check = f_perfect(x);
    AnswerCheck(check);
    
    
    
    int a= 0;
    int b = n;
    int answer;
        

        answer = (n/2);
        answer = pow(answer,1/3.);
        a = answer;
        b = answer;
        
    if(pow(a,3) + pow(b,3) == n){
        
            answer = pow(a,3) + pow(b,3);
        
        printf("%d \n", answer);
        
    }else{
        printf("NO ANSWER");
    }
    
}



    




void AnswerCheck(bool a){
        
        if(a == true)
            
            printf("True \n");
            
        if(a ==false)
            
            printf("False \n");
        
        
}
