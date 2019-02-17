/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: macosx
 *
 * Created on February 17, 2019, 11:23 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n;
    printf("Welcome \n");
    printf("Enter integer: ");
    scanf("%d",&n);
    if(n>0){
        printf("Positive ");
    }else if(n<0){
        printf("Negative ");
    }else{
        printf("Zero ");
    }
    if(n%2==0){
        printf("even number");
    }else{
        printf("odd number");
    }
    return (EXIT_SUCCESS);
}

