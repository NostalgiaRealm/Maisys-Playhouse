
/* ==== FUN_12024970 @ 12024970 ==== 
 * signature: undefined4 __cdecl FUN_12024970(int param_1)
 * body: 12024970-12024b15
 */

undefined4 __cdecl FUN_12024970(int param_1)

{
  code *pcVar1;
  int local_4;
  
  if (*(int *)(param_1 + 0xe) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 8),1,1,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0xe));
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  if (*(int *)(param_1 + 0x16) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 8),1,1,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x16));
    *(undefined4 *)(param_1 + 0x16) = 0;
  }
  if (*(int *)(param_1 + 0x1e) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 8),1,1,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x1e));
    *(undefined4 *)(param_1 + 0x1e) = 0;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 0x42) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x42));
    *(undefined4 *)(param_1 + 0x42) = 0;
    *(undefined4 *)(param_1 + 0x3a) = 0;
    *(undefined4 *)(param_1 + 0x3e) = 0;
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return 0;
}


