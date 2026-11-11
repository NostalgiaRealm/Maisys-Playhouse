
/* ==== FUN_120186f0 @ 120186f0 ==== 
 * signature: undefined4 __cdecl FUN_120186f0(int param_1, int param_2)
 * body: 120186f0-12018801
 */

undefined4 __cdecl FUN_120186f0(int param_1,int param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined4 uVar3;
  char local_5;
  int local_4;
  
  if (param_2 != 0) {
    FUN_12018810(param_2,&local_5);
    if (local_5 == '\0') {
      return 0x10000;
    }
    if (*(int *)(param_1 + 0x2e) != 0) {
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
      DAT_12039a9c = (*pcVar2)(local_4,*(undefined4 *)(param_1 + 0x2e));
      *(undefined4 *)(param_1 + 0x2e) = 0;
      *(undefined4 *)(param_1 + 0x26) = 0;
      *(undefined4 *)(param_1 + 0x2a) = 0;
    }
    FUN_120273e0(0,(undefined2 *)(param_1 + 0x20),param_2);
  }
  if (((*(byte *)(param_1 + 0x58) & 0x10) != 0) && (*(int *)(param_1 + 0x10) != 0)) {
    FUN_12027680(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0x69;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (param_2 == 0) {
    uVar3 = FUN_12018920(param_1);
    return uVar3;
  }
  pcVar1 = *(char **)(param_1 + 0x2e);
  *(undefined4 *)(param_1 + 0x58) = 1;
  if (*pcVar1 != '/') {
    if (((*pcVar1 == '.') && (pcVar1[1] == '.')) && (pcVar1[2] == '/')) {
      *(undefined4 *)(param_1 + 0x58) = 3;
    }
    return 0;
  }
  *(undefined4 *)(param_1 + 0x58) = 5;
  return 0;
}


