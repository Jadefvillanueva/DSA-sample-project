#include<iostream>
using namespace std;

class Operation{
  public: 

void findOdd (){                                     //number: 1
     int size = 0;

    cout << "You have chosen Finding the Odd Number! " << endl;
    cout << "Please enter the size of the Array: ";
    cin >> size;
    cout << endl;

    if (size <= 0) {
        cout << "Invalid array size. Exiting..." << endl;
        return;
    }

     int arr[size];
    for(int i = 0; i < size; i++ ){
        cout << "Enter array number " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << endl;
    cout << "The Odd numbers are: ";
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 != 0)
        cout << arr[i] << " ";
    }

    cout << endl;
       
}

void findEven (){                                   //Number: 2
     int size = 0;

    cout << "You have chosen Finding the Even Number! " << endl;
    cout << "Please enter the size of the Array: ";
    cin >> size;
    cout << endl;

    if (size <= 0) {
        cout << "Invalid array size. Exiting..." << endl;
        return;
    }

     int arr[size];
    for(int i = 0; i < size; i++ ){
        cout << "Enter array number " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << endl;
    cout << "The Even numbers are: ";
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0)
        cout << arr[i] << " ";
    }

    cout << endl;

}

void swapOddEven(){                                 //Number: 3
    int size = 0;

    cout << "You have chosen swapping Odd and Even Number! " << endl;
    cout << "Please enter the size of the Array: "; //Ask the user for the desired size of the array
    cin >> size;
    cout << endl;

    if (size <= 0) {
        cout << "Invalid array size. Exiting..." << endl;
        return;
    }

    int arr[size]; // used the size to declare the size of the array
    cout << "Enter "<< size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << endl;
    cout << "Original Array : "; //Display the original array first
    for(int i = 0; i < size; i++) {
         cout << arr[i] << " ";
    }
    cout << endl;


    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if (arr[i] >= 0 && arr[j] >= 0 &&
                arr[i] % 2 == 0 && arr[j] % 2 != 0) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;

                arr[j] = -arr[j];
                break;
            }
            else if (arr[i] >= 0 && arr[j] >= 0 &&
                     arr[i] % 2 != 0 &&  arr[j] % 2 == 0) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;

                arr[j] = -arr[j];
                break;
            }
        }
    }

    for(int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            arr[i] = -arr[i];
        }
    }
    
    cout << "After swapping : ";
    for(int i = 0; i < size; i++) {
         cout << arr[i] << " ";
    }

    cout << endl;

}

void bigNum(){                                      //Number: 4
    int size = 0;

    cout << "You have chosen Finding the Biggest Number! " << endl;
    cout << "Please enter the size of the Array: ";
    cin >> size;
    cout << endl;

    if (size <= 0) {
        cout << "Invalid array size. Exiting..." << endl;
        return;
    }

    int arr[size]; 
    for (int i = 0; i < size; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }

    int biggest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > biggest) {
            biggest = arr[i];
        }
    }
    
    cout << endl;
    cout << "The Biggest number in the array is: " << biggest <<endl;
    cout << endl;

}

void smallNum(){                                    //Number: 5
    int size = 0;

    cout << "Please enter the size of the Array: ";
    cin >> size;
    cout << endl;

    if (size <= 0) {
        cout << "Invalid array size. Exiting..." << endl;
        return;
    }

    int arr[size]; 
    for (int i = 0; i < size; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }

    int smallest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << endl;
    cout << "The Smallest number in the array is: " << smallest <<endl;
    cout << endl;

}

