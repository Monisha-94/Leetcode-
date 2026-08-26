/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char** answer=malloc(n*sizeof(char*));
    *returnSize=n;
    for(int i=0;i<n;i++) {
    answer[i]=malloc(9*sizeof(char));
    if((i+1)%3==0 && (i+1)%5==0)
       strcpy(answer[i],"FizzBuzz");
        else if((i+1)%3==0)
        strcpy(answer[i],"Fizz");
        else if((i+1)%5==0)
        strcpy(answer[i],"Buzz");
        else 
        sprintf(answer[i], "%d" ,i+1);
    }
return answer;
}