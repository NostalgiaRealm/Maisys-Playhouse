
/* ==== FUN_004095c0 @ 004095c0 ==== 
 * signature: undefined4 __stdcall FUN_004095c0(int param_1)
 * body: 004095c0-004095f8
 */

undefined4 FUN_004095c0(int param_1)

{
  uint in_EAX;
  int iVar1;
  int *piVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_0046ca90(param_1);
    in_EAX = 0;
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_0046ca90(param_1);
      in_EAX = (**(code **)(*piVar2 + 0x338))();
      if (in_EAX == param_1) {
        return CONCAT31((int3)(in_EAX >> 8),1);
      }
    }
  }
  return in_EAX & 0xffffff00;
}


