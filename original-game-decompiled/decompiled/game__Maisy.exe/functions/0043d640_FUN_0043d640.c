
/* ==== FUN_0043d640 @ 0043d640 ==== 
 * signature: undefined4 __cdecl FUN_0043d640(byte * param_1, undefined1 * param_2)
 * body: 0043d640-0043d842
 */

undefined4 __cdecl FUN_0043d640(byte *param_1,undefined1 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  short sVar3;
  short sVar4;
  undefined4 extraout_ECX;
  short sVar5;
  longlong lVar6;
  undefined4 uStack_10;
  byte *local_c;
  short local_8;
  short local_6;
  
  uStack_10 = 0;
  sVar4 = 0;
  sVar5 = 0;
  local_6 = 0;
  local_8 = 0;
  local_c = param_1;
  do {
    pbVar2 = local_c;
    switch(sVar4) {
    case 0:
      sVar3 = FUN_00490cf0(local_c,&local_c,10);
      if (*local_c == 0x3a) {
        sVar4 = 1;
        local_c = local_c + 1;
        local_6 = sVar3;
      }
      else {
        sVar5 = sVar3;
        if (*local_c == 0x2e) {
          sVar4 = 3;
          local_c = local_c + 1;
        }
        else {
          sVar4 = 4;
          local_c = local_c + 1;
        }
      }
      break;
    case 1:
      sVar3 = FUN_00490cf0(local_c,&local_c,10);
      if (*local_c == 0x3a) {
        local_c = local_c + 1;
        local_8 = local_6;
        sVar4 = 2;
        local_6 = sVar3;
      }
      else {
        sVar5 = sVar3;
        if (*local_c == 0x2e) {
          sVar4 = 3;
          local_c = local_c + 1;
        }
        else {
          sVar4 = 4;
          local_c = local_c + 1;
        }
      }
      break;
    case 2:
      sVar5 = FUN_00490cf0(local_c,&local_c,10);
      bVar1 = *local_c;
      local_c = local_c + 1;
      sVar4 = 4 - (ushort)(bVar1 == 0x2e);
      break;
    case 3:
      FUN_00490cf0(local_c,&local_c,10);
      if ((short)local_c != (short)pbVar2) {
        FUN_0048fa92(extraout_ECX);
        lVar6 = __ftol();
        uStack_10 = (uint)(ushort)lVar6 << 0x10;
      }
      sVar4 = 4;
    }
  } while (sVar4 < 4);
  if (sVar4 != 4) {
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    return (uint)param_2 & 0xffffff00;
  }
  if (99 < uStack_10._2_2_) {
    sVar5 = sVar5 + uStack_10._2_2_ / 100;
    uStack_10 = (uint)(ushort)(uStack_10._2_2_ % 100) << 0x10;
  }
  if (0x3b < sVar5) {
    local_6 = local_6 + sVar5 / 0x3c;
    sVar5 = sVar5 % 0x3c;
  }
  if (0x3b < local_6) {
    local_8 = local_8 + local_6 / 0x3c;
    local_6 = local_6 % 0x3c;
  }
  *param_2 = (undefined1)local_8;
  param_2[1] = (undefined1)local_6;
  param_2[2] = (char)sVar5;
  param_2[3] = uStack_10._2_1_;
  return CONCAT31((int3)((uint)param_2 >> 8),1);
}


