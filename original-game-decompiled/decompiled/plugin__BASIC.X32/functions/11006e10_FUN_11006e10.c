
/* ==== FUN_11006e10 @ 11006e10 ==== 
 * signature: uint __cdecl FUN_11006e10(undefined4 * param_1, int param_2)
 * body: 11006e10-11006eaa
 */

uint __cdecl FUN_11006e10(undefined4 *param_1,int param_2)

{
  DWORD DVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  byte local_18;
  byte local_17;
  byte local_16;
  byte local_15;
  
  puVar4 = (undefined4 *)(param_2 + 0x66);
  pbVar5 = &local_18;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pbVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    pbVar5 = pbVar5 + 4;
  }
  *(undefined2 *)pbVar5 = *(undefined2 *)puVar4;
  iVar3 = (((uint)local_18 * 0x3c + (uint)local_17) * 0x3c + (uint)local_16) * 0x3c +
          ((uint)local_15 * 0x3c) / 100;
  *(int *)(param_2 + 0x6a) = iVar3;
  DVar1 = timeGetTime();
  *(uint *)(param_2 + 0x7c) = (DVar1 * 6) / 100 + iVar3;
  uVar2 = FUN_11004840(param_1,10,1);
  return uVar2 & 0xffffff00;
}


