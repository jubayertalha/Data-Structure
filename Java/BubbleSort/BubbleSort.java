import Initial.*;

public class BubbleSort{
	public static void main(String args[]){
		int arr[] = initial.unsortedArray;
		int n = arr.length;
		int steps = 0;
		boolean flag = true;
		
		initial.printArray(arr,"Unsorted Array");
		System.out.println("Length = "+arr.length);

		
		for(int i=0;i<n;i++){
			flag = true;
			for(int j=0;j<n-i-1;j++){
				if(arr[j]>arr[j+1]){
					int temp = arr[j+1];
					arr[j+1] = arr[j];
					arr[j] = temp;
					flag = false;
					initial.printArray(arr,"Step:"+steps);
				}
				steps++;
			}
			if(flag){
				break;
			}
		}
		
		initial.printArray(arr,"Sorted Array");
		System.out.println("Steps = "+steps);
		System.out.println("Complexity : O(n^2)");
	}
}