
/* ==== FUN_0040ad60 @ 0040ad60 ==== 
 * signature: int __cdecl FUN_0040ad60(uint param_1, int param_2)
 * body: 0040ad60-0040ada3
 */

int __cdecl FUN_0040ad60(uint param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0xffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      if (param_1 < 0xffffffe1) {
        iVar1 = FUN_0040adb0(param_1);
      }
      else {
        iVar1 = 0;
      }
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_2 == 0) {
        return 0;
      }
      iVar1 = FUN_0040c090(param_1);
    } while (iVar1 != 0);
  }
  return 0;
}


