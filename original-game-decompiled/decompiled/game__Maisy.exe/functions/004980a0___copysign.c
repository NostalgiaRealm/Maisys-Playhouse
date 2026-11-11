
/* ==== __copysign @ 004980a0 ==== 
 * signature: double __cdecl __copysign(double _Number, double _Sign)
 * body: 004980a0-004980c7
 * note: Library Function - Single Match  __copysign  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __copysign
   
   Library: Visual Studio 1998 Release */

double __cdecl __copysign(double _Number,double _Sign)

{
  return (double)CONCAT44((_Sign._4_4_ ^ _Number._4_4_) & 0x7fffffff ^ _Sign._4_4_,_Number._0_4_);
}


