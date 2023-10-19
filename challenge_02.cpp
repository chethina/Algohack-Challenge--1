#include<iostream>
using namespace std;
//2) Each little Crow wanted to build a house. Crow #1 wanted to build a house of straw. Straw costs Rs.4 a bundle.
//He needs 9 bundles. How much will he spend?
int main(){
    int straw_price = 4;
    int bundle_need = 9;
    int total;

    cout << "2) Each little Crow wanted to build a house. Crow #1 wanted to build a house of straw. Straw costs Rs.4 a bundle. He needs 9 bundles. How much will he spend?" << endl;
    total = straw_price * bundle_need;
    cout << "Total Money spend : " << "Rs." << total;

}
