// My written code
#include <iostream>
using namespace std;

int main() 
{
    for(int i=0;i<5;i++){
      for(int k=5;k>i+1;k--){
          cout<<" ";
        }
      for(int j=0;j<2*i+1;j++){
        cout<<"*";
      }
      cout<<endl;
    }
    
    for(int i=0;i<5;i++){
      for(int k=0;k<i;k++){
          cout<<" ";
        }
      for(int j=5*2-i;j>i+1;j--){
        cout<<"*";
      }
      cout<<endl;
    }
}


// Tutorial code
#include <iostream>
using namespace std;

int main() 
{
    int rows = 5;

    // Top half
    for (int i = 0; i < rows; i++) {
        for (int space = 0; space < rows - i - 1; space++) {
            cout << " ";
        }
        for (int star = 0; star < 2 * i + 1; star++) {
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half
    for (int i = rows - 1; i >= 0; i--) {
        for (int space = 0; space < rows - i - 1; space++) {
            cout << " ";
        }
        for (int star = 0; star < 2 * i + 1; star++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}





/*
Output:

    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
*/
