
/* ==== FUN_00407e50 @ 00407e50 ==== 
 * signature: int __fastcall FUN_00407e50(int param_1)
 * body: 00407e50-00407eda
 */

int __fastcall FUN_00407e50(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short local_6;
  
  local_6 = 0;
  do {
    iVar3 = param_1 + local_6 * 8;
    if ((*(short *)(param_1 + 0xea + local_6 * 8) < *(short *)(iVar3 + 0xee)) &&
       (sVar1 = *(short *)(iVar3 + 0xec), sVar1 < *(short *)(iVar3 + 0xf0))) {
      sVar2 = *(short *)(param_1 + 0xd4);
      if (*(short *)(param_1 + 0xd4) <= sVar1) {
        sVar2 = sVar1;
      }
      iVar3 = CONCAT22((short)((uint)iVar3 >> 0x10),sVar2);
    }
    local_6 = local_6 + 1;
  } while (local_6 < 4);
  return iVar3;
}


