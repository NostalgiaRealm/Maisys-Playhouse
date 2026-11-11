
/* ==== FUN_004a5b5b @ 004a5b5b ==== 
 * signature: undefined __thiscall FUN_004a5b5b(void * this, int * param_1, int * param_2, int * param_3)
 * body: 004a5b5b-004a5bc3
 */

void __thiscall FUN_004a5b5b(void *this,int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  piVar2 = (int *)*param_1;
  if (piVar2 == (int *)0xffffffff) {
    uVar3 = 0;
    if (*(uint *)((int)this + 8) != 0) {
      piVar1 = *(int **)((int)this + 4);
      do {
        piVar2 = (int *)*piVar1;
        if (piVar2 != (int *)0x0) break;
        piVar1 = piVar1 + 1;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)((int)this + 8));
    }
  }
  iVar4 = *piVar2;
  if (iVar4 == 0) {
    uVar3 = piVar2[1] + 1;
    if (uVar3 < *(uint *)((int)this + 8)) {
      piVar1 = (int *)(*(int *)((int)this + 4) + uVar3 * 4);
      do {
        iVar4 = *piVar1;
        if (iVar4 != 0) break;
        piVar1 = piVar1 + 1;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)((int)this + 8));
    }
  }
  *param_1 = iVar4;
  *param_2 = piVar2[2];
  *param_3 = piVar2[3];
  return;
}