void swapBigSmall(){                                //Number: 6
    int size = 0;

    cout << "You have chosen Finding the Smallest Number! " << endl;
    cout << "Please enter the size of the Array: ";
    cin >> size;
    cout << endl;

    if (size <= 0) {
        cout << "Invalid array size. Exiting..." << endl;
        return;
    }

    int arr[size];
    cout << "Enter "<< size << " elements: " << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element number: " << i + 1 << " ";
        cin >> arr[i];
    }

    int big_num = arr[0];
    int small_num = arr[0];
    int big_num_pos = 0;
    int small_num_pos = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] > big_num) {
            big_num = arr[i];
            big_num_pos = i;
        }
        if (arr[i] < small_num) {
            small_num = arr[i];
            small_num_pos = i;
        }
    }

    cout << endl;
    cout << "\nBiggest element: " << big_num << endl;
    cout << "Smallest element: " << small_num << endl;

    cout << "\nOriginal array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    int temp = arr[small_num_pos];
    arr[small_num_pos] = arr[big_num_pos];
    arr[big_num_pos] = temp;

    cout <<"\nAfter Swapping: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}

void delNthElement(){                               //Number: 7
    int arraySize;

    cout << "You have chosen Deleting an Element in an Array! " << endl;
    cout << "Enter the number of elements in the array: ";
    cin >> arraySize;
    cout << endl;

    if (arraySize <= 0) {
        cout << "Invalid array size. Exiting..." << endl;
        return;
    }

    int myArray[arraySize];
    cout << "Enter " << arraySize << " elements: ";
    for (int i = 0; i < arraySize; ++i) {
        cin >> myArray[i];
    }

    cout << endl;
    cout << "Original Array: ";
    for (int i = 0; i < arraySize; ++i) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    int n;
    cout << endl;
    cout << "Enter the index of the element you want to delete: ";
    cin >> n;

    if (n >= 0 && n < arraySize) {
        for (int i = n; i < arraySize - 1; ++i) {
            myArray[i] = myArray[i + 1];
        }
        arraySize--;

        cout << endl;
        cout << "Updated Array: ";
        for (int i = 0; i < arraySize; ++i) {
            cout << myArray[i] << " ";
        }
        cout << endl;
        
    } else {
        cout << "Invalid index. No element deleted." << endl;
    }


}

void insertElem(){                                  //Number: 8
    int size = 0;

    cout << "You have chosen Inserting an Element in an Array! " << endl;
    cout << "Please enter the size of the Array: ";
    cin >> size;
    cout << endl;

    if (size <= 0) {
        cout << "Invalid array size. Exiting..." << endl;
        return;
    }

    int arr[size];
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter array number " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << endl;
    cout << "Original Array : ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int element;
    int position;

    cout << endl;
    cout << "Enter the element to insert: ";
    cin >> element;

    cout << endl;
    cout << "Enter the position to insert (0 to " << size << "): ";
    cin >> position;

    if (position < 0 || position > size) {
        cout << "Invalid position. Exiting..." << endl;
        return;
    }

    // Shift elements to make space for the new element
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    size++; // Increase the array size

    cout << endl;
    cout << "After inserting " << element << " at position " << position << ": ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


}

void delDiv3(){                                     //Number: 9
    int size = 0;

    cout << "You have chosen Deleting an Element Divisible by 3! " << endl;
    cout << "Please enter the size of the Array: ";
    cin >> size;
    cout << endl;

    if (size <= 0) {
        cout << "Invalid array size. Exiting..." << endl;
        return;
    }

    int arr[size];
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter array number " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << endl;

    cout << "Original Array : ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int newSize = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 3 != 0) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    cout << "After removing elements divisible by 3 : ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


}

void delInputUsr(){                                 //Number: 10
    
    int arr[100];
    int n;
    int divisor;
    int newSize = 0;
    
    cout << "You have chosen Deleting an Element Inputed by User! " << endl;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << endl;


    if (n <= 0) {
        cout << "Invalid array size. Exiting..." << endl;
        return;
    }

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << endl;


    cout << "Enter the divisor: ";
    cin >> divisor;

    for (int i = 0; i < n; i++) {
        if (arr[i] % divisor != 0) {
            arr[newSize++] = arr[i];
        }
    }

    cout << "Updated array: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}


};