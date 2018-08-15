import java.util.Scanner;

public class Quick_sort {
	static void sort_as(int[] vec, int first, int last)
	{
		int temp = 0, mid = 0;
		int f = first, l = last;
		mid = vec[(l + f) / 2];
		while (vec[f] < mid)
		{
			f++;
		}
		while (vec[l] > mid)
		{
			l--;
		}
		if (f <= l)
		{
			temp = vec[f];
			vec[f] = vec[l];
			vec[l] = temp;
			f++;
			l--;
		}
		if (first < l)
			sort_as(vec, first, l);
		if (f < last)
			sort_as(vec, f, last);
	}
	static void sort_des(int[] vec, int first, int last)
	{
		int temp = 0, mid = 0;
		int f = first, l = last;
		mid = vec[(l + f) / 2];
		while (vec[f] > mid)
		{
			f++;
		}
		while (vec[l] < mid)
		{
			l--;
		}
		if (f <= l)
		{
			temp = vec[f];
			vec[f] = vec[l];
			vec[l] = temp;
			f++;
			l--;
		}
		if (first < l)
			sort_des(vec, first, l);
		if (f < last)
			sort_des(vec, f, last);
	}


	public static void main(String[] args) {
		int n = 0;
		Scanner in = new Scanner(System.in);
		System.out.println("Enter size of array");
		n=in.nextInt();
		int[] mass = new int[n];
		for(int i=0;i<n;i++)
		{
			mass[i] = (int) ( Math.random() * 1000);
			System.out.print(mass[i]+" ");
		}
		short a=0;
		System.out.println();
		System.out.println("Choose how to sort: ascending or descending(enter 1 or 2 respectively).");
		a=in.nextShort();
		switch(a)
		{
			case 1:sort_as(mass, 0, n-1); break;
			case 2:sort_des(mass, 0, n-1); break;
			default: break;
		}
		System.out.print("The array is sorted: ");
		for(int i=0;i<n;i++)
		{
			System.out.print(mass[i]+" ");
		}	
		

	}

}
