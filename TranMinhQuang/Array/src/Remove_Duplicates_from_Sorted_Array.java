import java.util.LinkedList; 
public class Remove_Duplicates_from_Sorted_Array {
	
	public static int removeDuplicates(int[] nums) {
		//nếu mảng 1 hoặc 2 phần tử thì trả về độ dài của mảng luôn
		if(nums.length==0||nums.length==1)
		{
			return nums.length;
		}
		//tạo 2 chỉ mục i,j
		int i=0;
		int j=1;  
		while(j<nums.length){ //dịch chuyển chỉ mục J duyệt mảng
		 if(nums[i]!=nums[j]) {  
			nums[i+1]=nums[j];  //nếu 2 chỉ mục chỉ đến giá trị khác nhau thì thì gán cho giá trị tiếp theo của chỉ mục i bằng giá trị của chỉ mục J  
			i++;                  //sau đó dịch chuyển cả I và J sang ô nhớ tiếp theo 
			j++;
		}else {  //nếu 2 chỉ mục chỉ đến giá trị bằng nhau thì I giữ nguyên vị trí,J tiếp tục tăng 1
			j++;    
		}
		}
		return i+1;  //i chính là chỉ mục ở số lớn nhất cuối cùng,vì mảng bắt đầu từ 0 nên độ dài của mảng =i+1;
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
