
/* ==== FUN_00484440 @ 00484440 ==== 
 * signature: undefined4 __cdecl FUN_00484440(undefined4 param_1, int param_2)
 * body: 00484440-00484486
 */

undefined4 __cdecl FUN_00484440(undefined4 param_1,int param_2)

{
  int *piVar1;
  void *this;
  
  piVar1 = (int *)FUN_0048b550(param_2);
  if (piVar1 == (int *)0x0) {
    return 0x90001;
  }
  this = (void *)FUN_0040c620(piVar1);
  if (this != (void *)0x0) {
    FUN_00404db0(this,(int)piVar1);
    return 0;
  }
  (**(code **)(*piVar1 + 8))(1,0);
  return 0;
}


