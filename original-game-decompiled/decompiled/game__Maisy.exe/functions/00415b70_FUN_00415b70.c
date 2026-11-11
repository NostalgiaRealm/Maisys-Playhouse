
/* ==== FUN_00415b70 @ 00415b70 ==== 
 * signature: undefined __cdecl FUN_00415b70(undefined4 param_1, short * param_2, undefined4 param_3)
 * body: 00415b70-00415bc1
 */

void __cdecl FUN_00415b70(undefined4 param_1,short *param_2,undefined4 param_3)

{
  void *this;
  undefined2 local_34;
  undefined4 local_32;
  
  if (*param_2 == 0x1c) {
    this = *(void **)(param_2 + 1);
    if ((this != (void *)0x0) && ((*(byte *)((int)this + 0x1e) & 0x80) != 0)) {
      local_32 = param_1;
      local_34 = 0x10;
      FUN_00474c50(this,param_3,&local_34);
      return;
    }
  }
  else if (*param_2 == 0x17) {
    *param_2 = 0x10;
    *(undefined4 *)(param_2 + 1) = param_1;
  }
  return;
}


