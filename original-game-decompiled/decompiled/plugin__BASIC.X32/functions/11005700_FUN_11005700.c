
/* ==== FUN_11005700 @ 11005700 ==== 
 * signature: undefined4 __cdecl FUN_11005700(undefined4 param_1, int * param_2, short param_3, short * param_4)
 * body: 11005700-1100584f
 */

undefined4 __cdecl FUN_11005700(undefined4 param_1,int *param_2,short param_3,short *param_4)

{
  int iVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  short local_2a;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  short local_10;
  short local_e;
  int local_c;
  int local_4;
  
  piVar3 = param_2 + param_3 * 2;
  if ((piVar3[-2] == *param_2) && (piVar3 = (int *)piVar3[-1], (int *)param_2[1] == piVar3)) {
    param_3 = param_3 + -1;
  }
  uVar5 = (undefined2)((uint)piVar3 >> 0x10);
  local_2a = 0;
  *param_4 = 0;
  if (0 < param_3) {
    local_4 = param_3 + -1;
    do {
      iVar6 = (int)local_2a;
      iVar4 = param_2[iVar6 * 2 + 1];
      iVar1 = param_2[iVar6 * 2];
      if (iVar6 < local_4) {
        iVar6 = iVar6 + 1;
      }
      else {
        iVar6 = 0;
      }
      local_1c = param_2[iVar6 * 2 + 1];
      if (local_1c != iVar4) {
        local_28 = iVar1;
        local_24 = iVar4;
        local_20 = param_2[iVar6 * 2];
        if (local_1c < iVar4) {
          local_28 = param_2[iVar6 * 2];
          local_24 = local_1c;
          local_20 = iVar1;
          local_1c = iVar4;
          local_c = iVar1;
        }
        local_18 = local_28 << 0x10;
        local_10 = (short)local_24;
        local_e = (short)local_1c - (short)local_24;
        if (local_e == 0) {
          local_14 = 0;
        }
        else {
          local_14 = ((local_20 - local_28) * 0x10000) / (int)local_e;
        }
        sVar2 = 0;
        if (0 < *param_4) {
          do {
            if ((short)local_24 < *(short *)(*(int *)(param_4 + 1) + 8 + sVar2 * 0xc)) break;
            sVar2 = sVar2 + 1;
          } while (sVar2 < *param_4);
        }
        iVar4 = FUN_11005850(param_1,&local_18,param_4,sVar2);
      }
      local_2a = local_2a + 1;
      uVar5 = (undefined2)((uint)iVar4 >> 0x10);
    } while (local_2a < param_3);
  }
  return CONCAT22(uVar5,*param_4);
}


