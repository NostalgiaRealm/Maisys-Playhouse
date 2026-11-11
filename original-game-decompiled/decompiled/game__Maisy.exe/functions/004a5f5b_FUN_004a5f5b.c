
/* ==== FUN_004a5f5b @ 004a5f5b ==== 
 * signature: undefined __thiscall FUN_004a5f5b(void * this, int * param_1, CString * param_2, int * param_3)
 * body: 004a5f5b-004a5fc7
 */

void __thiscall FUN_004a5f5b(void *this,int *param_1,CString *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (piVar4 == (int *)0xffffffff) {
    uVar2 = 0;
    if (*(uint *)((int)this + 8) != 0) {
      piVar1 = *(int **)((int)this + 4);
      do {
        piVar4 = (int *)*piVar1;
        if (piVar4 != (int *)0x0) break;
        piVar1 = piVar1 + 1;
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)((int)this + 8));
    }
  }
  iVar3 = *piVar4;
  if (iVar3 == 0) {
    uVar2 = piVar4[1] + 1;
    if (uVar2 < *(uint *)((int)this + 8)) {
      piVar1 = (int *)(*(int *)((int)this + 4) + uVar2 * 4);
      do {
        iVar3 = *piVar1;
        if (iVar3 != 0) break;
        piVar1 = piVar1 + 1;
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)((int)this + 8));
    }
  }
  *param_1 = iVar3;
  CString::operator=(param_2,(CString *)(piVar4 + 2));
  *param_3 = piVar4[3];
  return;
}


