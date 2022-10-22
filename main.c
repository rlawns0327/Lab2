// main.c

#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>
#include "./lib/arithmetic.h"

int main(){

    void *handle;
    int (*addition)(int, int), (*subtraction)(int, int), (*multiplication)(int, int), (*division)(int, int);
    char *error;
  
    handle = dlopen("./lib/libdynamic.so", RTLD_LAZY);
    if(!handle){
    	fputs (dlerror(),stderr);
    	exit(1);
    }
    
    addition = dlsym(handle, "addition");
    if((error = dlerror()) != NULL){
    	fprintf(stderr, "%s", error);
    	exit(1);
    }
    
    subtraction = dlsym(handle, "subtraction");
    if((error = dlerror()) != NULL){
    	fprintf(stderr, "%s", error);
    	exit(1);
    }

    multiplication = dlsym(handle, "multiplication");
    if((error = dlerror()) != NULL){
    	fprintf(stderr, "%s", error);
    	exit(1);
    }
    	
    division = dlsym(handle, "division");
    if((error = dlerror()) != NULL){
    	fprintf(stderr, "%s", error);
    	exit(1);
    }
    	 
    
    int x, y;
   
    printf("input two numbers \n");
    scanf("%d %d",&x, &y);

    printf("%d + %d = %d\n",x, y, addition(x,y));
    printf("%d - %d = %d\n",x, y, subtraction(x,y));
    printf("%d * %d = %d\n",x, y, multiplication(x,y));
    printf("%d / %d = %d\n",x, y, division(x,y));

    dlclose(handle);

    return 0;
}
