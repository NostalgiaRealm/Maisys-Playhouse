
/* ==== FUN_120307d0 @ 120307d0 ==== 
 * signature: LPVOID __cdecl FUN_120307d0(LPVOID param_1, uint param_2)
 * body: 120307d0-1203083e
 */

LPVOID __cdecl FUN_120307d0(LPVOID param_1,uint param_2)

{
  LPVOID pvVar1;
  int iVar2;
  
  if (param_1 == (LPVOID)0x0) {
    pvVar1 = (LPVOID)FUN_1202c7e0(param_2);
    return pvVar1;
  }
  if (param_2 != 0) {
    do {
      if (param_2 < 0xffffffe1) {
        pvVar1 = HeapReAlloc(DAT_1203abf4,0,param_1,param_2);
      }
      else {
        pvVar1 = (LPVOID)0x0;
      }
      if (pvVar1 != (LPVOID)0x0) {
        return pvVar1;
      }
      if (DAT_12038714 == 0) {
        return (LPVOID)0x0;
      }
      iVar2 = __callnewh(param_2);
    } while (iVar2 != 0);
    return (LPVOID)0x0;
  }
  FUN_1202c7c0(param_1);
  return (LPVOID)0x0;
}


