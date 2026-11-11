
/* ==== FUN_00450540 @ 00450540 ==== 
 * signature: uint __thiscall FUN_00450540(void * this, int param_1, int param_2)
 * body: 00450540-004505a9
 */

uint __thiscall FUN_00450540(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = (int)*(short *)(*(int *)((int)this + 0x26) + 0x26);
  piVar2 = (int *)FUN_00430190(*(int *)((int)this + 0x26));
  if (0 < iVar5) {
    do {
      iVar1 = *piVar2;
      if (((iVar1 != 0) && (*(int *)(iVar1 + 0x2a) == param_1)) && (*(int *)(iVar1 + 8) == param_2))
      {
        FUN_004301f0(*(int *)((int)this + 0x26));
        return iVar4 + 1;
      }
      piVar2 = piVar2 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  uVar3 = FUN_004301f0(*(int *)((int)this + 0x26));
  return uVar3 & 0xffff0000;
}


