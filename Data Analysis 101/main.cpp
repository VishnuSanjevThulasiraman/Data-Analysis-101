//
//  main.cpp
//  Data Analysis 101
//
//  Created by T SANJEV VISHNU on 05/11/19.
//  Copyright © 2019 VISHNU. All rights reserved.
//
#include<math.h>
#include <iostream>
using namespace std;

int main() {
    int sum=0;
    int n;
    cout<<"Enter number of entries : ";
    cin>>n;
    float x[n],w[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
        sum+=x[i];
    }
    float mean,som=0,product=0;
    mean=sum/n;
  cout<<"mean"<<mean<<endl;
    for(int i=0;i<n;i++){
        if(mean-x[i]<0)
            w[i]=(mean-x[i])*(-1);
        else
            w[i]=mean-x[i];
        w[i]=pow(1/w[i],w[i]);
        som+=w[i];
        product+={x[i]*w[i]};
//        cout<<"w["<<i<<"]="<<w[i]<<endl;
        
    }
    float sanjev=product/som;
//    cout <<"Sum of mean="<<som<<endl;
//    cout<<"Product="<<product<<endl;
    cout<<"Sanjev="<<sanjev<<endl;
    return 0;
    
}
