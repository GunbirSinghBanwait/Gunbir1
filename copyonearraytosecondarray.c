  #include<stdio.h>

    void main()
    {
      int arr[5],arr1[5],i;
      printf("Enter array elements ");
      for(i=0;i<=4;i++)
      {
      scanf("%d",&arr[i]);
      }
      printf("\n The copy of array elements is :\n");
      for(i=0;i<=4;i++)
      {
      arr1[i]=arr[i];
      printf("\n Element is %d",arr1[i]);
      }

    }
