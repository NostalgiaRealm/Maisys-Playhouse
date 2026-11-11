
/* ==== FUN_004719b0 @ 004719b0 ==== 
 * signature: undefined4 __cdecl FUN_004719b0(int param_1, uint param_2)
 * body: 004719b0-00471a37
 */

undefined4 __cdecl FUN_004719b0(int param_1,uint param_2)

{
  int iVar1;
  short sVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  
  piVar3 = (int *)FUN_0048b560(0,param_1);
  piVar3 = (int *)*piVar3;
  if ((*(byte *)(piVar3 + 0x12) & 2) == 0) {
    return 0x10000;
  }
  iVar1 = *piVar3;
  sVar2 = (**(code **)(iVar1 + 0x27c))();
  if (param_2 == (int)sVar2) {
    return 0;
  }
  if ((int)sVar2 == 0) {
    return 0x10000;
  }
  uVar5 = param_2;
  piVar4 = (int *)FUN_0046ca10((int)piVar3);
  piVar4 = FUN_0043cbd0(piVar4,uVar5);
  if (piVar4 != (int *)0x0) {
    sVar2 = 1;
    uVar5 = param_2;
    piVar3 = (int *)FUN_0046ca10((int)piVar3);
    FUN_0043ca90(piVar3,uVar5,sVar2);
  }
  (**(code **)(iVar1 + 0x278))(param_2);
  return 0;
}


