
/* ==== FUN_004b312f @ 004b312f ==== 
 * signature: int __fastcall FUN_004b312f(int param_1)
 * body: 004b312f-004b3181
 */

int __fastcall FUN_004b312f(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int local_c;
  undefined4 *local_8;
  
  iVar5 = 0;
  puVar3 = *(undefined4 **)(param_1 + 8);
  iVar4 = local_c;
  while (local_c = iVar4, puVar3 != (undefined4 *)0x0) {
    local_8 = (undefined4 *)*puVar3;
    iVar1 = *(int *)puVar3[2];
    local_c = (**(code **)(iVar1 + 0x58))();
    puVar3 = local_8;
    iVar4 = 0;
    if (local_c != 0) {
      pcVar2 = *(code **)(iVar1 + 0x5c);
      do {
        iVar4 = (*pcVar2)(&local_c);
        if (iVar4 != 0) {
          iVar5 = iVar5 + 1;
        }
        puVar3 = local_8;
        iVar4 = 0;
      } while (local_c != 0);
    }
  }
  return iVar5;
}


