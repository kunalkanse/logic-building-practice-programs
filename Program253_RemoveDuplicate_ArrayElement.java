package grooming;

public class Program253_RemoveDuplicate_ArrayElement {

    private static int removeCount = 0;

    public static void main(String[] args) {
        int []arr = {10,10,20,20,30,40,40,50,50,50,60};

        removeDuplicate(arr);

        for (int i = arr.length-1; i > arr.length-removeCount-1 ; i--) {
            arr[i] = 0;
        }

        for(int e : arr){
            System.out.print(e + "\t");
        }

        System.out.println("\nTotal duplicate items removed : "+removeCount);

        /*

            10	20	30	40	50	60	0	0	0	0	0
            Total duplicate items removed : 5
         */

    }

    private static void removeDuplicate(int []arr){
        for (int i = 0; i < arr.length-removeCount-1; i++) {
            int count = 0;
            if(arr[i] == arr[i+1]){
                count = getCount(arr,i);
            }

//            System.out.println(count);

            if(count > 0){
                shiftArray(arr,count,i);
            }
        }
    }

    private static int getCount(int []arr, int index){
        int count = 0;
        for (int i = index; i < arr.length-1; i++) {
            if(arr[i] == arr[i+1]){
                count++;
            }else {
                return count;
            }
        }

        return count;
    }

    private static void shiftArray(int[] arr, int count, int index){
        for (int i = 0; i < count; i++) {
            for(int j = index; j < arr.length-removeCount-1; j++){
                arr[j] = arr[j+1];
            }

            removeCount++;
        }
    }
}
