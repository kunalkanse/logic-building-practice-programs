package Practice;

import java.util.Scanner;

public class Program248_InsertAtPos_Array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("ENTER THE SIZE OF ARRAY : ");
        int arr[] = new int[sc.nextInt()];

        System.out.println("HOW MANY ELEMENTS U WANT TO ADD : ");
        int count = sc.nextInt();

        if(count < arr.length){
            for (int i = 0; i < count; i++) {
                arr[i] = sc.nextInt();
            }
        }
        else {
            System.out.println("COUNT SHOULD BE LESS THAN ARRAY LENGTH");
            return;
        }

        System.out.println("ENTER THE POSITION : ");
        int pos = sc.nextInt();

        if(pos > arr.length){
            System.out.println("POSITION SHOULD LESS THAN SIZE OF ARRAY");
            return;
        }

        System.out.println("ENTER VALUE TO ADD : ");
        int value = sc.nextInt();

        for (int i = arr.length-2; i >= pos-1 ; i--){
            arr[i+1] = arr[i];
        }

        arr[pos-1] = value;

        for(int i : arr){
            System.out.println(i);
        }
    }
}
