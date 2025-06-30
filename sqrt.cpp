#include <iostream>
#include <cmath>
using namespace std;


int main() {

  int i, x=120, dif, min=INT_MAX, ans;


  for (i =1; i <= x/2; i++){
      dif = i*i -x;

      if (dif ==0) {
        ans = i;
        break;
      } else {
        if (abs(dif) < min && (i*i < x)){
          min = abs(dif);
          ans = i;
        }
      }
  }
       cout << ans <<endl;

    return 0;
}


