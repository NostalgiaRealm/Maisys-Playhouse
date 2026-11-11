
/* ==== FUN_00458f20 @ 00458f20 ==== 
 * signature: undefined __fastcall FUN_00458f20(int param_1)
 * body: 00458f20-00458fae
 */

void __fastcall FUN_00458f20(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  
  iVar3 = *(int *)(param_1 + 0xbe);
  if ((iVar3 != 0) && (iVar2 = *(int *)(iVar3 + 0x26), iVar2 != 0)) {
    sVar4 = 0;
    iVar3 = FUN_00430190(iVar3);
    sVar5 = (short)iVar2;
    if (0 < sVar5) {
      do {
        puVar1 = (undefined4 *)(iVar3 + sVar4 * 8);
        if ((LPVOID)*puVar1 != (LPVOID)0x0) {
          FUN_0043ba20((LPVOID)*puVar1);
          *puVar1 = 0;
        }
        if ((LPVOID)puVar1[1] != (LPVOID)0x0) {
          FUN_0043ba20((LPVOID)puVar1[1]);
          puVar1[1] = 0;
        }
        sVar4 = sVar4 + 1;
      } while (sVar4 < sVar5);
    }
    FUN_004301f0(*(int *)(param_1 + 0xbe));
    (**(code **)(**(int **)(param_1 + 0xbe) + 0xe4))();
  }
  return;
}


