/*************************
 * Автор: Смушков Кирилл *
 * Вариант: 12           *
 *                       *  
 *************************/

#include <iostream>
using namespace std;

int main() {
   
  // n размер массива P, m размер массива G
  int nSizeArrayP, mSizeArrayG;  
  
  cout << " nSizeArrayP: ";
  cin >> nSizeArrayP;

  // Создаем массив P фиксированного размера
  int arrayP[100];

  // Ввод элементов массива P
  cout << " Введите " << nSizeArrayP << " элементов массива P:" << endl;
  for (int sizeIndex = 0; sizeIndex < nSizeArrayP; ++sizeIndex) {
    cin >> arrayP[sizeIndex];
  }
    
  cout << " mSizeArrayG: ";
  cin >> mSizeArrayG;

  // Создаем массив P фиксированного размера
  int arrayG[100];

  // Ввод элементов массива G
  cout << " Введите " << mSizeArrayG << " элементов массива G:" << endl;
  for (int sizeIndex = 0; sizeIndex < mSizeArrayG; ++sizeIndex) {
    cin >> arrayG[sizeIndex];
  }

  /// Объявляем переменные для суммы квадратов
  int sumArrayP = 0;
  int sumArrayG = 0;

  // Вычисляем сумму квадратов элементов массива P
  for (int sizeIndex = 0; sizeIndex < nSizeArrayP; ++sizeIndex) {
    sumArrayP += arrayP[sizeIndex] * arrayP[sizeIndex];
  }

  // Вычисляем сумму квадратов элементов массива G
  for (int sizeIndex = 0; sizeIndex < mSizeArrayG; ++sizeIndex) {
    sumArrayG += arrayG[sizeIndex] * arrayG[sizeIndex];
  }

  cout << " sumArrayP: " << sumArrayP << endl;
  cout << " sumArrayG: " << sumArrayG << endl;

  return 0;
}