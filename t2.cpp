// Joona Saario
//vko 37 t2


#include<iostream>
using namespace std;
int main()
{
float hinta, ale;
cout << "Syota alkuperainen hinta (euroa) ";
cin >> hinta;
cout << "Syota aleprosentti ";
cin >> ale;
cout << "Alennettu hinta on: " << (hinta - hinta * ale/100) << " euroa" << endl;

return 0;
}
