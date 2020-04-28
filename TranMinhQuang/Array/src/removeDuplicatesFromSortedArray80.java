
public class removeDuplicatesFromSortedArray80 {
		   public static int removeDuplicates(int [] nums) {
			    if (nums.length <= 1) 
		            return nums.length;
			    int i = 1;
			    int j = 1;
			    boolean check = false;

			    while (i<nums.length) {
			        if (nums[i] != nums[i - 1]) {
			            nums[j]= nums[i];
			            j++;
			            check = false;
			        }
			        else {
			            if (!check) {
			                nums[j]= nums[i];
			                check = true;
			                j++;
			            }
			        }
			        i++;
			    }
			    return j;
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
