//link tham khảo:
void heapSort(int arr[], int n){
    
    // vun dong tu duoi len len de thanh heap
    for(int i = n/2 - 1; i>=0; i--)   // i chạy từ n/2 - 1 về 0 sẽ có n/2 đỉnh
        heapify(arr,n, i);   // Vun từng đỉnh
    
    // Vòng lặp để thực hiện vun đống và lấy phần tử
    for(int j = n-1 ; j>0; j--){   // chạy hết j == 1 sẽ dừng
                // mỗi lần j - 1, tương đương với k xét phần tử cuối 
        swap(arr[0], arr[j] );  // đổi chỗ phần tử lớn nhất
             heapify(arr, j, 0);    // vun lại đống, 
    }
}
