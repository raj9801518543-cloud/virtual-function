    #include<iostream>
    using namespace std;
    class shape{
        public:
        virtual float area()=0;
    };
    class circle:public shape
    {
        private:
        float radius;
        public:
        circle(float r)
        {
            radius=r;
        }
        float area()
    {
        return 3.14*radius*radius;
    }
    };
    class Rectangle:public shape{
        private:
        float length ,breadth;
        public:
        Rectangle(float l,float b)
        {
            length=l;
            breadth=b;
        }
        float area(){
            return length*breadth;
        }

    };
    class Triangle:public shape{
        private:
        float base,height;
        public:
        Triangle(float b,float  h){
            base=b;
            height=h;
        }
        float area(){
            return 0.5*base*height;
        }
    };
    int main (){
        circle c(5);
        Rectangle r(4,6);
        Triangle t(10,8);
        shape*ptr;
        ptr=&c;
        cout<<"area of circle:"<<ptr->area()<<endl;
        ptr=&r;
        cout<<"area of rectangle:"<<ptr->area()<<endl;
         ptr=&t;
        cout<<"area of triangle:"<<ptr->area()<<endl;
        return 0;

    }