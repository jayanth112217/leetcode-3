/*Algorithm is 
 using while loop for each eleemnt 
 putting every element in the stack and checking every time an eleement there in the stack if there breaking the loop , and if not continuing it */
 char stack[50000];
int top=-1;
int isempty(){
    if(top==-1){
        return 1;
    }
    return 0;
}
int notinstack(char temp){
    int k=top;
    int flag=0;
    while(k!=-1){
        if(temp == stack[k]){
            flag=1;
            break;
        }
        k--;
    }
    if(flag==0){
        return 1;
    }
    return 0;
}
void push(char temp){
        top++;
        stack[top] = temp;
}
void pop(){
     top--;
}
int All_white_spaces(char * s){
    int i=0;
  while(s[i]!='\0'){
      if(s[i]!=NULL){
          return 0;
      }
      i++;
  }
  printf("jhonny\n");
  return 1;
}
int lengthOfLongestSubstring(char * s){
    if(All_white_spaces(s)){
      int count=0;
      int i=0;
      while(s[i]!='\0'){
          if(s[i]==""){
              count++;
          }
          i++;
      }
      if(count==0){
          return 0;
      }
      return 1;
    }
    printf("string len is %d\n",strlen(s));
   int max=0;
   int currmax=0;
   int i=0;
   int j=i;
   while(s[i]!='\0'){
       printf("Hello\n");
          j=i;
          currmax=1;
       while(s[j]!='\0'){
       if(isempty()){
          push(s[j]);
       }
       else if(notinstack(s[j])){
         push(s[j]);
         currmax++;
       }
       else{
           while(top!=-1){
               pop();
           }
           break;
       }
       j++;
       }
    if(currmax > max){
        max = currmax;
        printf("Updated max is %d\n",max);
       }
       i++;
   }
   while(top!=-1){
       top--;
   }
   return max;
}