package logic-building-practice-programs;

import java.util.Scanner;

public class Program256_RotateArrayRight {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int[] arr = {10,20,30,40,50,60};

        System.out.println("How many times you want to rotate : ");
        int rotate = sc.nextInt();

        for (int i = 0; i < rotate; i++) {
            int temp = arr[arr.length-1];
            for (int j = arr.length-2; j > -1 ; j--) {
                arr[j+1] = arr[j];
            }
            arr[0] = temp;
        }

        for(int a : arr)
        {
            System.out.print(a+"\t");
        }
    }
}
