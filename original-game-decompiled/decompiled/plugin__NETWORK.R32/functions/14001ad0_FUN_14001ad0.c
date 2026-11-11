
/* ==== FUN_14001ad0 @ 14001ad0 ==== 
 * signature: undefined4 __cdecl FUN_14001ad0(int * param_1)
 * body: 14001ad0-14001c75
 */

undefined4 __cdecl FUN_14001ad0(int *param_1)

{
  code *pcVar1;
  int local_4;
  
  if (*(char *)((int)param_1 + 0x4de) != '\0') {
    FUN_14004070(param_1);
  }
  if (*(int *)((int)param_1 + 0x3e) != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_4);
    DAT_14028e48 = (*pcVar1)(local_4,*(undefined4 *)((int)param_1 + 0x3e));
    *(undefined4 *)((int)param_1 + 0x3e) = 0;
    *(undefined4 *)((int)param_1 + 0x36) = 0;
    *(undefined4 *)((int)param_1 + 0x3a) = 0;
  }
  if (param_1[0x14] != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_4);
    DAT_14028e48 = (*pcVar1)(local_4,param_1[0x14]);
    param_1[0x14] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  if (*(int *)((int)param_1 + 0x4ee) != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_4);
    DAT_14028e48 = (*pcVar1)(local_4,*(undefined4 *)((int)param_1 + 0x4ee));
    *(undefined4 *)((int)param_1 + 0x4ee) = 0;
    *(undefined4 *)((int)param_1 + 0x4e6) = 0;
    *(undefined4 *)((int)param_1 + 0x4ea) = 0;
  }
  if (param_1[0x140] != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_4);
    DAT_14028e48 = (*pcVar1)(local_4,param_1[0x140]);
    param_1[0x140] = 0;
    param_1[0x13e] = 0;
    param_1[0x13f] = 0;
  }
  if (*(int *)((int)param_1 + 0x512) != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_4);
    DAT_14028e48 = (*pcVar1)(local_4,*(undefined4 *)((int)param_1 + 0x512));
    *(undefined4 *)((int)param_1 + 0x512) = 0;
    *(undefined4 *)((int)param_1 + 0x50a) = 0;
    *(undefined4 *)((int)param_1 + 0x50e) = 0;
  }
  return 0;
}


