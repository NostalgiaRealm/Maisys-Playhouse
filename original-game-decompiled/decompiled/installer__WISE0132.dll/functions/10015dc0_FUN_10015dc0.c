
/* ==== FUN_10015dc0 @ 10015dc0 ==== 
 * signature: int * __cdecl FUN_10015dc0(int param_1)
 * body: 10015dc0-10015e14
 */

int * __cdecl FUN_10015dc0(int param_1)

{
  int *piVar1;
  uint dwBytes;
  
  dwBytes = param_1 + 0xfU & 0xfffffff0;
  if (dwBytes <= DAT_100221d4) {
    FUN_10016e20(9);
    piVar1 = FUN_100175a0(param_1 + 0xfU >> 4);
    FUN_10016ea0(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  piVar1 = HeapAlloc(DAT_1002532c,0,dwBytes);
  return piVar1;
}


