
public class code {
    void insertionSort(int arr[], int n) {
        for (int i = 1; i < n; i++) {
            // int arr[] = {12, 11, 10, 9 , 8 , 4, 3, 2, 1};
            int key = arr[i]; // key = 11
            int j = i - 1; // j = i - 1 => 1 - 1 => 0
            while (j >= 0 && arr[j] > key) { // (j >= 0 && arr[0] > 11)
                arr[j + 1] = arr[j]; // arr[0 + 1] = arr[0]
                j--; // j = 0 - 1 => -1 // if negative while loop will become false
            }
            arr[j + 1] = key; // j = 0 => arr[0 + 1 ] = 11
        } 
    };

    public static void main(String[] args) {

        int arr[] = { 12, 11, 10, 9, 8, 4, 3, 2, 1 };
        int n = 9;
        code c = new code();
        c.insertionSort(arr, n);
        for (int i = 0; i < n; i++) {
            System.out.println(arr[i]); // print array elements
        }

    }
}
