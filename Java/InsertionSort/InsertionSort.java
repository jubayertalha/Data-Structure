import Initial.*;

public class InsertionSort{
	public static void main(String args[]){
		int arr[] = initial.unsortedArray;
		int n = arr.length;
		int steps = 0;
		
		initial.printArray(arr,"Unsorted Array");
		System.out.println("Length = "+arr.length);
		
		for(int i=1;i<n;i++){
			int num = arr[i];
			int j;
			for(j=i-1;j>=0 && num<arr[j];j--){
				arr[j+1] = arr[j];
				steps++;
				initial.printArray(arr,"Step:"+steps);
			}
			arr[j+1] = num;
		}
		
		initial.printArray(arr,"Sorted Array");
		System.out.println("Steps = "+steps);
		System.out.println("Worst Complexity : O(n^2)");
		System.out.println("Best Complexity : O(n)");
	}
}