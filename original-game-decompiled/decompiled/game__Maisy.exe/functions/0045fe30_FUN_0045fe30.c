
/* ==== FUN_0045fe30 @ 0045fe30 ==== 
 * signature: short __cdecl FUN_0045fe30(int param_1)
 * body: 0045fe30-0045feb4
 */

short __cdecl FUN_0045fe30(int param_1)

{
  byte *pbVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int local_10;
  uint local_c;
  short local_6;
  
  sVar2 = 0;
  local_6 = 1;
  local_10 = 0xfffffff;
  do {
    pbVar1 = (byte *)(param_1 + local_6 * 4);
    iVar3 = 0xff - (uint)*(byte *)(param_1 + 2 + local_6 * 4);
    local_c = (uint)pbVar1[1];
    iVar4 = 0xff - local_c;
    local_c = (uint)*pbVar1;
    iVar3 = iVar3 * iVar3 + (0xff - local_c) * (0xff - local_c) + iVar4 * iVar4;
    if (iVar3 < local_10) {
      sVar2 = local_6;
      local_10 = iVar3;
    }
    local_6 = local_6 + 1;
  } while (local_6 < 0xff);
  return sVar2;
}


