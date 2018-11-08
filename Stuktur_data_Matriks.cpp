#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;
int main()
{
    int x[100][100];
    int m;
    cout<<"Masukkan matriks : ";
    cin>>m;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<"["<<i<<","<<j<<"] : ";
            cin>>x[i][j];
			if(m==i+j+1)
				x[i][j]=0;
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
			cout<<" "<<x[i][j];
		}
        cout<<endl;
		}
system("pause");
}
