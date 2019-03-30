//random_numbers.cpp

#include <iostream>  
using namespace std;  
#include   <stdlib.h>      
#include   <time.h>   

#define MIN 0    //随机数产生的范围      
#define MAX 99  
int main()     
{   
    int i;   
    srand((unsigned)time(NULL));  
    cout<<"Ten random numbers from "<<MIN<<  
          " to "<<MAX<<" :\n"<<endl;     
    for(i=0; i<10; i++)          //产生随机数  
    {  
        cout<<MIN + rand() % (MAX + MIN - 1)<<"\t";  //限制在[MIN,MXA]区间
    }  
    cout<<endl;  
    return   0;     
}   

/*
产生特定范围内的随机数通用表达公式:
通用公式：a + rand() % n ；其中的a是起始值，n是整数的范围

要取得[a,b)的随机整数，使用(rand() % (b-a))+ a （结果值含a不含b）。 
要取得[a,b]的随机整数，使用(rand() % (b-a+1))+ a （结果值含a和b）。 
要取得(a,b]的随机整数，使用(rand() % (b-a))+ a + 1 （结果值不含a含b）。 
*/