#include <iostream>

using namespace std;
class complex
{
    int realOne, imgOne, realTwo, imgTwo;
  public:
   int complex()
   {
    cout << "Enter the real and imaginary parts of the first number :" << endl;
    cin >> realOne >> imgOne;

   /* cout << "Enter the real and imaginary parts of the second number :" << endl;
    cin >> realTwo >> imgTwo;*/

    int realSum = realOne ;
    int imgSum = imgOne ;
    string divider = "+";

    if (imgSum > 0)
    {
        cout << "Sum : " << realSum << divider << imgSum << "i" << endl;
    }else{
        cout << "Sum : " << realSum << imgSum << "i" << endl;
    }
   }
};

int main()
{
   complex com;
   com.complex()
}
