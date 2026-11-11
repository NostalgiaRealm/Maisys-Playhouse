
/* ==== FUN_00440610 @ 00440610 ==== 
 * signature: undefined1 __thiscall FUN_00440610(void * this, int param_1, int * param_2)
 * body: 00440610-0044064d
 */

undefined1 __thiscall FUN_00440610(void *this,int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  int *piVar4;
  
  uVar3 = 0;
  piVar1 = (int *)FUN_004404b0((int)this);
  while (piVar1 != (int *)0x0) {
    if (*piVar1 == param_1) {
      piVar4 = param_2;
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar4 = *piVar1;
        piVar1 = piVar1 + 1;
        piVar4 = piVar4 + 1;
      }
      *(short *)piVar4 = (short)*piVar1;
      uVar3 = 1;
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = *(int **)((int)piVar1 + 0x12);
    }
  }
  return uVar3;
}


