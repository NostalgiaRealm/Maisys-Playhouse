
/* ==== FUN_004486a0 @ 004486a0 ==== 
 * signature: int __thiscall FUN_004486a0(void * this, short param_1, short param_2)
 * body: 004486a0-00448703
 */

int __thiscall FUN_004486a0(void *this,short param_1,short param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  piVar1 = (int *)FUN_00430190(*(int *)((int)this + 0x2a));
  iVar4 = *(int *)(*(int *)((int)this + 0x2a) + 0x26);
  if (0 < iVar4) {
    do {
      if ((((int *)*piVar1 != (int *)0x0) && ((int)param_1 <= *(int *)((int)piVar1 + 6))) &&
         (*(int *)((int)piVar1 + 6) <= (int)param_2)) {
        iVar2 = (**(code **)(*(int *)*piVar1 + 0x84))();
        iVar3 = iVar3 + iVar2;
      }
      piVar1 = piVar1 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_004301f0(*(int *)((int)this + 0x2a));
  return iVar3;
}


