#include <iostream>
#include <new>
using namespace std;

int main() {
    int n=5;

    cout << "I proved that the sum of any 5 consecutive integers is always divisible by 5" << endl << endl;

    int start, end;
    cin >> start;
    cout << endl;
    cin >> end;
    cout << endl;

    unsigned int sum = 0;
    int point = start;
    bool flag = 0;

    while(point<=end)
    {
        for (int i = point; i < point + 5; i++) {
            sum += i;
        }
      
        if ((sum % 5) != 0) {
            cout<<"Not";// check
            cout << sum << endl;
            flag = 1;
        }
        
        sum = 0;
        point++;
    }

    if (flag == 1) {
        cout << "From " << start << " to " << end << ", there some sums can not be divided by 5" << endl;
    }
    else {
        cout << "From " << start << " to " << end << ", all sums can be divided by 5" << endl;
    }

    cout << "Because of this (n+n+1+n+2+n+3+n+4)=(2n+10)"<<endl<<"=5(n+2)"<<endl;

    return 0;
}
