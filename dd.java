public class dd {
    public static void main(String[] args) {
        int arr[] = {1,2,4};
        int n = 3;
        int[] p = arr;
        for(int i = 0 ; i < n ; i++){
            // p[i] = p[i] + p[i+1];
            System.out.println("value: "+ arr[i] + " with address: ");
        }
    }
}
