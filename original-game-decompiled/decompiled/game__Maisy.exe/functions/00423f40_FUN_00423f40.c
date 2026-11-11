
/* ==== FUN_00423f40 @ 00423f40 ==== 
 * signature: undefined __thiscall FUN_00423f40(void * this, undefined4 param_1)
 * body: 00423f40-00423f6a
 */

void __thiscall FUN_00423f40(void *this,undefined4 param_1)

{
  int *piVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  for (piVar1 = (int *)FUN_004246a0((int)this); piVar1 != (int *)0x0;
      piVar1 = *(int **)((int)piVar1 + 0x3e)) {
    (**(code **)(*piVar1 + 0x38))(param_1);
  }
  return;
}


