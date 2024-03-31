package grooming;

public class Program250_Array_2ndLargest {
    public static void main(String[] args) {
        int arr[] = {8,47,25,5,32,45,65};

        int first = arr[0];
        int second = -1;

        for (int i = 1; i < arr.length; i++) {
            if(arr[i] > first){
                second = first;
                first = arr[i];
            }else if(arr[i] > second && arr[i] < first){
                second = arr[i];
            }
        }

        if(second != -1){
            System.out.println(second);
        }else {
            System.out.println("There is no second largest element");
        }
    }
}
