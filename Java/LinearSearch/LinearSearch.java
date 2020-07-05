import Initial.*;

public class LinearSearch{
	public static void main(String args[]){
		int arr[] = initial.unsortedArray;
		int n = arr.length;
		boolean flag = false;
		int steps = 0;
		
		initial.printArray(arr,"Unsorted Array");
		System.out.println("Length = "+arr.length);
		
		int x = initial.sc.nextInt();
		
		for(int i=0;i<n;i++){
			steps++;
			if(arr[i]==x){
				flag = true;
				break;
			}
		}
		
		if(flag){
			System.out.println(x+" is there!");
		}else{
			System.out.println(x+" is not there!");
		}
		System.out.println("Steps = "+steps);
		System.out.println("Complexity : O(n)");
	}
}