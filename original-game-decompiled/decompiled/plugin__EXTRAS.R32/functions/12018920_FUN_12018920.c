
/* ==== FUN_12018920 @ 12018920 ==== 
 * signature: undefined4 __cdecl FUN_12018920(int param_1)
 * body: 12018920-12018a39
 */

undefined4 __cdecl FUN_12018920(int param_1)

{
  code *pcVar1;
  int iVar2;
  short sVar3;
  int local_4;
  
  if (((*(byte *)(param_1 + 0x58) & 0x10) != 0) && (*(int *)(param_1 + 0x10) != 0)) {
    FUN_12027680(param_1 + 0xe);
  }
  if (*(int *)(param_1 + 0x2e) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x2e));
    *(undefined4 *)(param_1 + 0x2e) = 0;
    *(undefined4 *)(param_1 + 0x26) = 0;
    *(undefined4 *)(param_1 + 0x2a) = 0;
  }
  if ((*(int *)(param_1 + 0x6a) != 0) && (*(int *)(param_1 + 0x2e) != 0)) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x2e));
    *(undefined4 *)(param_1 + 0x2e) = 0;
    *(undefined4 *)(param_1 + 0x26) = 0;
    *(undefined4 *)(param_1 + 0x2a) = 0;
  }
  *(undefined2 *)(param_1 + 0x20) = 0x66;
  sVar3 = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined2 *)(param_1 + 0x5c) = 0x66;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x56) = 1;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0x69;
  *(undefined4 **)(param_1 + 0x1c) = (undefined4 *)(param_1 + 0x32);
  do {
    iVar2 = (int)sVar3;
    sVar3 = sVar3 + 1;
    *(undefined4 *)(param_1 + 0x36 + iVar2 * 4) = 0;
  } while (sVar3 < 8);
  return 0;
}


