
/* ==== FUN_12019e10 @ 12019e10 ==== 
 * signature: undefined4 __cdecl FUN_12019e10(int param_1, short * param_2)
 * body: 12019e10-1201a10a
 */

undefined4 __cdecl FUN_12019e10(int param_1,short *param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int local_54;
  uint local_50;
  undefined4 local_4c;
  undefined2 uStack_48;
  undefined4 local_46;
  undefined4 local_42;
  char *local_3e;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  short asStack_2c [22];
  
  local_50 = 0;
  if (*param_2 == 0x6a) {
    FUN_12027790(0,param_2,0);
  }
  if (*param_2 != 0x66) {
    *(undefined4 *)(param_1 + 0x14) = 3;
    return 0x10000;
  }
  if (*(int *)(param_2 + 7) == 0) {
    iVar2 = FUN_12024060(param_1);
    *param_2 = 0x66;
    param_2[1] = -1;
    param_2[2] = -1;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    if (0 < iVar2) {
      pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xe,&local_4c);
      DAT_12039a9c = (*pcVar3)(CONCAT22(local_4c._2_2_,(short)local_4c),param_2 + 7,iVar2);
      if (*(undefined1 **)(param_2 + 7) != (undefined1 *)0x0) {
        *(int *)(param_2 + 3) = iVar2;
        **(undefined1 **)(param_2 + 7) = 0;
      }
    }
  }
  if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_2 + 7) != 0)) {
    local_4c._0_2_ = 0x66;
    local_4c._2_2_ = 0xffff;
    uStack_48 = 0xffff;
    local_46 = 0;
    local_42 = 0;
    local_3e = (char *)0x0;
    pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xe,&local_54);
    DAT_12039a9c = (*pcVar3)(local_54,&local_3e,0x100);
    if (local_3e != (char *)0x0) {
      local_46 = 0x100;
      *local_3e = '\0';
    }
    iStack_38 = 0x30;
    pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,9,&local_54);
    uVar6 = 1;
    DAT_12039a9c = (*pcVar3)(local_54,*(undefined4 *)(param_1 + 0x10),&local_50);
    if (local_50 != 0) {
      do {
        pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + iStack_38),1,6,&local_54);
        DAT_12039a9c = (*pcVar3)(local_54,*(undefined4 *)(param_1 + 0x10),uVar6,asStack_2c);
        FUN_12018ee0(param_1,asStack_2c,(short *)&local_4c);
        if (DAT_12039a9c == 0) {
          uVar4 = 0xffffffff;
          pcVar7 = *(char **)(param_2 + 7);
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar5 = 0xffffffff;
          pcVar7 = local_3e;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          if ((~uVar5 + ~uVar4) - 1 <= *(uint *)(param_2 + 3)) {
            pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,2,&iStack_34);
            DAT_12039a9c = (*pcVar3)(iStack_34,*(undefined4 *)(param_2 + 7),local_3e);
            pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,2,&iStack_30);
            DAT_12039a9c = (*pcVar3)(iStack_30,*(undefined4 *)(param_2 + 7),&DAT_12037990);
            uVar4 = 0xffffffff;
            pcVar7 = local_3e;
            do {
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            *(uint *)(param_2 + 5) = *(int *)(param_2 + 5) + ~uVar4;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 <= local_50);
    }
    if (local_3e != (char *)0x0) {
      pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_54);
      DAT_12039a9c = (*pcVar3)(local_54,local_3e);
    }
  }
  return 0;
}


