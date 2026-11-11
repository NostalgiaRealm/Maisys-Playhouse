
/* ==== FUN_00458990 @ 00458990 ==== 
 * signature: undefined __thiscall FUN_00458990(void * this, int param_1)
 * body: 00458990-004589f0
 */

void __thiscall FUN_00458990(void *this,int param_1)

{
  uint uVar1;
  int *piVar2;
  
  piVar2 = *(int **)((int)this + 0x4c);
  if (piVar2 == (int *)0x0) {
    piVar2 = *(int **)((int)this + 0x66);
  }
  if ((param_1 != 0) && (piVar2 != (int *)0x0)) {
    uVar1 = *(uint *)(param_1 + 0x1e);
    if ((uVar1 & 2) != 0) {
      (**(code **)(*piVar2 + 0x2b0))(param_1,1);
      return;
    }
    if ((uVar1 & 0x10) != 0) {
      (**(code **)(*piVar2 + 0x2b8))(param_1,1);
      return;
    }
    if ((uVar1 & 0x10000) != 0) {
      piVar2 = (int *)FUN_00466a70((int)this);
      (**(code **)(*piVar2 + 0xc))(param_1);
    }
  }
  return;
}


