//5) Lord crow wanted to build a nest of twigs.
//Each bundle of twigs weighs 50 grams.
//Lord crow needs 12 bundles.
//How much will they weigh?


#include<iostream>
using namespace std;

int main(){
    int weight_twigs = 50;
    int bundle_need = 12;
    int total;

    cout << "5) Lord crow wanted to build a nest of twigs. Each bundle of twigs weighs 50 grams. Lord crow needs 12 bundles. How much will they weigh?" << endl;
    total = weight_twigs * bundle_need;
    cout << "Total Weight : " << total <<"g" ;

    return 0;
}
