#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  

    while (t--) {
       
     int  a,b,x,y,sum1, sum2;

     cin >> a >> b >> x >> y;
     int d= (b-a)/2;

     
   
     if (a<b){
        if((b-a)%2 ==0){
        sum1 = (b-a)*x;
        sum2= d*x + d*y;
        } else {

            if (a%2 ==0){
                      
        sum1 = (b-a)*x;
        sum2= d*x + (d+1)*y;  
            } else {
        sum1 = (b-a)*x;
        sum2= (d+1)*x + d*y;    
            }
        }

        if (sum1 < sum2){
            cout << sum1 << endl;
        } else {
            cout << sum2 << endl;
        }

     
     }    else if (a==b){
            cout << 0 << endl;
        }


        else {
        if((a-b)< 2){
           if(a%2!=0){
            cout << y << endl;
           } else {
            cout << -1 << endl;
           }

        } else {
            cout << -1 << endl;
        }

     }
     
    }



    return 0;  
}
