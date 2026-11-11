
/* ==== FUN_004762a0 @ 004762a0 ==== 
 * signature: undefined4 __cdecl FUN_004762a0(int param_1)
 * body: 004762a0-004762ff
 */

uint __cdecl FUN_004762a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = *(int **)(param_1 + 0x1a);
  piVar2 = (int *)*piVar1;
  if ((piVar2 != (int *)0x0) && ((*(byte *)((int)piVar2 + 0x1e) & 0x10) != 0)) {
    if (piVar1[2] != 0) {
      (**(code **)(*piVar2 + 0x70))(piVar1[2]);
    }
    piVar1[3] = piVar2[3];
    piVar1[4] = *(int *)((int)piVar2 + 0x3a);
    piVar1[5] = *(int *)((int)piVar2 + 0x3e);
    iVar3 = *piVar2;
    iVar4 = (**(code **)(iVar3 + 0x218))();
    piVar1[6] = iVar4;
    uVar5 = (**(code **)(iVar3 + 0x244))();
    piVar1[7] = uVar5;
    return uVar5 & 0xffffff00;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


