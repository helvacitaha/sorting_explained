#include <iostream>
#define MIN_VALUE -2147483648

int main(){

    int input_array[9]={345,2,33,66,44,6567,345,9,57}; // Array that we are going to sort.
    int size_of_array=sizeof(input_array)/sizeof(input_array[0]); // Finding count of elements in array.
    int output_array_1[size_of_array]; // Array that we are going to sort from largest to smallest.
    int output_array_2[size_of_array]; // Array that we are going to sort from smallest to largest.
    int max_value=0; /* Integer that we are going to use while sorting. This is going to find the largest number in
    the array. Then we will be putting that max_value into the next output_array_1 index. Lastly we will make that index
    equal to minimum value possible so it is tested smaller in every comparison and not be included after. */
    for(int i=0;i<size_of_array;i++){ /* Codes inside of this for loop will be finding the largest number and put it
                                         to our output array's next element. So we will be doing this process times
                                         the count of elements in the array. */

        for(int j=0;j<size_of_array;j++){ // For loop to find the maximum value in the our array.

            if(input_array[j]>max_value){

                max_value=input_array[j]; /* Putting the maximum value in out integer. Over and over. In conclusion it is
                                             going to be the maximum value in the array. */

            }

        }
        for(int j=0;j<size_of_array;j++){ // Seperate for loop to check for the max_value in our array.

            if(max_value==input_array[j]){

                input_array[j]=MIN_VALUE; /* Putting the minimum value in the array element that we chose as maximum so
                                             we won't be getting that maximum value again.*/
            }

        }

        output_array_1[i]=max_value; // Putting our max_value in our output array.
        max_value=0; // making our max_value 0 again and continue.

    }

    // Inverting our array into another array.
    for(int i=1;i<size_of_array+1;i++){ /* Since we can't use (size_of_array)th element of the array (it doesn't exist),
                                           we are going to start from (size_of_array-1)th element of output_array_1
                                           and start from (1-1)th(0th) element on the other side. And they will be
                                           moving towards opposite directions. */

        output_array_2[i-1]=output_array_1[size_of_array-i];// Putting the opposite-th element of the first array into the second.

    }

    std::cout<<"Array sorted from largest to smallest: ";

    // Outputting the first array.
    for(int i=0;i<size_of_array;i++){

        std::cout<<output_array_1[i]<<' ';

    }

    std::cout<<"\n\nArray sorted from smallest to largest: ";

    // Outputting the second array.
    for(int i=0;i<size_of_array;i++){

        std::cout<<output_array_2[i]<<' ';

    }

    std::cout<<"\n\n";

    return 0;

}
