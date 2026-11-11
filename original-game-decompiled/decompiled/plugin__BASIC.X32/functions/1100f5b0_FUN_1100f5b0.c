
/* ==== FUN_1100f5b0 @ 1100f5b0 ==== 
 * signature: short __cdecl FUN_1100f5b0(int param_1)
 * body: 1100f5b0-1100f61f
 */

short __cdecl FUN_1100f5b0(int param_1)

{
  byte *pbVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  int local_4;
  
  sVar3 = 0;
  local_4 = 0xfffffff;
  sVar4 = 1;
  do {
    pbVar1 = (byte *)(param_1 + sVar4 * 4);
    iVar2 = (0xff - (uint)*pbVar1) * (0xff - (uint)*pbVar1) +
            (0xff - (uint)pbVar1[1]) * (0xff - (uint)pbVar1[1]) +
            (0xff - (uint)pbVar1[2]) * (0xff - (uint)pbVar1[2]);
    if (iVar2 < local_4) {
      sVar3 = sVar4;
      local_4 = iVar2;
    }
    sVar4 = sVar4 + 1;
  } while (sVar4 < 0xff);
  return sVar3;
}


