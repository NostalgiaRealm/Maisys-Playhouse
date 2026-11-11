
/* ==== __towupper_lk @ 0049e200 ==== 
 * signature: uint __cdecl __towupper_lk(uint param_1)
 * body: 0049e200-0049e29b
 * note: Library Function - Single Match  __towupper_lk  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __towupper_lk
   
   Library: Visual Studio 1998 Release */

uint __cdecl __towupper_lk(uint param_1)

{
  undefined4 in_EAX;
  undefined2 uVar2;
  int iVar1;
  WCHAR local_2;
  
  uVar2 = (undefined2)((uint)in_EAX >> 0x10);
  if ((ushort)param_1 == 0xffff) {
    return CONCAT22(uVar2,0xffff);
  }
  if (DAT_004de6a0 == (LPCWSTR)0x0) {
    if ((0x60 < (ushort)param_1) && ((ushort)param_1 < 0x7b)) {
      param_1 = (uint)(ushort)((ushort)param_1 - 0x20);
    }
    return CONCAT22(uVar2,(ushort)param_1);
  }
  if ((ushort)param_1 < 0x100) {
    iVar1 = _iswctype((ushort)param_1,2);
    if (iVar1 == 0) {
      return param_1 & 0xffff;
    }
  }
  iVar1 = ___crtLCMapStringW(DAT_004de6a0,0x200,(LPCWSTR)&param_1,1,&local_2,1);
  if (iVar1 == 0) {
    return param_1 & 0xffff;
  }
  return CONCAT22((short)((uint)iVar1 >> 0x10),local_2);
}


