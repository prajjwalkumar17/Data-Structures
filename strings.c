//Sort String Characters in C
#include<stdio.h> 
#include<string.h>
int main(){
​char​ ​str​[]​ ​=​ ​"Prajjwal"​;
​char​ temp​;
​int​ i​,​ j​;
​int​ n ​=​ strlen​(​string​);
printf("Stringbeforesorting-%s\n",str[]);
​
for​(i=0;​i​<​n​-​1​;i​++)​

     ​{
     for(j=i​+1;j​<n;j++)

      ​{
​
              if​ ​(str​[​i​]​>​str​[​j​])​ ​{ 

                                    temp​=​str​[​i​]; 
                                    str​[​i​]​=str​[​j​]; 
                                    ​str​[​j​]​=temp​;
​ 
                                 } ​
 
       }
 
            }
 
  printf​(​"String after sorting - %s \n"​,​str​); 

return 0​;
}
