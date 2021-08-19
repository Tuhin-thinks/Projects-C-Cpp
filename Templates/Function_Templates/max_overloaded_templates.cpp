
//maximum of two int values
inline int const& max(int const& x, int const& y){
    return x>y?x:y;
}

// maximum of two values of any type
template <typename T>
inline T const& max(T const& x, T const& y){
    return x>y?x:y;
}

// maximum of three values of any type
template <typename T>
inline T const& max(T const& x, T const& y, T const& z){
    return max(max(x,y), z);
}

// main function to demonstrate
int main(){
    // calls the template for three arguments
    ::max(7.0, 42.0); // calls max<double> (by argument deduction)
    ::max('a', 'b'); // calls max<char> (by argument deduction)
    ::max(7, 42); // calls the nontemplate for two int s
    ::max<>(7, 42); // calls max<int> (by argument deduction)
    ::max<double>(7, 42); // calls max<double> (no argument deduction)
    ::max('a', 42.7); // calls the nontemplate for two int s
}