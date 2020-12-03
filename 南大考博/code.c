public static void quick_sort_swap(int[], arry,int start, int end){
	int i = start, j = end;
	int mid = array[(start + end) / 2];
	int tmp = 0;
	if (start < end){
		while (i != j){
			while(j>i  && array[j]>mid)
				j--;
			while(i<j && array[i] < mid)
				i++;
			if (i <= j){
				tmp = array[j];
				arry[j] = array[i];
				arry[i] = array[j];
			}
		}
		quick_sort_swap(arry, start, i-1);
		quick_sort_swap(arry,j+1, end)
	}
}