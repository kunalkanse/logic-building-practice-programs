package grooming;

public class Program254_MoveAll_ZeroesToEnd {

    private static int zeroCount = 0;

    public static void main(String[] args) {
        int[] arr = {8,10,0,11,0,0,12,15,0,10};

        for(int i = 1; i < arr.length-zeroCount; i++){
            System.out.print("element");
            if(arr[i-1] == 0){
                System.out.println(" Zero");
                shift(arr, i);
                i--;
            }
        }

        for(int e : arr){
            System.out.print(e + "\t");
        }
    }

    private static void shift(int[] arr, int index){
        for (int i = index; i < arr.length; i++) {
            arr[i-1] = arr[i];
            System.out.println("Here");
        }

        arr[arr.length-1] = 0;
        zeroCount++;

    }
}
