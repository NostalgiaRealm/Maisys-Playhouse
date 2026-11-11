
/* ==== FUN_0048ebf0 @ 0048ebf0 ==== 
 * signature: LPVOID __cdecl FUN_0048ebf0(int param_1, int param_2)
 * body: 0048ebf0-0048ec41
 */

LPVOID __cdecl FUN_0048ebf0(int param_1,int param_2)

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
      pvVar1 = HeapAlloc(DAT_004e679c,8,dwBytes);
    }
    else {
      pvVar1 = (LPVOID)0x0;
    }
    if (pvVar1 != (LPVOID)0x0) {
      return pvVar1;
    }
    if (DAT_004de524 == 0) {
      return (LPVOID)0x0;
    }
    iVar2 = __callnewh(dwBytes);
  } while (iVar2 != 0);
  return (LPVOID)0x0;
}


