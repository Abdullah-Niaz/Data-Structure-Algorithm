import java.lang.Math;
class ShellSort {
    public void sort(int array[]) {
      int n = array.length;
      for (int gap = n / 2; gap > 0; Math.ceil(gap /= 2)) {
      // for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
        //   System.out.print(gap);
          int key = array[i];
          int j = i;
          while (j >= gap && array[j - gap] > key) {
            array[j] = array[j - gap];
            j -= gap;
          }
          array[j] = key;
        }
      }
    }
  }
  

public class code
{
	public static void main(String[] args) {
	    int A[] = {9,5,16,8,13,6,12,10,4,2,3};
	    ShellSort s = new ShellSort();
	    for(int i = 0 ; i < 11 ; i++){
	        System.out.print(A[i] + " ");
	    }
	    s.sort(A);
	    System.out.println();
	    for(int i = 0 ; i < 11 ; i++){
	        System.out.print(A[i] + " ");
	    }
	}
}
