

int main(){
    int n = 0;
    cin>>n;

    int* arr = new int[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans = getSum(*arr, n);