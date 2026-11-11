
/* ==== FUN_00406440 @ 00406440 ==== 
 * signature: undefined2 __thiscall FUN_00406440(void * this, int * param_1)
 * body: 00406440-004064c6
 */

undefined2 __thiscall FUN_00406440(void *this,int *param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x130))();
  if (cVar1 == '\0') {
    uVar2 = FUN_004063d0(this,(int)param_1);
    return uVar2;
  }
  if ((*(short *)((int)param_1 + 0x92) != -1) &&
     ((int)*(short *)((int)param_1 + 0x92) < *(int *)(*(int *)((int)this + 0x52) + 0x26))) {
    iVar3 = FUN_00430190(*(int *)((int)this + 0x52));
    if (*(int **)(*(short *)((int)param_1 + 0x92) * 0x1a + iVar3) == param_1) {
      FUN_004301f0(*(int *)((int)this + 0x52));
      return *(undefined2 *)((int)param_1 + 0x92);
    }
    FUN_004301f0(*(int *)((int)this + 0x52));
    return 0xffff;
  }
  return 0xffff;
}


