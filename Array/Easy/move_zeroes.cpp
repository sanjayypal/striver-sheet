vector<int> moveZeros(int n, vector<int> a) {
      vector<int> arr;
      int count=0;
      for(int i=0; i<n; i++)
      {
          if(a[i]==0)
          count++;
          else
          arr.push_back(a[i]);
      }
      for(int i=0; i<count; i++)
      arr.push_back(0);
      return arr;
}



vector<int> moveZeros(int n, vector<int> arr) {
      int j=-1;
      for(int i=0; i<n; i++)
      {
        if (arr[i] == 0) {
          j = i;
          break;
        }
      }
      if(j!=-1)
      {
      for(int i=j+1; i<n; i++)
      {
          if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
          }
      }
      }
      return arr;
}
