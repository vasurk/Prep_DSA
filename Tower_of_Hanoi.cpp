#include<iostream>

using namespace std;

void towerofhanoi(int n, char a_rod, char b_rod, char c_rod)
{
    if(n == 1){
        cout << "Move the disk 1 from rod " << a_rod << " to rod " << b_rod << endl;
        return;
    }

    towerofhanoi(n-1,a_rod,c_rod,b_rod);

    cout << "Move disk " << n << "from rod " << a_rod << " to rod " << b_rod << endl;

    towerofhanoi(n-1,c_rod, b_rod, a_rod);
}

int main()
{
    //number of disks
    int n = 3;

    towerofhanoi(n,'a','b','c');
    
    return 0;

}