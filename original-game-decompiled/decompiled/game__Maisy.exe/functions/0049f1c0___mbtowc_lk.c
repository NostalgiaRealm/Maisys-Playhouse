
/* ==== __mbtowc_lk @ 0049f1c0 ==== 
 * signature: uint __cdecl __mbtowc_lk(LPWSTR param_1, byte * param_2, uint param_3)
 * body: 0049f1c0-0049f2c4
 * note: Library Function - Single Match  __mbtowc_lk  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mbtowc_lk
   
   Library: Visual Studio 1998 Release */

uint __cdecl __mbtowc_lk(LPWSTR param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
    return 0;
  }
  bVar1 = *param_2;
  if (bVar1 == 0) {
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
    }
    return 0;
  }
  if (DAT_004de6a0 != 0) {
    if ((PTR_DAT_004de6c0[(uint)bVar1 * 2 + 1] & 0x80) == 0) {
      iVar2 = MultiByteToWideChar(DAT_004de6b0,9,(LPCSTR)param_2,1,param_1,
                                  (uint)(param_1 != (LPWSTR)0x0));
      if (iVar2 != 0) {
        return 1;
      }
      piVar3 = FUN_0048f9d0();
      *piVar3 = 0x2a;
      return 0xffffffff;
    }
    if (((((int)DAT_004de8cc < 2) || ((int)param_3 < (int)DAT_004de8cc)) ||
        (iVar2 = MultiByteToWideChar(DAT_004de6b0,9,(LPCSTR)param_2,DAT_004de8cc,param_1,
                                     (uint)(param_1 != (LPWSTR)0x0)), iVar2 == 0)) &&
       ((param_3 < DAT_004de8cc || (param_2[1] == 0)))) {
      piVar3 = FUN_0048f9d0();
      *piVar3 = 0x2a;
      return 0xffffffff;
    }
    return DAT_004de8cc;
  }
  if (param_1 != (LPWSTR)0x0) {
    *param_1 = (ushort)bVar1;
  }
  return 1;
}


