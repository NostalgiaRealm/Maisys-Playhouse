
/* ==== FUN_120135e0 @ 120135e0 ==== 
 * signature: undefined4 __cdecl FUN_120135e0(int param_1)
 * body: 120135e0-12013714
 */

undefined4 __cdecl FUN_120135e0(int param_1)

{
  code *pcVar1;
  int local_4;
  
  if (*(char *)(param_1 + 0x6c) != '\0') {
    FUN_12004800(param_1);
  }
  if (*(int *)(param_1 + 0x22) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x22));
    *(undefined4 *)(param_1 + 0x22) = 0;
    *(undefined4 *)(param_1 + 0x1a) = 0;
    *(undefined4 *)(param_1 + 0x1e) = 0;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(int *)(param_1 + 0x46) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x46));
    *(undefined4 *)(param_1 + 0x46) = 0;
    *(undefined4 *)(param_1 + 0x3e) = 0;
    *(undefined4 *)(param_1 + 0x42) = 0;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return 0;
}


