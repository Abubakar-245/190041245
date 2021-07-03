#include <iostream>

using namespace std;

class Rectangle{
private:
    float length, width;
public:
    Rectangle(){
        length=1;
        width=1;
    }
    Rectangle(float Length,float Width){
        if((Length>=1)&&(Length<20)){
            length = Length;
        }
        if((Width>=1)&&(Width<20)){
            width = Width;
        }
    }

    float area(){
        return length*width;
    }
    float perimeter(){
        return 2*(length+width);
    }
    void setLength(float Length){
        if((Length>=1)&&(Length<20)){
            length = Length;
        }
    }
    void setWidth(float Width){
        if((Width>=1)&&(Width<20)){
            width = Width;
        }
    }
    float getLength(){
        return length;
    }
    float getWidth(){
        return width;
    }

};

int main()
{
    Rectangle a(15,12);
    cout<<"Area is "<<a.area()<<endl;
    cout<<"Perimeter is "<<a.perimeter()<<endl;
    a.setLength(10);
    cout<<"new length is "<<a.getLength()<<endl;
    a.setWidth(5);
    cout<<"new width is "<<a.getWidth()<<endl;
return 0;
}
