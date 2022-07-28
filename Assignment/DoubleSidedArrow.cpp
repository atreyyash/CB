#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int spaces = n - 1;
    int k = 0, no = 1;
    
    for(int i=1;i<=n;i++){
        if(i <= (n / 2) + 1){
            //Spaces
            for(int j=1;j<=spaces;j++){
                cout<<" "<<" ";
            }

            //Dec no
            for(int j=no;j>0;j--){
                cout<<j<<" ";
            }

            //InBetween Spaces
            for(int j=1;j<=(2 * k - 1);j++){
                cout<<" "<<" ";
            }

            //Inc No
            if(no > 1){
                for(int j=1;j<=no;j++){
                    cout<<j<<" ";
                }
            }
            spaces-=2;
            k++; 
            no++;
        }
        else{
            if(i == n / 2 + 2){
                spaces+=2;
                k--;
                no--;
            }
            spaces+=2;
            k--;
            no--;
            //Spaces
            for(int j=1;j<=spaces;j++){
                cout<<" "<<" ";
            }

            //Dec no
            for(int j=no;j>0;j--){
                cout<<j<<" ";
            }

            //InBetween Spaces
            for(int j=1;j<=(2 * k - 1);j++){
                cout<<" "<<" ";
            }

            //Inc No
            if(no > 1){
                for(int j=1;j<=no;j++){
                    cout<<j<<" ";
                }
            }
        }
        cout<<endl;
    }

    return 0;
}