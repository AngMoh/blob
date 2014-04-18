#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    int i, n, a , b , max, diff;
    float avg;
    
    ifstream infile("/Users/niels/Desktop/groar/groar/data.txt");
    ofstream outfile("/Users/niels/Desktop/groar/groar/output.txt");
    
    avg=0;
    max=0;
   
    
    infile>>n;
    
    for(i=1;i<=n;i++)
    {
        infile>>a>>b;
        if(a>b)
            diff=a-b;
        else
            diff=b-a;
        if(diff>max)
            max=diff;
        avg = avg + diff;
    }

    avg=avg/n;

    outfile<<"The maximum goal difference is:"<<max<<endl;
    outfile<<"The average goal difference is rounded off to an integer is :"<<avg<<endl;
    system("pause");
    
    return 0;
    
        
    }
    
