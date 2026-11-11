
/* ==== FUN_00490d10 @ 00490d10 ==== 
 * signature: int __cdecl FUN_00490d10(byte * param_1, uint param_2, byte * param_3, int * param_4)
 * body: 00490d10-00490e1c
 */

int __cdecl FUN_00490d10(byte *param_1,uint param_2,byte *param_3,int *param_4)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  uint local_8;
  uint local_4;
  
  uVar2 = param_2;
  bVar6 = DAT_004e6794 == 0;
  local_8 = param_2;
  if (bVar6) {
    DAT_004e6798 = DAT_004e6798 + 1;
  }
  else {
    __lock(0x13);
  }
  piVar3 = param_4;
  local_4 = (uint)!bVar6;
  pbVar4 = param_3;
  while ((local_8 != 0 && (bVar1 = *pbVar4, bVar1 != 0))) {
    if (bVar1 == 0x25) {
      pbVar5 = pbVar4 + 1;
      bVar1 = *pbVar5;
      if (bVar1 == 0x23) {
        pbVar5 = pbVar4 + 2;
      }
      DAT_004de170 = (uint)(bVar1 == 0x23);
      FUN_00490e20(*pbVar5,piVar3,(int *)&param_1,&local_8);
    }
    else {
      if (((PTR_DAT_004de6c0[(uint)bVar1 * 2 + 1] & 0x80) != 0) && (1 < local_8)) {
        pbVar4 = pbVar4 + 1;
        *param_1 = bVar1;
        param_1 = param_1 + 1;
        local_8 = local_8 - 1;
      }
      *param_1 = *pbVar4;
      param_1 = param_1 + 1;
      local_8 = local_8 - 1;
      pbVar5 = pbVar4;
    }
    pbVar4 = pbVar5 + 1;
  }
  if (local_4 == 0) {
    DAT_004e6798 = DAT_004e6798 + -1;
  }
  else {
    FUN_00493e20(0x13);
  }
  if (local_8 != 0) {
    *param_1 = 0;
    return uVar2 - local_8;
  }
  return 0;
}


