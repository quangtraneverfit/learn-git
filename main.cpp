#include <iostream>

using namespace std;

int main()
{
  int inputArr[6] = {4, 6, 3, 2, 8, 1};
  int outputArr[6];
  int a = 5;
  int *b = &a;
  int inputArrLength = sizeof(inputArr) / sizeof(inputArr[0]);
  int newEle;
  for (int i = 0; i < inputArrLength; i++)
  {
    newEle = -1;
    for (int j = i; j < inputArrLength; j++)
    {
      if (inputArr[i] < inputArr[j])
      {
        newEle = inputArr[j];
        break;
      }
    }
    outputArr[i] = newEle;
  }

  cout << "tung" << endl;
  cout << "lepro" << endl;
  cout << "tao la tung" << endl;
  cout << "tao buon ngu" << endl;
  cout << "ke me may" << endl;
  cout << "tung ga " << endl;
  cout << "tung ga dep trai khoai nho " << endl;



  // for (int k = 0; k < inputArrLength; k++)
  // {
  //   cout << outputArr[k] << " ,";
  // }
  return 0;
}