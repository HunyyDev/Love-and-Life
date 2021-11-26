#include <iostream>
//https://khmt.uit.edu.vn/wecode/truonganpn/assignment/31/131
using namespace std;


int main()
{
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    bool tre, dep, loved, giau;
    cin >> tre >> dep >> loved >> giau;

    cout << ((tre<=dep) && ((dep==loved) || (loved==true && giau==true)))
        << endl;
    return 0;
}
