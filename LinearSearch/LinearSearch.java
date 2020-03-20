import Initial.*;

public class LinearSearch{
	public static void main(String args[]){
		int arr[] = initial.unsortedArray;
		int n = arr.length;
		boolean flag = false;
		int steps = 0;
		
		initial.printArray(arr,"Unsorted Array");
		int x = initial.sc.nextInt();
		
		for(int i=0;i<n;i++){
			if(arr[i]==x){
				flag = true;
				break;
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