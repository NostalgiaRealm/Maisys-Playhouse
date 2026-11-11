
/* ==== FUN_140157b0 @ 140157b0 ==== 
 * signature: undefined4 __cdecl FUN_140157b0(int param_1, uint param_2, undefined4 param_3, uint * param_4, undefined4 param_5)
 * body: 140157b0-14015c59
 */

undefined4 __cdecl
FUN_140157b0(int param_1,uint param_2,undefined4 param_3,uint *param_4,undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcStack_28;
  undefined1 local_24 [6];
  char *pcStack_1e;
  short sStack_1a;
  undefined4 local_18;
  undefined2 uStack_14;
  uint uStack_12;
  uint local_c;
  uint uStack_8;
  int iStack_4;
  
  *param_4 = 0;
  param_4[1] = 0xaaaa5555;
  uVar2 = FUN_14015670(param_3,s_SNDR__14026bc4,&local_c);
  if ((char)uVar2 != '\0') {
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_18);
    DAT_14028e48 = (*pcVar3)(CONCAT22(local_18._2_2_,(undefined2)local_18),param_3,local_c,local_24)
    ;
    pcStack_1e[sStack_1a] = '\0';
    FUN_14012590((int)pcStack_1e);
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,(int *)&pcStack_28);
    DAT_14028e48 = (*pcVar3)(pcStack_28,param_5,pcStack_1e);
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x38),1,7,&iStack_4);
    DAT_14028e48 = (*pcVar3)(iStack_4,param_1,0x2f,pcStack_1e,&uStack_8);
    if (uStack_8 != 0) goto LAB_140158cd;
  }
  uStack_8 = param_2;
LAB_140158cd:
  param_4[2] = uStack_8;
  uVar2 = FUN_14015670(param_3,&DAT_14026bdc,&local_c);
  if ((char)uVar2 != '\0') {
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_18);
    DAT_14028e48 = (*pcVar3)(CONCAT22(local_18._2_2_,(undefined2)local_18),param_3,local_c,local_24)
    ;
    if ((DAT_14028e48 == 0) && (sStack_1a != 0)) {
      iVar5 = 0;
      *param_4 = 0xe0000000;
      if (0 < sStack_1a) {
        do {
          cVar1 = pcStack_1e[iVar5];
          if (DAT_14026bd8 == cVar1) {
            *param_4 = 0xe0000000;
            break;
          }
          if (cVar1 == DAT_14026bd4) {
            *param_4 = *param_4 & 0x7fffffff;
          }
          else if (DAT_14026bd0 == cVar1) {
            *param_4 = *param_4 & 0xbfffffff;
          }
          else if (DAT_14026bcc == cVar1) {
            *param_4 = *param_4 & 0xdfffffff;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < sStack_1a);
      }
    }
  }
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_18);
  DAT_14028e48 = (*pcVar3)(CONCAT22(local_18._2_2_,(undefined2)local_18),param_3,1,local_24);
  if (pcStack_1e != (char *)0x0) {
    pcStack_1e[sStack_1a] = '\0';
    if ((*pcStack_1e < '1') || ('8' < *pcStack_1e)) {
      pcStack_1e = pcStack_1e + 2;
      FUN_14012590((int)pcStack_1e);
      pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x38),1,2,(int *)&pcStack_28);
      DAT_14028e48 = (*pcVar3)(pcStack_28,param_1,pcStack_1e,&local_18);
      param_4[3] = CONCAT22(uStack_14,local_18._2_2_);
      param_4[4] = uStack_12;
    }
    else {
      pcStack_28 = (char *)0x0;
      pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xb,&local_18);
      DAT_14028e48 = (*pcVar3)(CONCAT22(local_18._2_2_,(undefined2)local_18),&pcStack_28,pcStack_1e,
                               &DAT_140265e0);
      if (pcStack_28 == (char *)0x0) {
        uVar4 = _atol(pcStack_1e);
        param_4[3] = uVar4;
        param_4[4] = 0;
      }
      else {
        *pcStack_28 = '\0';
        pcStack_28 = pcStack_28 + 1;
        uVar4 = _atol(pcStack_1e);
        param_4[3] = uVar4;
        uVar4 = _atol(pcStack_28);
        param_4[4] = uVar4;
      }
    }
  }
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_18);
  DAT_14028e48 = (*pcVar3)(CONCAT22(local_18._2_2_,(undefined2)local_18),param_3,2,local_24);
  if (pcStack_1e != (char *)0x0) {
    pcStack_1e[sStack_1a] = '\0';
    FUN_14012590((int)pcStack_1e);
    if (*pcStack_1e == '<') {
      *(undefined4 *)((int)param_4 + 0x1a) = 5;
      *(undefined2 *)(param_4 + 5) = 100;
      FUN_14012430(&PTR_s_<currentScene>_14026a90,(undefined4 *)((int)param_4 + 0x16),pcStack_1e);
    }
    else {
      *(undefined2 *)(param_4 + 5) = 0x6a;
      pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,2,&local_18);
      DAT_14028e48 = (*pcVar3)(CONCAT22(local_18._2_2_,(undefined2)local_18),param_4 + 5,pcStack_1e)
      ;
      *(undefined2 *)(param_4 + 5) = 0x76;
    }
  }
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_18);
  DAT_14028e48 = (*pcVar3)(CONCAT22(local_18._2_2_,(undefined2)local_18),param_3,4,local_24);
  if (pcStack_1e == (char *)0x0) {
    *(undefined2 *)((int)param_4 + 0x26) = 0;
    return 0;
  }
  local_18._0_2_ = 0;
  local_18._2_2_ = 0;
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,4,(int *)&pcStack_28);
  puVar7 = &local_18;
  iVar5 = (int)param_4 + 0x26;
  pcVar6 = pcStack_1e;
  uVar2 = FUN_14008a80(param_1);
  DAT_14028e48 = (*pcVar3)(pcStack_28,uVar2,iVar5,pcVar6,puVar7);
  return 0;
}


