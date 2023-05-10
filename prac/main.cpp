//
//  main.cpp
//  prac
//
//  Created by Zhengting Wu on 2023/5/10.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
   
    double weight=0,height=0,BMI;
    BMI=weight/((height/100)*(height/100));
    string str;
    cout<<fixed<<setprecision(2);
    cout<<"請輸入你的身高"<<endl;
    cin>>height;
    cout<<"請輸入你的體重"<<endl;
    cin>>weight;
    
    if(BMI<=18.5){
        str="體重過輕";
    }
    else if(BMI<24){
        str="正常";
    }
    else if(BMI<27){
        str="稍重";
    }
    else if(BMI<30){
        str="輕度肥胖";
    }
    else if(BMI<35){
        str="中度肥胖";
    }
    else{
        str="重度肥胖";
    }
    
    cout<<"你的ＢＭＩ是"<<BMI<<endl;
    
    return 0;

}
