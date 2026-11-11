
/* ==== _mktime @ 00492c80 ==== 
 * signature: time_t __cdecl _mktime(tm * _Tm)
 * body: 00492c80-00492c8f
 * note: Library Function - Single Match  _mktime  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _mktime
   
   Library: Visual Studio 1998 Release */

time_t __cdecl _mktime(tm *_Tm)

{
  uint uVar1;
  undefined4 extraout_EDX;
  
  uVar1 = __make_time_t(&_Tm->tm_sec,1);
  return CONCAT44(extraout_EDX,uVar1);
}


