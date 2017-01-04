
void merge(int arr[], int low, int middle, int high) {
    int size = high - low + 1;
    int* temp = new int[size];
    int i = low;
    int j = middle + 1;
    int k = 0;

    while (i <= middle && j <= high) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    // copy any remaining items on the left
    while (i <= middle) {
        temp[k] = arr[i];
        k++;
        i++;
    }

    // copy any remaining items on the right
    while (j <= high) {
        temp[k] = arr[j];
        k++;
        j++;
    }

    for (int x = 0; x < size; x++) {
        arr[low + x] = temp[x];
    }

    delete[] temp;
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int middle = (left + right) / 2;
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}
