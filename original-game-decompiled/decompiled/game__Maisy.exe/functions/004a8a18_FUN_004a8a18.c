
/* ==== FUN_004a8a18 @ 004a8a18 ==== 
 * signature: undefined4 __stdcall FUN_004a8a18(void * param_1, int param_2)
 * body: 004a8a18-004a8a47
 */

undefined4 FUN_004a8a18(void *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (param_2 != 0x360) {
    FUN_004a8970(param_1);
    uVar1 = FUN_004a86b6();
  }
  return uVar1;
}


