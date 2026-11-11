
/* ==== FUN_1100e500 @ 1100e500 ==== 
 * signature: undefined __cdecl FUN_1100e500(int param_1, int param_2, byte param_3, undefined4 * param_4, int param_5)
 * body: 1100e500-1100e706
 */

void __cdecl FUN_1100e500(int param_1,int param_2,byte param_3,undefined4 *param_4,int param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte local_4;
  
  local_4 = 8 - param_3;
  DAT_11037fa0 = 1 << (param_3 & 0x1f);
  DAT_11037f74 = 1 << (local_4 & 0x1f);
  DAT_11037f90 = 1 << (local_4 * '\x02' & 0x1f);
  DAT_11037f68 = DAT_11037fa0 * DAT_11037fa0;
  DAT_110397d4 = DAT_11037fa0;
  FUN_1100ec50(param_4,DAT_11037fa0);
  DAT_11037f80 = 0;
  if (0 < param_1) {
    do {
      bVar2 = *(byte *)(param_2 + 1 + DAT_11037f80 * 4);
      pbVar1 = (byte *)(param_2 + DAT_11037f80 * 4);
      bVar3 = *pbVar1;
      bVar4 = pbVar1[2];
      DAT_110397c0 = (uint)(bVar4 >> (local_4 & 0x1f));
      DAT_110397e8 = (uint)(bVar2 >> (local_4 & 0x1f));
      DAT_11037fa8 = (uint)(bVar3 >> (local_4 & 0x1f));
      iVar5 = DAT_11037f74 / 2;
      DAT_11037f78 = ((uint)bVar4 - DAT_110397c0 * DAT_11037f74) - iVar5;
      DAT_11037f88 = ((uint)bVar2 - DAT_110397e8 * DAT_11037f74) - iVar5;
      iVar5 = ((uint)bVar3 - DAT_11037fa8 * DAT_11037f74) - iVar5;
      DAT_11037f7c = DAT_11037f78 * DAT_11037f78 + DAT_11037f88 * DAT_11037f88 + iVar5 * iVar5;
      DAT_11037f60 = ((DAT_110397c0 + 1) * DAT_11037f90 - DAT_11037f74 * (uint)bVar4) * 2;
      DAT_11037f94 = ((DAT_110397e8 + 1) * DAT_11037f90 - DAT_11037f74 * (uint)bVar2) * 2;
      DAT_110397e0 = ((DAT_11037fa8 + 1) * DAT_11037f90 - DAT_11037f74 * (uint)bVar3) * 2;
      iVar5 = DAT_110397c0 * DAT_11037f68 + DAT_110397e8 * DAT_11037fa0 + DAT_11037fa8;
      DAT_11037f70 = param_4 + iVar5;
      DAT_110397dc = iVar5 + param_5;
      FUN_1100e710();
      DAT_11037f80 = DAT_11037f80 + 1;
    } while (DAT_11037f80 < param_1);
  }
  return;
}


