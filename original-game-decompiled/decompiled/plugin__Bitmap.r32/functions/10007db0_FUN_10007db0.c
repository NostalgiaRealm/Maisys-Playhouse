
/* ==== FUN_10007db0 @ 10007db0 ==== 
 * signature: undefined __cdecl FUN_10007db0(int param_1, int param_2, byte param_3, undefined4 * param_4, int param_5)
 * body: 10007db0-10007fa2
 */

void __cdecl FUN_10007db0(int param_1,int param_2,byte param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = 8 - param_3;
  DAT_10016ee0 = 1 << (param_3 & 0x1f);
  DAT_10016eb4 = 1 << (bVar2 & 0x1f);
  DAT_10016ed0 = 1 << (bVar2 * '\x02' & 0x1f);
  DAT_10016ea8 = DAT_10016ee0 * DAT_10016ee0;
  DAT_10016f10 = DAT_10016ee0;
  FUN_100085d0(param_4,DAT_10016ee0);
  DAT_10016ec0 = 0;
  if (0 < param_1) {
    do {
      DAT_10016efc = (uint)(*(byte *)(param_2 + 2 + DAT_10016ec0 * 4) >> (bVar2 & 0x1f));
      DAT_10016f24 = (uint)(*(byte *)(param_2 + 1 + DAT_10016ec0 * 4) >> (bVar2 & 0x1f));
      DAT_10016ee8 = (uint)(*(byte *)(param_2 + DAT_10016ec0 * 4) >> (bVar2 & 0x1f));
      iVar1 = DAT_10016eb4 / 2;
      DAT_10016eb8 = ((uint)*(byte *)(param_2 + 2 + DAT_10016ec0 * 4) - DAT_10016eb4 * DAT_10016efc)
                     - iVar1;
      DAT_10016ec8 = ((uint)*(byte *)(param_2 + 1 + DAT_10016ec0 * 4) - DAT_10016eb4 * DAT_10016f24)
                     - iVar1;
      iVar1 = ((uint)*(byte *)(param_2 + DAT_10016ec0 * 4) - DAT_10016eb4 * DAT_10016ee8) - iVar1;
      DAT_10016ebc = DAT_10016eb8 * DAT_10016eb8 + DAT_10016ec8 * DAT_10016ec8 + iVar1 * iVar1;
      DAT_10016ea0 = ((DAT_10016efc + 1) * DAT_10016ed0 -
                     DAT_10016eb4 * (uint)*(byte *)(param_2 + 2 + DAT_10016ec0 * 4)) * 2;
      DAT_10016ed4 = ((DAT_10016f24 + 1) * DAT_10016ed0 -
                     DAT_10016eb4 * (uint)*(byte *)(param_2 + 1 + DAT_10016ec0 * 4)) * 2;
      DAT_10016f1c = ((DAT_10016ee8 + 1) * DAT_10016ed0 -
                     DAT_10016eb4 * (uint)*(byte *)(param_2 + DAT_10016ec0 * 4)) * 2;
      iVar1 = DAT_10016ea8 * DAT_10016efc + DAT_10016ee0 * DAT_10016f24;
      DAT_10016eb0 = param_4 + DAT_10016ee8 + iVar1;
      DAT_10016f18 = param_5 + DAT_10016ee8 + iVar1;
      FUN_10007fb0();
      DAT_10016ec0 = DAT_10016ec0 + 1;
    } while (DAT_10016ec0 < param_1);
  }
  return;
}


