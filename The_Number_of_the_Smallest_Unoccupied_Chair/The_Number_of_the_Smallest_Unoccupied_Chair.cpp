class Solution {
public:
    void heapify(vector<vector<int>>&arr, int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2
 
    // If left child is larger than root
    if (l < n && arr[l][0] > arr[largest][0])
        largest = l;
 
    // If right child is larger than largest so far
    if (r < n && arr[r][0] > arr[largest][0])
        largest = r;
 
    // If largest is not root
    if (largest != i) {
        swap(arr[i][0], arr[largest][0]);
        swap(arr[i][1], arr[largest][1]);
        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}
 
// main function to do heap sort
void heapSort(vector<vector<int>>&arr, int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    // One by one extract an element from heap
    for (int i = n - 1; i > 0; i--) {
        // Move current root to end
        swap(arr[0][0], arr[i][0]);
         swap(arr[0][1], arr[i][1]);
 
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
 
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int chairs[times.size()];
         int end[times.size()];
        int i,j,k,t=targetFriend,n=times.size();
       int x=times[targetFriend][0];
        for(i=0;i<times.size();i++){
            chairs[i]=0;
            end[i]=-1;
        }
       heapSort(times,n);
        //cout<<t<<"\n";
        int first=0;
        multimap<int,int>m;
        set<int>s;
        for(i=0;i<n;i++){
        int chair;
        int h=times[i][0];
        if(m.size()==0){
            m.insert(pair<int,int>(times[i][1],first));
            chair=first;
            first=1;
            s.clear();
        }
        else{
            auto it=m.begin();
            int en=it->first;
            int ch=it->second;
            if(times[i][0]>=en){
            while(times[i][0]>=en){
                //ma=min(ma,ch);
               s.insert(ch);
                 m.erase(it);
                if(ch==0)
                    break;
              
               it=m.begin();
             en=it->first;
            ch=it->second;
           }
            auto it2=s.begin();
            ch=*it2;
            m.insert(pair<int,int>(times[i][1],ch));
            chair=ch;
                s.erase(it2);
            }
           else{
             if(s.size()==0){
             m.insert(pair<int,int>(times[i][1],first));
            chair=first;
            first++;
             }
               else{
                 auto it2=s.begin();
                 ch=*it2;
                 m.insert(pair<int,int>(times[i][1],ch));
                chair=ch;
                s.erase(it2);
               }
           }
            
            
                
        }
            if(h==x)
            return chair;
    }
        return 0;
        
    }
};
