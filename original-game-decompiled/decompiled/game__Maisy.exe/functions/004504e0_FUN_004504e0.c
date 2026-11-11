
/* ==== FUN_004504e0 @ 004504e0 ==== 
 * signature: uint __thiscall FUN_004504e0(void * this, int param_1)
 * body: 004504e0-00450533
 */

uint __thiscall FUN_004504e0(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = (int)*(short *)(*(int *)((int)this + 0x26) + 0x26);
  piVar1 = (int *)FUN_00430190(*(int *)((int)this + 0x26));
  if (0 < iVar4) {
    do {
      if ((*piVar1 != 0) && (*(int *)(*piVar1 + 0x2a) == param_1)) {
        FUN_004301f0(*(int *)((int)this + 0x26));
        return iVar3 + 1;
      }
      piVar1 = piVar1 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  uVar2 = FUN_004301f0(*(int *)((int)this + 0x26));
  return uVar2 & 0xffff0000;
}


