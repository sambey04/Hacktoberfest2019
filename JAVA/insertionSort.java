public class insertionSort {

    public static void main(String []args){

      int arr[]={65,45,55,21,23,100,89};

        for(int i=1;i<arr.length;i++){

        int temp =arr[i];
        int j;

        for(j=i-1;j>=0 && temp<arr[j];j--)
        arr[j+1]=arr[j];

        arr[j+1] = temp;
        }

        for(int x=0;x<arr.length;x++){
         System.out.print(arr[x]+" ");

        }
        System.out.println();

}
}
