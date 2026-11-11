
/* ==== FUN_00403640 @ 00403640 ==== 
 * signature: undefined __fastcall FUN_00403640(int param_1)
 * body: 00403640-004036ff
 */

void __fastcall FUN_00403640(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_38 [10];
  int *local_10 [2];
  undefined4 local_8;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x82) + 0x26);
  if (DAT_004db868 == '\0') {
    FUN_00443760();
  }
  if (0 < DAT_004db874) {
    DAT_004db874 = DAT_004db874 + -1;
    FUN_00443760();
  }
  iVar4 = 1;
  if (0 < iVar3) {
    do {
      FUN_00430370(*(void **)(param_1 + 0x82),iVar4,local_10);
      local_38[0] = local_8;
      cVar1 = (**(code **)(*local_10[0] + 0x218))(local_38);
      iVar5 = iVar4;
      if (cVar1 != '\0') {
        iVar3 = iVar3 + -1;
        (**(code **)(*local_10[0] + 0x214))(local_38,0);
        (**(code **)(*local_10[0] + 0x19c))();
        uVar6 = 1;
        uVar2 = FUN_00458a00(*(int *)(param_1 + 0x2a));
        (**(code **)(*local_10[0] + 0x1c8))(uVar2,uVar6);
        iVar5 = iVar4 + -1;
        FUN_00430090(*(void **)(param_1 + 0x82),iVar4);
      }
      iVar4 = iVar5 + 1;
    } while (iVar4 <= iVar3);
  }
  return;
}


