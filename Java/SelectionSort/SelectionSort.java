import Initial.*;

public class SelectionSort{
	public static void main(String args[]){
		int arr[] = initial.unsortedArray;
		int n = arr.length;
		int steps = 0;
		
		initial.printArray(arr,"Unsorted Array");
		System.out.println("Length = "+arr.length);

		
		for(int i=0;i<n-1;i++){
			int min = i;
			for(int j=i+1;j<n;j++){
				if(arr[min]>arr[j]){
					min = j;
				}
				steps++;
			}
			if(min != i){
				int temp = arr[min];
				arr[min] = arr[i];
				arr[i] = temp;
			}
			initial.printArray(arr,"Step:"+steps);
		}
		
		initial.printArray(arr,"Sorted Array");
		System.out.println("Steps = "+steps);
		System.out.println("Complexity : O(n^2)");
	}
}