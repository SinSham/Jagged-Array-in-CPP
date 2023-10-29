#include <iostream>

using namespace std;

int main()
{   int row;
    cin>>row;
    int* col = new int[row];
    for(int i=0; i<row; i++){
        cin>>col[i];
    }
    int ** arr = new int* [row];
    
    for(int i=0; i<row; i++){
        arr[i] = new int[col[i]];
    }
    
    for(int i=0; i<row; i++){
        for(int j=0; j<col[i]; j++){
            cin>>arr[i][j];
        }
    }
    
    
    for(int i=0; i<row; i++){
        for(int j=0; j<col[i]; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}
