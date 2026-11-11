
/* ==== FUN_00452360 @ 00452360 ==== 
 * signature: undefined __cdecl FUN_00452360(int param_1, int param_2, byte param_3, undefined4 * param_4, int param_5)
 * body: 00452360-00452557
 */

void __cdecl FUN_00452360(int param_1,int param_2,byte param_3,undefined4 *param_4,int param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte local_c;
  
  local_c = 8 - param_3;
  DAT_004e03a8 = 1 << (param_3 & 0x1f);
  DAT_004e037c = 1 << (local_c & 0x1f);
  DAT_004e0398 = 1 << (local_c * '\x02' & 0x1f);
  DAT_004e0370 = DAT_004e03a8 * DAT_004e03a8;
  DAT_004e1bdc = DAT_004e03a8;
  FUN_00452ab0(param_4,DAT_004e03a8);
  DAT_004e0388 = 0;
  if (0 < param_1) {
    do {
      bVar2 = *(byte *)(param_2 + 1 + DAT_004e0388 * 4);
      pbVar1 = (byte *)(param_2 + DAT_004e0388 * 4);
      bVar3 = *pbVar1;
      bVar4 = pbVar1[2];
      DAT_004e1bc8 = (uint)(bVar4 >> (local_c & 0x1f));
      DAT_004e1bf0 = (uint)(bVar2 >> (local_c & 0x1f));
      DAT_004e03b0 = (uint)(bVar3 >> (local_c & 0x1f));
      iVar5 = DAT_004e037c / 2;
      DAT_004e0380 = ((uint)bVar4 - DAT_004e1bc8 * DAT_004e037c) - iVar5;
      DAT_004e0390 = ((uint)bVar2 - DAT_004e1bf0 * DAT_004e037c) - iVar5;
      iVar5 = ((uint)bVar3 - DAT_004e03b0 * DAT_004e037c) - iVar5;
      DAT_004e0384 = iVar5 * iVar5 + DAT_004e0380 * DAT_004e0380 + DAT_004e0390 * DAT_004e0390;
      DAT_004e0368 = ((DAT_004e1bc8 + 1) * DAT_004e0398 - (uint)bVar4 * DAT_004e037c) * 2;
      DAT_004e039c = ((DAT_004e1bf0 + 1) * DAT_004e0398 - (uint)bVar2 * DAT_004e037c) * 2;
      DAT_004e1be8 = ((DAT_004e03b0 + 1) * DAT_004e0398 - (uint)bVar3 * DAT_004e037c) * 2;
      iVar5 = DAT_004e1bf0 * DAT_004e03a8 + DAT_004e1bc8 * DAT_004e0370;
      DAT_004e1be4 = iVar5 + param_5 + DAT_004e03b0;
      DAT_004e0378 = param_4 + DAT_004e03b0 + iVar5;
      FUN_00452560();
      DAT_004e0388 = DAT_004e0388 + 1;
    } while (DAT_004e0388 < param_1);
  }
  return;
}


