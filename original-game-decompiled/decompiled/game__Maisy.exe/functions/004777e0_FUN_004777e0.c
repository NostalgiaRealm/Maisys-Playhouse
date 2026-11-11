
/* ==== FUN_004777e0 @ 004777e0 ==== 
 * signature: undefined4 __cdecl FUN_004777e0(int param_1)
 * body: 004777e0-00477890
 */

undefined4 __cdecl FUN_004777e0(int param_1)

{
  int *piVar1;
  int *this;
  void *this_00;
  int *piVar2;
  uint uVar3;
  int iVar4;
  short local_c [2];
  int local_8;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x16) + 4);
  if (piVar2 == (int *)0x0) {
    return CONCAT31((int3)((uint)*(int *)(param_1 + 0x16) >> 8),1);
  }
  this = (int *)FUN_0040c620(piVar2);
  piVar1 = *(int **)(param_1 + 0x1a);
  if (this == (int *)0x0) {
    return 1;
  }
  local_8 = FUN_004084c0((int)this);
  if (local_8 == 0) {
    return 1;
  }
  iVar4 = *piVar1;
  this_00 = (void *)FUN_00466a70(piVar2[1]);
  piVar2 = FUN_0044e500(this_00,iVar4);
  if ((piVar2 != (int *)0x0) && ((*(byte *)((int)piVar2 + 0x21) & 8) != 0)) {
    if ((*(byte *)((int)piVar1 + 10) & 1) == 0) {
      (**(code **)(*this + 0x78))(0xd,piVar2,1);
      FUN_00408510(this,(undefined4 *)local_c);
      uVar3 = FUN_004087c0(this,local_c,'\x01');
      return uVar3 & 0xffffff00;
    }
    piVar2 = (int *)FUN_0047ac70(local_8);
  }
  return (uint)piVar2 & 0xffffff00;
}


