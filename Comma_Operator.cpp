#include <iostream>

using namespace std;

main(){
    int i, j;
    j =10;
    // i = (j++, j + 100, 999+j);
    i = j++, j + 100, 999+j;
    /*j is icremeted first and then added to 999*/
    cout << i;
    // cout <<" line 2: "<<i <<endl;
    return 0;
}