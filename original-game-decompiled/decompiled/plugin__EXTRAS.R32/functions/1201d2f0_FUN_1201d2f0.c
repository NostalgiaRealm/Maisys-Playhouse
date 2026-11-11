
/* ==== FUN_1201d2f0 @ 1201d2f0 ==== 
 * signature: undefined4 __cdecl FUN_1201d2f0(int param_1, int param_2, undefined4 param_3, short param_4)
 * body: 1201d2f0-1201d754
 */

undefined4 __cdecl FUN_1201d2f0(int param_1,int param_2,undefined4 param_3,short param_4)

{
  byte bVar1;
  code *pcVar2;
  short local_22;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (1 < param_4) {
    pcVar2 = (code *)FUN_12027370(param_2,1,8,&local_20);
    DAT_12039a9c = (*pcVar2)(local_20,&local_22,1);
    if (local_22 == 2) {
      pcVar2 = (code *)FUN_12027370(param_2,1,6,&local_20);
      DAT_12039a9c = (*pcVar2)(local_20,param_1);
      pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_1c);
      DAT_12039a9c = (*pcVar2)(iStack_1c,param_1 + 10);
      pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_18);
      DAT_12039a9c = (*pcVar2)(iStack_18,param_1 + 0x14);
      pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_14);
      DAT_12039a9c = (*pcVar2)(iStack_14,param_1 + 0x1e);
      pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_10);
      DAT_12039a9c = (*pcVar2)(iStack_10,param_1 + 0x24);
      pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_c);
      DAT_12039a9c = (*pcVar2)(iStack_c,param_1 + 0x36);
      pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_8);
      DAT_12039a9c = (*pcVar2)(iStack_8,param_1 + 0x62);
      pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_4);
      DAT_12039a9c = (*pcVar2)(iStack_4,param_1 + 0x8e);
      bVar1 = *(byte *)(param_1 + 0xba);
      *(undefined4 *)(param_1 + 0xb2) = 0;
      *(byte *)(param_1 + 0xba) = bVar1 & 0xfe;
      *(byte *)(param_1 + 0xba) = bVar1 & 0xf6;
      *(byte *)(param_1 + 0xba) = bVar1 & 0xe6;
      return 0;
    }
    return 0x10000;
  }
  if (param_4 == 1) {
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&local_20);
    DAT_12039a9c = (*pcVar2)(local_20,param_1);
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_1c);
    DAT_12039a9c = (*pcVar2)(iStack_1c,param_1 + 10);
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_18);
    DAT_12039a9c = (*pcVar2)(iStack_18,param_1 + 0x14);
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_14);
    DAT_12039a9c = (*pcVar2)(iStack_14,param_1 + 0x1e);
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_10);
    DAT_12039a9c = (*pcVar2)(iStack_10,param_1 + 0x24);
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_c);
    DAT_12039a9c = (*pcVar2)(iStack_c,param_1 + 0x36);
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_8);
    DAT_12039a9c = (*pcVar2)(iStack_8,param_1 + 0x62);
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_4);
    DAT_12039a9c = (*pcVar2)(iStack_4,param_1 + 0x8e);
    bVar1 = *(byte *)(param_1 + 0xba);
    *(undefined4 *)(param_1 + 0xb2) = 0;
    *(byte *)(param_1 + 0xba) = bVar1 & 0xfe;
    *(byte *)(param_1 + 0xba) = bVar1 & 0xf6;
    *(byte *)(param_1 + 0xba) = bVar1 & 0xe6;
    return 0;
  }
  if (param_4 == 0) {
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&local_20);
    DAT_12039a9c = (*pcVar2)(local_20,param_1);
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_1c);
    DAT_12039a9c = (*pcVar2)(iStack_1c,param_1 + 10);
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_18);
    DAT_12039a9c = (*pcVar2)(iStack_18,param_1 + 0x62);
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_14);
    DAT_12039a9c = (*pcVar2)(iStack_14,param_1 + 0x1e);
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_10);
    DAT_12039a9c = (*pcVar2)(iStack_10,param_1 + 0x14);
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_c);
    DAT_12039a9c = (*pcVar2)(iStack_c,param_1 + 0x24);
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_8);
    DAT_12039a9c = (*pcVar2)(iStack_8,param_1 + 0x36);
    bVar1 = *(byte *)(param_1 + 0xba);
    *(undefined4 *)(param_1 + 0xb2) = 0;
    *(byte *)(param_1 + 0xba) = bVar1 & 0xfe;
    *(byte *)(param_1 + 0xba) = bVar1 & 0xf6;
    *(byte *)(param_1 + 0xba) = bVar1 & 0xe6;
    return 0;
  }
  return 0x10000;
}


