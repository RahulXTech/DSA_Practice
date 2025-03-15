rt <= end ){
        cout<<"your answer"<<endl;
    if(mid == target){
        cout<<"your answer mached in mid condition"<<endl;
    }else if(mid < target){
        start = mid +1;
    }else if(mid > target){
        end = mid -1;
    }else{
        cout<<"Your targe is diffrent"<<endl;
    }