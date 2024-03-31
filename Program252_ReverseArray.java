package grooming;

public class Program252_ReverseArray {
    public static void main(String[] args) {
        int[] arr = {10,20};

        reverse(arr);

        for (int e : arr) {
            System.out.print(e +"\t");
        }
    }

    private static void reverse(int arr[]){
        int temp = 0;

        for (int i = 0; i < arr.length/2; i++) {
            temp = arr[i];
            arr[i] = arr[arr.length-i-1];
            arr[arr.length-i-1] = temp;
        }
    }
}
