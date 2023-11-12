#include<iostream>
#include<limits>
using namespace std;

class Operation{
  public: 

void findOdd() {
    int size = 0;

    cout << "You have chosen Finding the Odd Number! " << endl;
    
    // Input size with error handling
    while (true) {
        cout << "Please enter the size of the Array: ";
        cin >> size;

        if (cin.fail() || size <= 0) {
            cout << "Invalid input. Please enter a positive integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }
    cout << endl;
    int arr[size];
    for (int i = 0; i < size; i++) {
        // Input array elements with error handling
        while (true) {
            cout << "Enter array number " << i + 1 << ": ";
            cin >> arr[i];

            if (cin.fail()) {
                cout << "Invalid input. Please enter a valid integer." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                break;
            }
        }
    }

    cout << endl;
    cout << "The Odd numbers are: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0)
            cout << arr[i] << " ";
    }

    cout << endl;
}

void findEven() {
    int size = 0;

    cout << "You have chosen Finding the Even Number! " << endl;

    // Input size with error handling
    while (true) {
        cout << "Please enter the size of the Array: ";
        cin >> size;

        if (cin.fail() || size <= 0) {
            cout << "Invalid input. Please enter a positive integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }
    cout << endl;

    int arr[size];
    for (int i = 0; i < size; i++) {
        // Input array elements with error handling
        while (true) {
            cout << "Enter array number " << i + 1 << ": ";
            cin >> arr[i];

            if (cin.fail()) {
                cout << "Invalid input. Please enter a valid integer." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                break;
            }
        }
    }

    cout << endl;
    cout << "The Even numbers are: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0)
            cout << arr[i] << " ";
    }

    cout << endl;
}

void swapOddEven() {
    int size = 0;

    cout << "You have chosen swapping Odd and Even Numbers! " << endl;

    // Input size with error handling
    while (true) {
        cout << "Please enter the size of the Array: ";
        cin >> size;

        if (cin.fail() || size <= 0) {
            cout << "Invalid input. Please enter a positive integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }
    cout << endl;

    int arr[size];
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        // Input array elements with error handling
        while (true) {
            cout << "Enter array number " << i + 1 << ": ";
            cin >> arr[i];

            if (cin.fail()) {
                cout << "Invalid input. Please enter a valid integer." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                break;
            }
        }
    }

    cout << endl;
    cout << "Original Array : ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] >= 0 && arr[j] >= 0 && arr[i] % 2 == 0 && arr[j] % 2 != 0) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;

                arr[j] = -arr[j];
                break;
            } else if (arr[i] >= 0 && arr[j] >= 0 && arr[i] % 2 != 0 && arr[j] % 2 == 0) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;

                arr[j] = -arr[j];
                break;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            arr[i] = -arr[i];
        }
    }

    cout << "After swapping : ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}


void bigNum() {
    int size = 0;

    cout << "You have chosen Finding the Biggest Number! " << endl;

    // Input size with error handling
    while (true) {
        cout << "Please enter the size of the Array: ";
        cin >> size;

        if (cin.fail() || size <= 0) {
            cout << "Invalid input. Please enter a positive integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }
    cout << endl;

    int arr[size];
    for (int i = 0; i < size; i++) {
        // Input array elements with error handling
        while (true) {
            cout << "Enter number " << i + 1 << ": ";
            cin >> arr[i];

            if (cin.fail()) {
                cout << "Invalid input. Please enter a valid integer." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                break;
            }
        }
    }

    int biggest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > biggest) {
            biggest = arr[i];
        }
    }

    cout << endl;
    cout << "The Biggest number in the array is: " << biggest << endl;
    cout << endl;
}

void smallNum() {
    int size = 0;

    cout << "You have chosen Finding the Smallest Number! " << endl;

    // Input size with error handling
    while (true) {
        cout << "Please enter the size of the Array: ";
        cin >> size;

        if (cin.fail() || size <= 0) {
            cout << "Invalid input. Please enter a positive integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }
    cout << endl;

    int arr[size];
    for (int i = 0; i < size; i++) {
        // Input array elements with error handling
        while (true) {
            cout << "Enter number " << i + 1 << ": ";
            cin >> arr[i];

            if (cin.fail()) {
                cout << "Invalid input. Please enter a valid integer." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                break;
            }
        }
    }

    int smallest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << endl;
    cout << "The Smallest number in the array is: " << smallest << endl;
    cout << endl;
}

void swapBigSmall() {
    int size = 0;

    cout << "You have chosen Swapping The Biggest and Smallest Integer in The Array! " << endl;

    // Input size with error handling
    while (true) {
        cout << "Please enter the size of the Array: ";
        cin >> size;

        if (cin.fail() || size <= 0) {
            cout << "Invalid input. Please enter a positive integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }
    cout << endl;

    int arr[size];
    cout << "Enter " << size << " elements: " << endl;
    for (int i = 0; i < size; i++) {
        // Input array elements with error handling
        while (true) {
            cout << "Element number: " << i + 1 << " ";
            cin >> arr[i];

            if (cin.fail()) {
                cout << "Invalid input. Please enter a valid integer." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                break;
            }
        }
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

    cout << "\nAfter Swapping: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void delNthElement() {
    int arraySize;

    cout << "You have chosen Deleting an Element in an Array! " << endl;

    // Input arraySize with error handling
    while (true) {
        cout << "Enter the number of elements in the array: ";
        cin >> arraySize;

        if (cin.fail() || arraySize <= 0) {
            cout << "Invalid input. Please enter a positive integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }
    cout << endl;

    int myArray[arraySize];
    cout << "Enter " << arraySize << " elements: ";

    // Input array elements with error handling
    for (int i = 0; i < arraySize; ++i) {
        while (true) {
            cin >> myArray[i];

            if (cin.fail()) {
                cout << "Invalid input. Please enter a valid integer." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                break;
            }
        }
    }

    cout << endl;
    cout << "Original Array: ";
    for (int i = 0; i < arraySize; ++i) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    int n;

    // Input index to delete with error handling
    while (true) {
        cout << endl;
        cout << "Enter the index of the element you want to delete: ";
        cin >> n;

        if (cin.fail() || n < 0 || n >= arraySize) {
            cout << "Invalid index. Please enter a valid index." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }

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
}

void insertElem() {
    int size = 0;

    cout << "You have chosen Inserting an Element in an Array! " << endl;

    // Input size with error handling
    while (true) {
        cout << "Please enter the size of the Array: ";
        cin >> size;

        if (cin.fail() || size <= 0) {
            cout << "Invalid input. Please enter a positive integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }
    cout << endl;

    int arr[size];
    cout << "Enter " << size << " elements:" << endl;

    // Input array elements with error handling
    for (int i = 0; i < size; i++) {
        while (true) {
            cout << "Enter array number " << i + 1 << ": ";
            cin >> arr[i];

            if (cin.fail()) {
                cout << "Invalid input. Please enter a valid integer." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                break;
            }
        }
    }

    cout << endl;
    cout << "Original Array : ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int element;
    int position;

    // Input element to insert with error handling
    while (true) {
        cout << endl;
        cout << "Enter the element to insert: ";
        cin >> element;

        if (cin.fail()) {
            cout << "Invalid input. Please enter a valid integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    // Input position to insert with error handling
    while (true) {
        cout << endl;
        cout << "Enter the position to insert (0 to " << size << "): ";
        cin >> position;

        if (cin.fail() || position < 0 || position > size) {
            cout << "Invalid position. Please enter a valid position." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
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


void delDiv3() {
    int size = 0;

    cout << "You have chosen Deleting an Element Divisible by 3! " << endl;

    // Input size with error handling
    while (true) {
        cout << "Please enter the size of the Array: ";
        cin >> size;

        if (cin.fail() || size <= 0) {
            cout << "Invalid input. Please enter a positive integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }
    cout << endl;

    int arr[size];
    cout << "Enter " << size << " elements:" << endl;

    // Input array elements with error handling
    for (int i = 0; i < size; i++) {
        while (true) {
            cout << "Enter array number " << i + 1 << ": ";
            cin >> arr[i];

            if (cin.fail()) {
                cout << "Invalid input. Please enter a valid integer." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                break;
            }
        }
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

void delInputUsr() {
    int arr[100];
    int n;
    int divisor;
    int newSize = 0;

    cout << "You have chosen Deleting an Element Divisible by the Integer Inputed by The User! " << endl;

    // Input n with error handling
    while (true) {
        cout << "Enter the number of elements: ";
        cin >> n;

        if (cin.fail() || n <= 0) {
            cout << "Invalid input. Please enter a positive integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }
    cout << endl;

    cout << "Enter " << n << " elements:" << endl;

    // Input array elements with error handling
    for (int i = 0; i < n; i++) {
        while (true) {
            cin >> arr[i];

            if (cin.fail()) {
                cout << "Invalid input. Please enter a valid integer." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                break;
            }
        }
    }
    cout << endl;

    // Input divisor with error handling
    while (true) {
        cout << "Enter the divisor: ";
        cin >> divisor;

        if (cin.fail()) {
            cout << "Invalid input. Please enter a valid integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }

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