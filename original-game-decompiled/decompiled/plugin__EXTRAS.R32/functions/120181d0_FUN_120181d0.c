
/* ==== FUN_120181d0 @ 120181d0 ==== 
 * signature: int __cdecl FUN_120181d0(int param_1, char * param_2, char * param_3)
 * body: 120181d0-12018623
 */

int __cdecl FUN_120181d0(int param_1,char *param_2,char *param_3)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iStack_24;
  int local_20;
  undefined4 local_1c;
  undefined2 uStack_18;
  undefined4 uStack_16;
  undefined4 uStack_12;
  int iStack_e;
  int iStack_8;
  int iStack_4;
  
  if (*param_2 == '/') {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,5,&local_1c);
    DAT_12039a9c = (*pcVar1)(CONCAT22(local_1c._2_2_,(undefined2)local_1c),&local_20,param_2 + 1,
                             s_<project>_12037934,9);
    if (local_20 != 0) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0,&local_1c);
      DAT_12039a9c = (*pcVar1)(CONCAT22(local_1c._2_2_,(undefined2)local_1c),param_3,param_2);
      return 0;
    }
    iStack_8 = param_1;
    pcVar1 = (code *)FUN_12027370(param_1,0,0x2f,&iStack_24);
    DAT_12039a9c = (*pcVar1)(iStack_24,&iStack_8);
    if ((DAT_12039a9c == 0) && (iStack_8 != 0)) {
      local_1c._0_2_ = 0x66;
      local_1c._2_2_ = 0xffff;
      uStack_18 = 0xffff;
      uStack_16 = 0;
      uStack_12 = 0;
      iStack_e = 0;
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_24);
      DAT_12039a9c = (*pcVar1)(iStack_24,iStack_8,&DAT_12037920,0,&local_1c);
      if (DAT_12039a9c == 0) {
        *param_3 = '/';
        param_3[1] = '\0';
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,2,&iStack_24);
        DAT_12039a9c = (*pcVar1)(iStack_24,param_3,iStack_e);
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,2,&iStack_4);
        DAT_12039a9c = (*pcVar1)(iStack_4,param_3,param_2 + 10);
        if (iStack_e != 0) {
          pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&iStack_24);
          DAT_12039a9c = (*pcVar1)(iStack_24,iStack_e);
        }
        return 0;
      }
      if (iStack_e != 0) {
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&iStack_24);
        DAT_12039a9c = (*pcVar1)(iStack_24,iStack_e);
      }
      return 0x10000;
    }
    return 0x10000;
  }
  if ((*param_2 == '.') && (param_2[1] == '/')) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x38),1,1,&local_1c);
    DAT_12039a9c = (*pcVar1)(CONCAT22(local_1c._2_2_,(undefined2)local_1c),
                             *(undefined4 *)(param_1 + 10),0x2f,param_3,1);
    if (DAT_12039a9c == 0) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,2,&local_1c);
      DAT_12039a9c = (*pcVar1)(CONCAT22(local_1c._2_2_,(undefined2)local_1c),param_3,param_2 + 1);
      return 0;
    }
  }
  if (((*param_2 == '.') && (param_2[1] == '.')) && (param_2[2] == '/')) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x38),1,1,&local_1c);
    iVar2 = (*pcVar1)(CONCAT22(local_1c._2_2_,(undefined2)local_1c),*(undefined4 *)(param_1 + 10),
                      0x2f,param_3,1);
    DAT_12039a9c = iVar2;
    if (iVar2 == 0) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xc,&local_1c);
      iVar6 = 0;
      DAT_12039a9c = (*pcVar1)(CONCAT22(local_1c._2_2_,(undefined2)local_1c),&local_20,param_2);
      iVar2 = 0;
      if (0 < local_20 + -3) {
        do {
          if (((*param_2 != '.') || (param_2[1] != '.')) || (param_2[2] != '/')) break;
          iVar2 = iVar2 + 3;
          param_2 = param_2 + 3;
          iVar6 = iVar6 + 1;
        } while (iVar2 < local_20 + -3);
      }
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xc,&local_1c);
      DAT_12039a9c = (*pcVar1)(CONCAT22(local_1c._2_2_,(undefined2)local_1c),&local_20,param_3);
      iVar5 = 0;
      iVar2 = 0;
      if (0 < local_20) {
        do {
          if (param_3[iVar2] == '/') {
            iVar5 = iVar5 + 1;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < local_20);
      }
      if (iVar6 <= iVar5) {
        iVar2 = 0;
        pcVar3 = param_3;
        pcVar4 = param_3;
        if (-1 < iVar5 - iVar6) {
          do {
            pcVar4 = pcVar3 + 1;
            if (*pcVar3 == '/') {
              iVar2 = iVar2 + 1;
            }
            pcVar3 = pcVar4;
          } while (iVar2 <= iVar5 - iVar6);
        }
        *pcVar4 = '\0';
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,2,&local_1c);
        DAT_12039a9c = (*pcVar1)(CONCAT22(local_1c._2_2_,(undefined2)local_1c),param_3,param_2);
        return 0;
      }
      return 0x10000;
    }
  }
  else {
    iVar2 = 0x10000;
  }
  return iVar2;
}


