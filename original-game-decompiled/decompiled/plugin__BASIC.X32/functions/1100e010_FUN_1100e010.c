
/* ==== FUN_1100e010 @ 1100e010 ==== 
 * signature: undefined __cdecl FUN_1100e010(undefined4 * param_1, int param_2)
 * body: 1100e010-1100e0cc
 */

void __cdecl FUN_1100e010(undefined4 *param_1,int param_2)

{
  uint uVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  byte local_18;
  byte local_17;
  byte local_16;
  byte local_15;
  
  puVar4 = (undefined4 *)(param_2 + 0x22);
  pbVar5 = &local_18;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pbVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    pbVar5 = pbVar5 + 4;
  }
  *(undefined2 *)pbVar5 = *(undefined2 *)puVar4;
  *(uint *)(param_2 + 0x26) =
       (((uint)local_18 * 0x3c + (uint)local_17) * 0x3c + (uint)local_16) * 0x3c +
       ((uint)local_15 * 0x3c) / 100;
  uVar1 = FUN_1100e0d0(param_1);
  *(short *)(param_2 + 0x38) = (short)uVar1;
  *(short *)(param_2 + 0x3a) = (short)uVar1;
  DVar2 = timeGetTime();
  *(uint *)(param_2 + 0x3c) = (DVar2 * 6) / 100;
  DVar2 = timeGetTime();
  *(uint *)(param_2 + 0x40) = (DVar2 * 6) / 100 + 1;
  FUN_11004840(param_1,10,1);
  return;
}


