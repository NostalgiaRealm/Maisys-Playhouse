
/* ==== FUN_130032c0 @ 130032c0 ==== 
 * signature: undefined4 __cdecl FUN_130032c0(int param_1)
 * body: 130032c0-13003508
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_130032c0(int param_1)

{
  code *pcVar1;
  int local_4;
  
  if (*(int *)(param_1 + 0x12) != 0) {
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x12));
    *(undefined4 *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  if (*(int *)(param_1 + 0x36) != 0) {
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x36));
    *(undefined4 *)(param_1 + 0x36) = 0;
    *(undefined4 *)(param_1 + 0x2e) = 0;
    *(undefined4 *)(param_1 + 0x32) = 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(int *)(param_1 + 0x66) != 0) {
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x66));
    *(undefined4 *)(param_1 + 0x66) = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    *(undefined4 *)(param_1 + 0x62) = 0;
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  if (*(int *)(param_1 + 0x8a) != 0) {
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x8a));
    *(undefined4 *)(param_1 + 0x8a) = 0;
    *(undefined4 *)(param_1 + 0x82) = 0;
    *(undefined4 *)(param_1 + 0x86) = 0;
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0xa8));
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  return 0;
}


