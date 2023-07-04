bool func(string s, string t) {
    string sNew="", tNew="";
    int n1 = s.length(), n2 = t.length();

    for(auto ele:s){
        if(ele == '#'){
            if(sNew.length())
                sNew.pop_back();
        }
        else{
            sNew.push_back(ele);
        }
    }
    
    for(auto ele:t){
        if(ele == '#'){
            if(tNew.length())
                tNew.pop_back();
        }
        else{
            tNew.push_back(ele);
        }
    }
    
    return sNew == tNew;
}
