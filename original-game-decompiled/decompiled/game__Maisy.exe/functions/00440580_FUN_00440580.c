
/* ==== FUN_00440580 @ 00440580 ==== 
 * signature: undefined __thiscall FUN_00440580(void * this, int param_1)
 * body: 00440580-004405d0
 */

void __thiscall FUN_00440580(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_004404b0((int)this);
  piVar1 = (int *)0x0;
  while (piVar2 != (int *)0x0) {
    if (*piVar2 == param_1) {
      if (piVar1 == (int *)0x0) {
        FUN_004404c0(this,*(undefined4 *)((int)piVar2 + 0x12));
      }
      else {
        *(undefined4 *)((int)piVar1 + 0x12) = *(undefined4 *)((int)piVar2 + 0x12);
      }
      FUN_00434950(piVar2);
      piVar2 = (int *)0x0;
    }
    else {
      piVar1 = piVar2;
      piVar2 = *(int **)((int)piVar2 + 0x12);
    }
  }
  return;
}


