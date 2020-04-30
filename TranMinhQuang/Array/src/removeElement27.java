
public class removeElement27 {
	public static int removeElement(int[] A, int elem) {
	    int i=0;
	    int j=0;
	 
	    while(j < A.length){
	        if(A[j] != elem){
	            A[i] = A[j];
	            i++; 
	        }
	 
	        j++;
	    }
	 
	    return i;
	}

	public static void main(String[] args) {
		int[] quang= {0,1,1,7,4,5,5,7,7,7,8,8,8,8,9,9,10};
		System.out.println(removeElement(quang,7));
		for(int k=0;k<quang.length;k++)
		{
			System.out.printf("%d ",quang[k]);
		}
	}

}
