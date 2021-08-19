template <typename T>

inline T const& max(T const& a, T const& b){
    //if a > b return a, else return b
    return a>b?a:b;
}