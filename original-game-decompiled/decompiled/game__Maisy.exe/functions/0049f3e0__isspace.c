
/* ==== _isspace @ 0049f3e0 ==== 
 * signature: int __cdecl _isspace(int _C)
 * body: 0049f3e0-0049f40c
 * note: Library Function - Single Match  _isspace  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _isspace
   
   Library: Visual Studio 1998 Release */

int __cdecl _isspace(int _C)

{
  int iVar1;
  
  if (1 < DAT_004de8cc) {
    iVar1 = __isctype(_C,8);
    return iVar1;
  }
  return *(ushort *)(PTR_DAT_004de6c0 + _C * 2) & 8;
}


