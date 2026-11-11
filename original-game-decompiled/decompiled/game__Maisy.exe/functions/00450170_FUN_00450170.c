
/* ==== FUN_00450170 @ 00450170 ==== 
 * signature: undefined __fastcall FUN_00450170(int param_1)
 * body: 00450170-004501ef
 */

void __fastcall FUN_00450170(int param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  
  sVar2 = *(short *)(*(int *)(param_1 + 0x26) + 0x26);
  sVar4 = 0;
  iVar3 = FUN_00430190(*(int *)(param_1 + 0x26));
  if (0 < sVar2) {
    do {
      piVar1 = (int *)(sVar4 * 0x10 + iVar3);
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 8))(1,0);
        *piVar1 = 0;
      }
      if ((undefined4 *)piVar1[2] != (undefined4 *)0x0) {
        FUN_00430540((undefined4 *)piVar1[2]);
        piVar1[2] = 0;
      }
      sVar4 = sVar4 + 1;
    } while (sVar4 < sVar2);
  }
  FUN_004301f0(*(int *)(param_1 + 0x26));
  (**(code **)(**(int **)(param_1 + 0x26) + 0xe4))();
  return;
}


