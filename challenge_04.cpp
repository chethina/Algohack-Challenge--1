//4) One day, each little crow wanted to build a nest.
//Lady Crow wanted to build a nest of straw. Straw costs Rs.4 a bundle.
//She needs 9 bundles. How much she will spend?


#include<iostream>
using namespace std;

int main(){
    int straw_price = 4;
    int bundle_need = 9;
    int total;

    cout << "4) One day, each little crow wanted to build a nest. Lady Crow wanted to build a nest of straw. Straw costs Rs.4 a bundle. She needs 9 bundles. How much she will spend?" << endl;
    total = straw_price * bundle_need;
    cout << "Total Money spend : " << "Rs." << total;

}
