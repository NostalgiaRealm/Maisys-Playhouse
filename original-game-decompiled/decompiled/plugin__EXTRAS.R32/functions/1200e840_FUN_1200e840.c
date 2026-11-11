
/* ==== FUN_1200e840 @ 1200e840 ==== 
 * signature: undefined4 __cdecl FUN_1200e840(undefined2 * param_1)
 * body: 1200e840-1200e9b3
 */

undefined4 __cdecl FUN_1200e840(undefined2 *param_1)

{
  code *pcVar1;
  int iVar2;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  param_1[0xd] = 0x66;
  *(undefined4 *)(param_1 + 1) = 0x12e;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0x17;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xe,&local_c);
  DAT_12039a9c = (*pcVar1)(local_c,param_1 + 0x14,0xff);
  if (*(undefined1 **)(param_1 + 0x14) != (undefined1 *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0xff;
    **(undefined1 **)(param_1 + 0x14) = 0;
  }
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    *(undefined1 *)(*(int *)(param_1 + 0x14) + -1 + iVar2) = 0;
  } while (iVar2 < 0xff);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0,&local_c);
  DAT_12039a9c = (*pcVar1)(local_c,*(undefined4 *)(param_1 + 0x14),&DAT_12037220);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xc,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,param_1 + 0x12,*(undefined4 *)(param_1 + 0x14));
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[10] = 1;
  param_1[0xc] = 1;
  param_1[5] = 0x14;
  param_1[7] = 0x14;
  param_1[9] = 0x14;
  param_1[0xb] = 0x14;
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,0,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,0x3c,param_1 + 0x16);
  return 0;
}


