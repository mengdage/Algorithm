import java.util.Arrays;
public class MergeSort{
	public int[] sort(int[] input){
		return sort(input, 0, input.length-1);
	}
	//the Merge Sort function
	public int[] sort(int[] input, int start, int end){
		int[] output = new int[end-start+1];
		//check if the problem is small enough
		if(start == end){
			//small enough to be solved directly
			output[0] = input[start];
			return output;

		}

		//do merge sort on the first half
		int[] p1 = sort(input, start, (start+end)/2);
		//do merge sort on the second half
		int[] p2 = sort(input, (start+end)/2+1, end);

		//do merging
		output = merge(p1, p2);
		return output;


	}

	//the Merge Function 
	private int[] merge(int[] partOne, int[] partTwo){
		//i for partOne, j for partTwo
		int i = 0,j=0; 
		int lenOne = partOne.length, lenTwo = partTwo.length;
		int[] result = new int[lenOne+lenTwo];
		//r for result
		int r = 0;
		
		while(i < lenOne && j < lenTwo){
			if(partOne[i] < partTwo[j]){
				result[r] = partOne[i];
				i++; r++;
			}
			else{
				result[r] = partTwo[j];
				j++; r++;
			}
		}

		if(i>=lenOne){
			//put partTwo[j:lenTwo-1] in result[r:result.length-1]
			for(;j<lenTwo; j++){
				result[r++] = partTwo[j];

			}
		}
		else{
			//put partOne[i:lenOne-1] in result[r:result.length-1]
			for(;i<lenOne; i++){
				result[r++] = partOne[i];

			}
		}
		return result;
	}

	public static void main(String[] args) {
		int[] test = {2};
		MergeSort ms = new MergeSort();
		System.out.println(Arrays.toString(ms.sort(test)));
	}
}
