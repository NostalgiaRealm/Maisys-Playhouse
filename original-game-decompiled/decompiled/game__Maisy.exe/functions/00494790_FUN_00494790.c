
/* ==== FUN_00494790 @ 00494790 ==== 
 * signature: LPVOID __cdecl FUN_00494790(LPVOID param_1, uint param_2)
 * body: 00494790-004947fe
 */

LPVOID __cdecl FUN_00494790(LPVOID param_1,uint param_2)

{
  LPVOID pvVar1;
  int iVar2;
  
  if (param_1 == (LPVOID)0x0) {
    pvVar1 = (LPVOID)FUN_00490210(param_2);
    return pvVar1;
  }
  if (param_2 != 0) {
    do {
      if (param_2 < 0xffffffe1) {
        pvVar1 = HeapReAlloc(DAT_004e679c,0,param_1,param_2);
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
      iVar2 = __callnewh(param_2);
    } while (iVar2 != 0);
    return (LPVOID)0x0;
  }
  FUN_0048e750(param_1);
  return (LPVOID)0x0;
}


