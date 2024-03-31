package grooming;

/*
    Test Cases
        {8,10,12}   => yes
        {8,10,10,12}   => yes
        {8}   => yes
        {8,6,12}   => no

 */

public class Program251_CheckArraySorted {
    public static void main(String[] args) {
        int[] arr = {10,20,25,30,40,50,60};

        boolean status = checkSorted(arr);

        if(status){
            System.out.println("YES");
        }else {
            System.out.println("NO");
        }
    }

    public static boolean checkSorted(int []arr){

        for (int i = 0; i < arr.length-1; i++) {
            if(!((arr[i+1] > arr[i]) || (arr[i+1] == arr[i]))){
                return false;
            }
        }

        return true;
    }
}
