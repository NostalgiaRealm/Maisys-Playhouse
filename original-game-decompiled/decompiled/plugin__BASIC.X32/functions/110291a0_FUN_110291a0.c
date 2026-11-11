
/* ==== FUN_110291a0 @ 110291a0 ==== 
 * signature: LPVOID __cdecl FUN_110291a0(int param_1, int param_2)
 * body: 110291a0-110291f1
 */

LPVOID __cdecl FUN_110291a0(int param_1,int param_2)

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
      pvVar1 = HeapAlloc(DAT_1103ab3c,8,dwBytes);
    }
    else {
      pvVar1 = (LPVOID)0x0;
    }
    if (pvVar1 != (LPVOID)0x0) {
      return pvVar1;
    }
    if (DAT_110365bc == 0) {
      return (LPVOID)0x0;
    }
    iVar2 = __callnewh(dwBytes);
  } while (iVar2 != 0);
  return (LPVOID)0x0;
}


