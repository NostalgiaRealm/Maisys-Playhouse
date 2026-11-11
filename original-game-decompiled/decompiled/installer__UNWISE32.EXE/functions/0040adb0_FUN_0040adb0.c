
/* ==== FUN_0040adb0 @ 0040adb0 ==== 
 * signature: undefined __cdecl FUN_0040adb0(int param_1)
 * body: 0040adb0-0040ade7
 */

void __cdecl FUN_0040adb0(int param_1)

{
  int *piVar1;
  uint dwBytes;
  
  dwBytes = param_1 + 0xfU & 0xfffffff0;
  if ((dwBytes <= DAT_004131f4) &&
     (piVar1 = FUN_0040c450(param_1 + 0xfU >> 4), piVar1 != (int *)0x0)) {
    return;
  }
  HeapAlloc(DAT_00413ce4,0,dwBytes);
  return;
}


