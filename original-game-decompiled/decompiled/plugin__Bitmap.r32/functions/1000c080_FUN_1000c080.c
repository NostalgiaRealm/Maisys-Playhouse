
/* ==== FUN_1000c080 @ 1000c080 ==== 
 * signature: int * __cdecl FUN_1000c080(uint param_1, int param_2)
 * body: 1000c080-1000c0c3
 */

int * __cdecl FUN_1000c080(uint param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 < 0xffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      if (param_1 < 0xffffffe1) {
        piVar1 = FUN_1000c0d0(param_1);
      }
      else {
        piVar1 = (int *)0x0;
      }
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (param_2 == 0) {
        return (int *)0x0;
      }
      iVar2 = FUN_1000ed90(param_1);
    } while (iVar2 != 0);
  }
  return (int *)0x0;
}


