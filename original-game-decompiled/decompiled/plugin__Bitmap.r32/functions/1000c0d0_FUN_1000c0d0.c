
/* ==== FUN_1000c0d0 @ 1000c0d0 ==== 
 * signature: int * __cdecl FUN_1000c0d0(int param_1)
 * body: 1000c0d0-1000c124
 */

int * __cdecl FUN_1000c0d0(int param_1)

{
  int *piVar1;
  uint dwBytes;
  
  dwBytes = param_1 + 0xfU & 0xfffffff0;
  if (dwBytes <= DAT_10016384) {
    FUN_1000a320(9);
    piVar1 = FUN_1000d960(param_1 + 0xfU >> 4);
    FUN_1000a3a0(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  piVar1 = HeapAlloc(DAT_100183e4,0,dwBytes);
  return piVar1;
}


