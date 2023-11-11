#include<iostream>
bool overlap(int x1,int y1,int x2,int y2, int X1, int Y1, int X2, int Y2);
int main(){
    int x1;
    int y1;
    int x2;
    int y2;
    int X1;
    int Y1;
    int X2;
    int Y2;
 
    std::cout<<"enter the coordinate of x1, y1, x2, y2, X1, Y1, X2, Y2 corresponding"<<'\n';
        

    
    std::cin>>x1>>y1>>x2>>y2>>X1>>Y1>>X2>>Y2;

    overlap(x1,y1,x2,y2,X1,Y1,X2,Y2);
    
    

    return 0;
}
bool overlap(int x1,int y1,int x2,int y2, int X1, int Y1, int X2, int Y2){
    if((Y1>=y2) || (X1>=x2) || (y1>=Y2) || (x1>=X2) ){
        std::cout<<"2 shapes are not overlaping";
        

    }
    else{
        std::cout<<"2 shapes are overlaping";
        
    }
    return 0;
    
    

}
