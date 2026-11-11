
/* ==== FUN_00483930 @ 00483930 ==== 
 * signature: undefined4 __cdecl FUN_00483930(int * param_1, undefined4 * param_2)
 * body: 00483930-00483961
 */

undefined4 __cdecl FUN_00483930(int *param_1,undefined4 *param_2)

{
  void *this;
  undefined4 uVar1;
  
  uVar1 = 0x90000;
  if ((*(byte *)((int)param_1 + 0x1e) & 1) != 0) {
    this = (void *)FUN_0040c620(param_1);
    if (this != (void *)0x0) {
      uVar1 = 0;
      FUN_00401fa0(this,param_1,param_2);
    }
  }
  return uVar1;
}


