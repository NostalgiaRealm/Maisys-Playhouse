
/* ==== FUN_120155c0 @ 120155c0 ==== 
 * signature: int __cdecl FUN_120155c0(int param_1, undefined4 param_2)
 * body: 120155c0-1201575f
 */

int __cdecl FUN_120155c0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  int local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 uStack_10;
  undefined2 local_e;
  undefined2 uStack_c;
  undefined2 local_a;
  undefined2 uStack_8;
  undefined2 local_6;
  undefined2 uStack_4;
  
  local_14 = 0x66;
  local_12 = 0xffff;
  uStack_10 = 0xffff;
  local_e = 0;
  uStack_c = 0;
  local_a = 0;
  uStack_8 = 0;
  local_6 = 0;
  uStack_4 = 0;
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_18);
  iVar2 = (*pcVar1)(local_18,param_1,param_2,&local_14);
  DAT_12039a9c = iVar2;
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x22) != 0) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_18);
      DAT_12039a9c = (*pcVar1)(local_18,*(undefined4 *)(param_1 + 0x22));
      *(undefined4 *)(param_1 + 0x22) = 0;
      *(undefined4 *)(param_1 + 0x1a) = 0;
      *(undefined4 *)(param_1 + 0x1e) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = CONCAT22(local_12,local_14);
    *(uint *)(param_1 + 0x18) = CONCAT22(local_e,uStack_10);
    *(uint *)(param_1 + 0x1c) = CONCAT22(local_a,uStack_c);
    *(uint *)(param_1 + 0x20) = CONCAT22(local_6,uStack_8);
    *(undefined2 *)(param_1 + 0x24) = uStack_4;
    if (*(char *)(param_1 + 0x6c) != '\0') {
      FUN_12004800(param_1);
    }
    *(undefined1 *)(param_1 + 0x6c) = 0;
    if (**(char **)(param_1 + 0x22) == '\0') {
      iVar2 = FUN_120048c0(param_1,(undefined2 *)(param_1 + 0x14));
    }
    if ((iVar2 != 0) && (*(int *)(param_1 + 0x22) != 0)) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_18);
      DAT_12039a9c = (*pcVar1)(local_18,*(undefined4 *)(param_1 + 0x22));
      *(undefined4 *)(param_1 + 0x22) = 0;
      *(undefined4 *)(param_1 + 0x1a) = 0;
      *(undefined4 *)(param_1 + 0x1e) = 0;
      return iVar2;
    }
  }
  else if (CONCAT22(uStack_4,local_6) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_18);
    DAT_12039a9c = (*pcVar1)(local_18,CONCAT22(uStack_4,local_6));
  }
  return iVar2;
}


