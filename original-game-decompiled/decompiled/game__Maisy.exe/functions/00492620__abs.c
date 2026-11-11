
/* ==== _abs @ 00492620 ==== 
 * signature: int __cdecl _abs(int _X)
 * body: 00492620-00492629
 * note: Library Function - Single Match  _abs  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _abs
   
   Library: Visual Studio 1998 Release */

int __cdecl _abs(int _X)

{
  return (_X ^ _X >> 0x1f) - (_X >> 0x1f);
}


