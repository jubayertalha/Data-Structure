import Initial.*;

public class BinarySearch{
	public static void main(String args[]){
		int arr[] = initial.unsortedArray;
		int x = initial.sc.nextInt();
		int n = arr.length;
		boolean flag = false;
		
		for(int i=0;i<n;i++){
			if(arr[i]==x){
				flag = true;
			}
		}
		
		initial.printArray(arr,"Unsorted Array");
		if(flag){
			System.out.println(x+" is there!");
		}else{
			System.out.println(x+" is not there!");
		}
	}
}