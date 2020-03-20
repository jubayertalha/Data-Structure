package Initial;
import java.util.Scanner;

public class initial{
	public static int unsortedArray[] = new int[] {40,1,90,20,10,60,80,50,70,30,100};
	public static int sortedArray[] = new int [] {1,10,20,30,40,50,60,70,80,90,100};
	public static Scanner sc = new Scanner(System.in);
	
	public static void printArray(int arr[],String txt){
		System.out.print(txt+" = ");
		for(int i=0;i<arr.length;i++){
			System.out.print(arr[i]+" , ");
		}
		System.out.println();
		System.out.println("Length = "+arr.length);
	}
	
}