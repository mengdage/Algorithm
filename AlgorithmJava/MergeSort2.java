import java.util.*;

public class MergeSort2{
	private Comparable[] array;
	private Comparable[] tmp;
	public void mSort(Comparable[] a){
		tmp = new Comparable[a.length];
		array = a;
		mergeSort(0, array.length-1);
	}

	private void mergeSort(int left, int right){
		if(left < right){
			int center = (left+right)/2;
			mergeSort(left, center);
			mergeSort(center+1, right);
			merge(left, right);
		}
	}

	public void merge(int left, int right){
		int center = (left+right)/2;
		int indexLeft = left, indexRight = center+1;
		int indexTmp = left;
		while(indexLeft <= center && indexRight <= right){
			if(array[indexLeft].compareTo(array[indexRight]) <0){
				tmp[indexTmp++] = array[indexLeft++];
			}
			else{
				tmp[indexTmp++] = array[indexRight++];
			}
		}
		while(indexLeft <= center){
			tmp[indexTmp++] = array[indexLeft++];
		}
		while(indexRight <= right){
			tmp[indexTmp++] = array[indexRight++];
		}
		
		for(int i =left; i <= right; i++)
			array[i] = tmp[i];
	}


	public static void main(String[] args){
		MergeSort2 ms2 = new MergeSort2();
		Integer[] a = {2,8,1,3,0,4};
		
		ms2.mSort(a);
		System.out.println(Arrays.toString(a));
	}
}
