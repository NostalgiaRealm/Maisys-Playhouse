
/* ==== FUN_004623b0 @ 004623b0 ==== 
 * signature: undefined __thiscall FUN_004623b0(void * this, undefined4 param_1)
 * body: 004623b0-004623ff
 */

void __thiscall FUN_004623b0(void *this,undefined4 param_1)

{
  int *piVar1;
  
  for (piVar1 = (int *)FUN_00469fb0(this); piVar1 != (int *)0x0;
      piVar1 = *(int **)((int)piVar1 + 0x6a)) {
    if ((*(uint *)((int)piVar1 + 0x1e) & 4) != 0) {
      (**(code **)(*piVar1 + 0x404))(0,param_1);
    }
  }
  if (DAT_004dbdc4 == '\0') {
    (**(code **)(*(int *)this + 0x290))(0);
  }
  return;
}


