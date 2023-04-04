//link tham khảo:https://chidokun.github.io/2015/03/selection-sort/
int min, i, j; //min là chỉ số phần tử nhỏ nhất
for(i = 0; i < n-1; i++)
{
   min = i;
   for(j = i+1; j < n; j++)
      if(a[j] < a[min])
         min = j; //tìm min trong các phần tử còn lại
   if(min != i)
     swap(a[i], a[min]); //đổi chỗ nếu tìm thấy min
}
