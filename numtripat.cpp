#include <iostream>
#include <string>

void numPatterns(int n);
void pyramidNum(int n);

int main()
{
  pyramidNum(9);
  
  numPatterns(7);

  return 0;
}







void pyramidNum(int n)
{

    for(int i=1; i<=n; i++)
    {
        for(int k=n; k>=i; k--)
            cout<<" ";

        for(int j=1; j<=i; j++)
            cout<<i<<" ";

        cout<<endl;
    }

}



void numPatterns(int n)
{

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j<=i)
                cout<<(j+1);
        }

        cout<<endl;
    }

    cout<<endl;

    for(int i=n; i>0; i--)
    {
        for(int j=0; j<n; j++)
        {
            if(i>j)
                cout<<(j+1);
        }

        cout<<endl;
    }


    cout<<endl;

    for(int i=0; i<=n; i++)
    {
        for(int j=n; j>0; j--)
        {
            if(i+1<=j)
                cout<<" ";
            else
                cout<<j;
        }


        cout<<endl;
    }


    cout<<endl;

    //last
    for(int row=0; row<n; row++)
    {
        for(int col=0; col<n; col++)
        {
            
            ((col - row +1) >0) ? cout <<(col-row+1): cout<< ' ';

        }


        cout<<endl;
    }
}


/*
Output

         1
        2 2
       3 3 3
      4 4 4 4
     5 5 5 5 5
    6 6 6 6 6 6
   7 7 7 7 7 7 7
  8 8 8 8 8 8 8 8
 9 9 9 9 9 9 9 9 9



1
12
123
1234
12345
123456
1234567

1234567
123456
12345
1234
123
12
1

      1
     21
    321
   4321
  54321
 654321
7654321

1234567
 123456
  12345
   1234
    123
     12
      1


*/
