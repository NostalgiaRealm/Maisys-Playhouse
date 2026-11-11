
/* ==== FUN_004b3b4e @ 004b3b4e ==== 
 * signature: undefined4 * __stdcall FUN_004b3b4e(void * param_1, uint * param_2)
 * body: 004b3b4e-004b3c11
 */

undefined4 * FUN_004b3b4e(void *param_1,uint *param_2)

{
  int *piVar1;
  ushort uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  CHAR local_48 [68];
  
  piVar1 = (int *)((int)param_1 + 0x24);
  if (*(uint *)((int)param_1 + 0x28) < *piVar1 + 2U) {
    FUN_004b4055(param_1,(*piVar1 - *(uint *)((int)param_1 + 0x28)) + 2);
  }
  uVar2 = *(ushort *)*piVar1;
  *piVar1 = (int)((ushort *)*piVar1 + 1);
  *param_2 = (uint)uVar2;
  if (*(uint *)((int)param_1 + 0x28) < *piVar1 + 2U) {
    FUN_004b4055(param_1,(*piVar1 - *(uint *)((int)param_1 + 0x28)) + 2);
  }
  uVar2 = *(ushort *)*piVar1;
  *piVar1 = (int)((ushort *)*piVar1 + 1);
  if (uVar2 < 0x40) {
    uVar6 = (uint)uVar2;
    uVar4 = FUN_004b3e36(param_1,local_48,uVar6);
    if (uVar4 == uVar6) {
      local_48[uVar6] = '\0';
      iVar5 = FUN_004bafca();
      AfxLockGlobals(0);
      for (puVar3 = *(undefined4 **)(iVar5 + 0x1c); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)puVar3[5]) {
        iVar5 = lstrcmpA(local_48,(LPCSTR)*puVar3);
        if (iVar5 == 0) {
          AfxUnlockGlobals(0);
          return puVar3;
        }
      }
      AfxUnlockGlobals(0);
    }
  }
  return (undefined4 *)0x0;
}


