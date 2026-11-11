
/* ==== __ismbcdigit @ 00492b40 ==== 
 * signature: int __cdecl __ismbcdigit(uint _Ch)
 * body: 00492b40-00492bdd
 * note: Library Function - Single Match  __ismbcdigit  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __ismbcdigit
   
   Library: Visual Studio 1998 Release */

int __cdecl __ismbcdigit(uint _Ch)

{
  uint uVar1;
  BOOL BVar2;
  int iVar3;
  undefined2 in_stack_fffffff8;
  ushort local_4;
  short local_2;
  
  if (_Ch < 0x100) {
    if (1 < DAT_004de8cc) {
      iVar3 = __isctype(_Ch,4);
      return iVar3;
    }
    uVar1 = *(ushort *)(PTR_DAT_004de6c0 + _Ch * 2) & 4;
  }
  else {
    uVar1 = 0;
    local_4 = 0;
    local_2 = 0;
    if (DAT_004de2f4 != (LPWORD)0x0) {
      BVar2 = ___crtGetStringTypeA
                        ((_locale_t)0x1,(DWORD)&stack0xfffffffa,(LPCSTR)0x2,(int)&local_4,
                         DAT_004de2f4,DAT_004de2f8,
                         CONCAT13((char)_Ch,CONCAT12((char)(_Ch >> 8),in_stack_fffffff8)));
      if (BVar2 == 0) {
        return 0;
      }
      if ((local_2 == 0) && ((local_4 & 4) != 0)) {
        return 1;
      }
      return 0;
    }
  }
  return uVar1;
}


