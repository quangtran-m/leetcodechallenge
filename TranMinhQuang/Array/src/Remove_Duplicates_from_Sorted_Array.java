import java.util.LinkedList; 
public class Remove_Duplicates_from_Sorted_Array {
	
	public static int removeDuplicates(int[] nums) {
		if(nums.length==0||nums.length==1)
		{
			return nums.length;
		}
		int i=0;
		int j=1;  
		while(j<nums.length){
		 if(nums[i]!=nums[j]) {
			nums[i+1]=nums[j];
			i++;
			j++;
		}else {
			j++;
		}
		}
		return i+1;
    }

	public static void main(String[] args) {
		int[] quang= {0,1,1,4,5,5,7,7,7,8,8,8,8,9,9,10};
		System.out.println(removeDuplicates(quang));
		for(int k=0;k<quang.length;k++)
		{
			System.out.printf("%d ",quang[k]);
		}
	}

}
