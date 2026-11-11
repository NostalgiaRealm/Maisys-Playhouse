
/* ==== FUN_13005b60 @ 13005b60 ==== 
 * signature: LPVOID __cdecl FUN_13005b60(int param_1, int param_2)
 * body: 13005b60-13005bb1
 */

LPVOID __cdecl FUN_13005b60(int param_1,int param_2)

{
  LPVOID pvVar1;
  int iVar2;
  uint dwBytes;
  
  dwBytes = param_2 * param_1;
  if (dwBytes == 0) {
    dwBytes = 1;
  }
  do {
    if (dwBytes < 0xffffffe1) {
      pvVar1 = HeapAlloc(DAT_13009e54,8,dwBytes);
    }
    else {
      pvVar1 = (LPVOID)0x0;
    }
    if (pvVar1 != (LPVOID)0x0) {
      return pvVar1;
    }
    if (DAT_13008a54 == 0) {
      return (LPVOID)0x0;
    }
    iVar2 = __callnewh(dwBytes);
  } while (iVar2 != 0);
  return (LPVOID)0x0;
}


