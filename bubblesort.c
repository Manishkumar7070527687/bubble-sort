 #include<iostream>
 using namespace std;
 int main(){
    int aee[8]={2,54,54,6,45,25,4,5};

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(aee[j]>aee[j+1])
            swap(aee[j],aee[j+1]);
        }
    
    }
    for (int i = 0; i < 8; i++)
    {
        /* code */cout<<aee[i]<<" ";
    }
    
    return 0;
 }
