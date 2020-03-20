import Initial.*;

public class BinarySearch{
	public static void main(String args[]){
		int arr[] = initial.sortedArray;
		int n = arr.length;
		boolean flag = false;
		int steps = 0;
		
		int left = 0;
		int right = n-1;
		
		initial.printArray(arr,"Sorted Array");
		int x = initial.sc.nextInt();
		
		while(left<=right){
			int mid = left+(right-left)/2;
			if(arr[mid]==x){
				flag = true;
				break;
			}else if(arr[mid]<x){
				left = mid+1;
			}else{
				right = mid-1;
			}
			steps++;
		}
		
		if(flag){
			System.out.println(x+" is there!");
		}else{
			System.out.println(x+" is not there!");
		}
		System.out.println("Steps = "+steps);
	}
}