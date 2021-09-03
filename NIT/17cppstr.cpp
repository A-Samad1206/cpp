#include<iostream>
int main(){
    struct str{
        int x;
        char y;
        void pr(int x){
            std::cout<<x;
        }
    };
    str st;
    st.x=52465463546345;
    st.pr(st.x);
    return 0;

}
//My Notes
//Here var st of type struct str create a object value cpontain above and this initialsation create a object address to them so st.pr() have access to them,