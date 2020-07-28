#define window size =1024
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
	{
    int a,b;
    int no_tr=0;
    srand(time(NULL));
    cout << "Go-Back-N Protocol \n\n";
    cout << "Enter the number of frames : ";
    cin >> a;
   
    int i=1;

    while(i<=a)
    	{
        int x=0;
        
		for(int j=i; j<i+b && j<=a; j++)
        	{
            cout << "Sent Frame " << j << endl;
            no_tr++;
        	}
        	
        for(int j=i; j<i+b && j<=a; j++)
        	{
            int flag = rand()%2;
            
			if(!flag)
            	{
                cout << "Acknowledgment for Frame " << j << endl;
                x++;
            	}
            else
            	{
				cout << "Frame " << j << " Not Received" << endl;
                cout << "Retransmitting Window" << endl;
                break;
            	}
        	}
        	
        cout<<endl;
        i+=x;
    	}

    cout << "Total number of transmissions : " << no_tr << endl;
    return 0;
	}

