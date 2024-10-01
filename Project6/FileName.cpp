#include<iostream>
#include <vector>

using namespace std;

int main() {
    //Task 1

    /*vector<int> arr = { 12, 104, 81 };
    int totalSum = 0;

    for (int num : arr) {
        while (num > 0) {
            totalSum += num % 10;  
            num /= 10;             
        }
    }

    cout << "Сумма всех цифр в массиве: " << totalSum << endl;

    */

    //Task 2

    /*vector<int> arr = { -3, 5, 12, -7, 9, 0, -4 };
    int sum = 0;
    int count = 0;

    for (int num : arr) {
        if (num > 0) { 
            sum += num;
            count++;
        }
    }

    if (count > 0) {
        double average = static_cast<double>(sum) / count;
        cout << "Среднее арифметическое положительных элементов: " << average << endl;
    }
    else {
        cout << "Положительных элементов нет." << endl;
    }

    */

    //Task 3

    /*vector<int> arr = { 3, -7, 2, -15, -4, 5, -1 }; 
    int maxNegative = 0;   
    int position = -1;     

    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < 0 && (position == -1 || arr[i] > maxNegative)) {
            maxNegative = arr[i];
            position = i;
        }
    }

    if (position != -1) {
        cout << "Максимальный отрицательный элемент: " << maxNegative << endl;
        cout << "Позиция в массиве: " << position << endl;
    }
    else {
        cout << "Отрицательных элементов нет." << endl;
    }

    */

    //Task 4

    /*vector<int> arr = { 3, 5, 2, 3, 8, 3, 5, 5, 2 }; 
    int size = arr.size();

    vector<int> freq(size, 0);  
    int maxCount = 0;  
    int mostFrequent = arr[0];  

    
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        
        freq[i] = count;

        
        if (count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }

    
    cout << "Число, которое встречается чаще всего: " << mostFrequent << endl;
    cout << "Количество повторений: " << maxCount << endl;*/

    //Task  5

    /*vector<int> arr = { 4, 9, 6, 15, 3, 21, 7, 18 }; 
    int maxElement = -1;  

    
    for (int i = 1; i < arr.size(); i += 2) {
        if (arr[i] % 3 == 0) {  
            if (arr[i] > maxElement) { 
                maxElement = arr[i];
            }
        }
    }

    
    if (maxElement != -1) {
        cout << "Наибольший элемент с нечетным номером, делящийся на 3: " << maxElement << endl;
    }
    else {
        cout << "Нет элементов с нечетным номером, которые делятся на 3." << std::endl;
    }*/

    //Task 6

    /*vector<int> arr = { 5, 12, 3, 18, 7, 24 };
    int maxEven = -1;
    int minOdd = 1000;
    int maxEvenIndex = -1;
    int minOddIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            if (arr[i] > maxEven) {
                maxEven = arr[i];
                maxEvenIndex = i;
            }
        }
        else {
            if (arr[i] < minOdd) {
                minOdd = arr[i];
                minOddIndex = i;
            }
        }
    }

    if (maxEvenIndex != -1 && minOddIndex != -1) {
        swap(arr[maxEvenIndex], arr[minOddIndex]);
    }
    else {
        for (int& num : arr) {
            num = 0;
        }
    }

    cout << "Результирующий массив: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;*/

    //Task 7

    /*vector<int> arr1 = { 1, 2, 3, 4, 5 }; 
    vector<int> arr2 = { 4, 5, 6, 7, 8 }; 

    vector<int> intersection; 
    vector<int> unique; 


    for (int i = 0; i < arr1.size(); i++) {
        for (int j = 0; j < arr2.size(); j++) {
            if (arr1[i] == arr2[j]) {
                intersection.push_back(arr1[i]);
                break; 
            }
        }
    }


    for (int i = 0; i < arr1.size(); i++) {
        bool found = false;
        for (int j = 0; j < arr2.size(); j++) {
            if (arr1[i] == arr2[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            unique.push_back(arr1[i]);
        }
    }

    for (int i = 0; i < arr2.size(); i++) {
        bool found = false;
        for (int j = 0; j < arr1.size(); j++) {
            if (arr2[i] == arr1[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            unique.push_back(arr2[i]);
        }
    }


    cout << "Элементы, присутствующие в обоих массивах: ";
    for (int num : intersection) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Элементы, присутствующие только в одном массиве: ";
    for (int num : unique) {
        cout << num << " ";
    }
    cout << endl;*/
}