//random_numbers.cpp

#include <iostream>  
using namespace std;  
#include   <stdlib.h>      
#include   <time.h>   

#define MIN 0    //����������ķ�Χ      
#define MAX 99  
int main()     
{   
    int i;   
    srand((unsigned)time(NULL));  
    cout<<"Ten random numbers from "<<MIN<<  
          " to "<<MAX<<" :\n"<<endl;     
    for(i=0; i<10; i++)          //���������  
    {  
        cout<<MIN + rand() % (MAX + MIN - 1)<<"\t";  //������[MIN,MXA]����
    }  
    cout<<endl;  
    return   0;     
}   

/*
�����ض���Χ�ڵ������ͨ�ñ�﹫ʽ:
ͨ�ù�ʽ��a + rand() % n �����е�a����ʼֵ��n�������ķ�Χ

Ҫȡ��[a,b)�����������ʹ��(rand() % (b-a))+ a �����ֵ��a����b���� 
Ҫȡ��[a,b]�����������ʹ��(rand() % (b-a+1))+ a �����ֵ��a��b���� 
Ҫȡ��(a,b]�����������ʹ��(rand() % (b-a))+ a + 1 �����ֵ����a��b���� 
*/