#include <iostream>
using namespace std;

bool IsPrime (int);
int getTwoValues (int, int);
int getNextPrime (int);
int getPrevPrime (int);


int getTwoValues (int begin, int end)
{
    cin >> begin >> end;
    if (begin > end)
        cin >> begin >> end;
    return begin;
    return end;
}
bool IsPrime (int begin)
{
    if (begin <= 1)
        return false;

    for (int i = 2; i< begin; i++)
        if (begin % i ==0)
            return false;
    return true;
}
int getNextPrime (int begin)
{
    int i,prime1;
    for (i = begin+1; i <99; i++)
        if (IsPrime(i))
    return prime1;

}
int getPrevPrime (int end)
{
    int i,j,crt;
    for (i = end-1; i>=1;i--){
        for (j = 2; j<i; j++)
            if (i%j==0)
                crt++;
        
        if (crt==0)
                if(i==0)
                    break;
                cout <<i;
            crt =0;
        return 0;
    }

}



