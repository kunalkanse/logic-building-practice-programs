package grooming;

public class IndexOfLargest {
    public static void main(String[] args) {
        int []arr = {50,40,20,50,60,20,10,80};
        System.out.println("INDEX OF LARGEST ELEMENT IS "+getIndex(arr));
    }

    private static int getIndex(int []arr){
        int index = 0;

        if(arr.length > 1){
            for(int i = 1; i < arr.length; i++){
                if(arr[i] > arr[index]){
                    index = i;
                }
            }
        }

        return index;
    }
}
