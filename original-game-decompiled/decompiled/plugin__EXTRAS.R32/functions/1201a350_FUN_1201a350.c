
/* ==== FUN_1201a350 @ 1201a350 ==== 
 * signature: undefined4 __thiscall FUN_1201a350(void * this, undefined1 param_1, undefined1 param_2, int param_3)
 * body: 1201a350-1201a3cc
 */

undefined4 __thiscall FUN_1201a350(void *this,undefined1 param_1,undefined1 param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = *(int **)((int)this + 0x10);
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  piVar3 = (int *)((int)this + 0xc);
  *(char *)((int)this + 500) = *(char *)((int)this + 500) + '\x01';
  *(int *)((int)this + 0x10) = *piVar1;
  if (*piVar3 == 0) {
    FUN_12004ca0(*(void **)((int)this + 4),*(undefined4 **)((int)this + 8));
  }
  piVar1[1] = *(int *)(*(int *)((int)this + 8) + 0x14) + param_3;
  *(undefined1 *)(piVar1 + 2) = param_1;
  *(undefined1 *)((int)piVar1 + 9) = param_2;
  if (*piVar3 != 0) {
    do {
      piVar2 = (int *)*piVar3;
      if ((uint)piVar1[1] < (uint)piVar2[1]) break;
      piVar3 = piVar2;
    } while (*piVar2 != 0);
  }
  *piVar1 = *piVar3;
  *piVar3 = (int)piVar1;
  *(char *)((int)this + 500) = *(char *)((int)this + 500) + -1;
  return 0;
}


