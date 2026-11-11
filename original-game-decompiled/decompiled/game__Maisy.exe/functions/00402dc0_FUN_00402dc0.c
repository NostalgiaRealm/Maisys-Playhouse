
/* ==== FUN_00402dc0 @ 00402dc0 ==== 
 * signature: undefined __cdecl FUN_00402dc0(int param_1)
 * body: 00402dc0-00402e13
 */

void __cdecl FUN_00402dc0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)(param_1 + 0x26);
  if (iVar2 != 0) {
    iVar1 = FUN_00430190(param_1);
    if (0 < iVar2) {
      puVar3 = (undefined4 *)(iVar1 + 0x10);
      do {
        if ((undefined4 *)*puVar3 != (undefined4 *)0x0) {
          FUN_00430540((undefined4 *)*puVar3);
          *puVar3 = 0;
        }
        if ((undefined4 *)puVar3[1] != (undefined4 *)0x0) {
          FUN_00430540((undefined4 *)puVar3[1]);
          puVar3[1] = 0;
        }
        puVar3 = (undefined4 *)((int)puVar3 + 0x1a);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_004301f0(param_1);
  }
  return;
}


