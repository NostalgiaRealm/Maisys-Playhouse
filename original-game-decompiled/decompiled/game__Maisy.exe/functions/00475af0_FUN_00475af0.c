
/* ==== FUN_00475af0 @ 00475af0 ==== 
 * signature: undefined4 __cdecl FUN_00475af0(int param_1)
 * body: 00475af0-00475b23
 */

undefined4 __cdecl FUN_00475af0(int param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = *(int **)(param_1 + 0x1a);
  iVar6 = piVar1[1];
  iVar5 = piVar1[2];
  iVar3 = ((int *)*piVar1)[0x13];
  uVar4 = 5;
  sVar2 = (**(code **)(*(int *)*piVar1 + 0x248))();
  uVar4 = FUN_0041f4c0(DAT_004da380,0,sVar2,iVar3,uVar4,iVar5,iVar6);
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}


