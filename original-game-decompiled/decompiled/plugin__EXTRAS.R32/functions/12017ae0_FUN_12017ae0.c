
/* ==== FUN_12017ae0 @ 12017ae0 ==== 
 * signature: int __cdecl FUN_12017ae0(int param_1, undefined2 * param_2, undefined1 param_3)
 * body: 12017ae0-12017f27
 */

/* WARNING: Type propagation algorithm not settling */

int __cdecl FUN_12017ae0(int param_1,undefined2 *param_2,undefined1 param_3)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined2 *puVar5;
  int local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined2 uStack_14;
  int iStack_12;
  undefined4 uStack_e;
  char *pcStack_a;
  int local_4;
  
  if ((*(uint *)(param_1 + 0x58) & 0x10) == 0) {
    if ((*(uint *)(param_1 + 0x58) & 1) != 0) {
      local_4 = 0;
      if (*(int *)(param_1 + 0x2e) == 0) {
        return 0x10000;
      }
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,6,&local_20);
      DAT_12039a9c = (*pcVar1)(local_20,&local_4,*(undefined4 *)(param_1 + 0x2e),0xd);
      if (local_4 == 0) {
        puVar5 = (undefined2 *)(param_1 + 0x20);
      }
      else {
        local_18._0_2_ = 0x66;
        local_18._2_2_ = 0xffff;
        uStack_14 = 0xffff;
        iStack_12 = 0;
        uStack_e = 0;
        pcStack_a = (char *)0x0;
        if (*(int *)(param_1 + 0x2a) != -1 && -1 < *(int *)(param_1 + 0x2a) + 1) {
          pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xe,&local_20);
          DAT_12039a9c = (*pcVar1)(local_20,&pcStack_a,*(int *)(param_1 + 0x2a) + 1);
          if (pcStack_a != (char *)0x0) {
            iStack_12 = *(int *)(param_1 + 0x2a) + 1;
            *pcStack_a = '\0';
          }
        }
        pcVar3 = *(char **)(param_1 + 0x2e);
        iVar2 = 0;
        pcVar4 = pcStack_a;
        if (*(int *)(param_1 + 0x2a) != -1 && -1 < *(int *)(param_1 + 0x2a) + 1) {
          do {
            if (*pcVar3 != '\r') {
              *pcVar4 = *pcVar3;
              pcVar4 = pcVar4 + 1;
            }
            iVar2 = iVar2 + 1;
            pcVar3 = pcVar3 + 1;
          } while (iVar2 < *(int *)(param_1 + 0x2a) + 1);
        }
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xc,&local_20);
        DAT_12039a9c = (*pcVar1)(local_20,&uStack_e,pcStack_a);
        puVar5 = (undefined2 *)&local_18;
      }
      iVar2 = FUN_12017f30(param_1,*(char **)(puVar5 + 7),&iStack_1c);
      if (iVar2 != 0) {
        return iVar2;
      }
      *(undefined4 *)(param_2 + 1) = 0xffffffff;
      *param_2 = 0x66;
      *(undefined4 *)(param_2 + 3) = 0;
      *(undefined4 *)(param_2 + 5) = 0;
      *(undefined4 *)(param_2 + 7) = 0;
      if (iStack_1c != -1 && -1 < iStack_1c + 1) {
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xe,&local_20);
        DAT_12039a9c = (*pcVar1)(local_20,param_2 + 7,iStack_1c + 1);
        if (*(undefined1 **)(param_2 + 7) != (undefined1 *)0x0) {
          *(int *)(param_2 + 3) = iStack_1c + 1;
          **(undefined1 **)(param_2 + 7) = 0;
        }
      }
      if (*(char **)(param_2 + 7) != (char *)0x0) {
        FUN_120181d0(param_1,*(char **)(puVar5 + 7),*(char **)(param_2 + 7));
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xc,&local_20);
        DAT_12039a9c = (*pcVar1)(local_20,param_2 + 5,*(undefined4 *)(param_2 + 7));
      }
      if ((local_4 != 0) && (pcStack_a != (char *)0x0)) {
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_20);
        DAT_12039a9c = (*pcVar1)(local_20,pcStack_a);
      }
      return 0;
    }
LAB_12017f1b:
    iVar2 = 0x10000;
  }
  else {
    if (*(int *)(param_1 + 0x10) == 0) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x38),1,9,&local_18);
      DAT_12039a9c = (*pcVar1)(CONCAT22(local_18._2_2_,(undefined2)local_18),param_1 + 0xe,
                               *(undefined4 *)(param_1 + 0x1c));
      if (DAT_12039a9c != 0) {
        return DAT_12039a9c;
      }
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 8),1,8,&local_18);
      DAT_12039a9c = (*pcVar1)(CONCAT22(local_18._2_2_,(undefined2)local_18),param_1 + 0xe);
      if (*(int *)(param_1 + 0x10) == 0) goto LAB_12017f1b;
    }
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x38),1,8,&local_18);
    iVar2 = (*pcVar1)(CONCAT22(local_18._2_2_,(undefined2)local_18),*(undefined4 *)(param_1 + 0x10),
                      &iStack_1c,param_3);
    DAT_12039a9c = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(param_2 + 1) = 0xffffffff;
      *param_2 = 0x66;
      *(undefined4 *)(param_2 + 3) = 0;
      *(undefined4 *)(param_2 + 5) = 0;
      *(undefined4 *)(param_2 + 7) = 0;
      if (0 < iStack_1c + 1) {
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xe,&local_18);
        DAT_12039a9c = (*pcVar1)(CONCAT22(local_18._2_2_,(undefined2)local_18),param_2 + 7,
                                 iStack_1c + 1);
        if (*(undefined1 **)(param_2 + 7) != (undefined1 *)0x0) {
          *(int *)(param_2 + 3) = iStack_1c + 1;
          **(undefined1 **)(param_2 + 7) = 0;
        }
      }
      if (*(int *)(param_2 + 7) != 0) {
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x38),1,1,&local_18);
        DAT_12039a9c = (*pcVar1)(CONCAT22(local_18._2_2_,(undefined2)local_18),
                                 *(undefined4 *)(param_1 + 0x10),0x2f,*(undefined4 *)(param_2 + 7),
                                 param_3);
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xc,&local_20);
        DAT_12039a9c = (*pcVar1)(local_20,param_2 + 5,*(undefined4 *)(param_2 + 7));
      }
      return 0;
    }
  }
  return iVar2;
}


