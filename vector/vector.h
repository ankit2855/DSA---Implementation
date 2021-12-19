template<typename T>
class Vector{
    T *arr;
    int currentSize;
    int maxSize;

public :
    Vector(int max_size = 1){
        currentSize = 0;
        maxSize = max_size;
        arr = new T[maxSize];
    }

  const int size(){
        return currentSize;
    }

   const int capacity(){
        return maxSize;
    }

    void push_back(T data){
        if(maxSize == currentSize){
            maxSize *= 2;
            T * oldArr = arr;
            arr = new T[maxSize];
            for(int i = 0; i<currentSize; i++){
                arr[i] = oldArr[i];
            }
            delete [] oldArr;
        }
        arr[currentSize] = data;
        currentSize++;

    }

    void pop_back(){
        if(currentSize > 0)
        currentSize--;
    }

    bool isEmpty(){
        return currentSize == 0;
    }

    const T front(){
        return arr[0];
    }

    const T back(){
        return arr[currentSize - 1]; //? As currentSize points to the bucket next to last element.
    }

    const T at(int index){
        return arr[index];
    }

    const T operator[](const int index){
        return arr[index];
    }
};