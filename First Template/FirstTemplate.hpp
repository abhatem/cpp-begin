//basics/max.hpp
template <typename RT, typename T1, typename T2>
inline RT const& mymax(T1 const& a, T2 const& b)
{
       return a<b?b:a;
}
