
/* ==== FUN_12012570 @ 12012570 ==== 
 * signature: undefined4 __cdecl FUN_12012570(int param_1, int param_2)
 * body: 12012570-1201285c
 */

undefined4 __cdecl FUN_12012570(int param_1,int param_2)

{
  int iVar1;
  short sVar2;
  code *pcVar3;
  undefined2 local_38;
  short sStack_36;
  short sStack_34;
  undefined4 local_30;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_24;
  int iStack_22;
  undefined1 local_1c [4];
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined4 uStack_12;
  undefined4 uStack_e;
  undefined4 uStack_a;
  int iStack_4;
  
  if (*(int *)(param_2 + 0xc) != 0x7d1) {
    if (*(int *)(param_2 + 0xc) == 0x7d2) {
      if (*(int *)(param_1 + 0x88) != 0) {
        pcVar3 = (code *)FUN_12027370(param_1,0,0x20,(int *)local_1c);
        DAT_12039a9c = (*pcVar3)(CONCAT22(local_1c._2_2_,local_1c._0_2_),&local_30);
        pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x24,(int *)&local_38);
        DAT_12039a9c = (*pcVar3)(CONCAT22(sStack_36,local_38),local_30,
                                 *(undefined4 *)(param_1 + 0x88));
        *(undefined4 *)(param_1 + 0x88) = 0;
      }
      return 0;
    }
    return 0x10000;
  }
  pcVar3 = (code *)FUN_12027370(param_1,0,0x20,(int *)&local_38);
  DAT_12039a9c = (*pcVar3)(CONCAT22(sStack_36,local_38),&local_30);
  uStack_24 = 1;
  iStack_22 = 0;
  pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,(int *)&uStack_2c);
  DAT_12039a9c = (*pcVar3)(CONCAT22(uStack_2a,uStack_2c),local_30,s_movie_12037290,0,&uStack_24);
  if (*(int *)(param_1 + 0x88) != 0) {
    pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x24,(int *)&local_38);
    DAT_12039a9c = (*pcVar3)(CONCAT22(sStack_36,local_38),local_30,*(undefined4 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  *(undefined2 *)(param_1 + 0x86) = 0xffff;
  *(undefined2 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (iStack_22 != 0) {
    uStack_2c = 1;
    uStack_2a = 0;
    uStack_28 = 0;
    pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,(int *)&local_38);
    DAT_12039a9c = (*pcVar3)(CONCAT22(sStack_36,local_38),local_30,s_controller_120376e8,0,
                             &uStack_2c);
    iVar1 = CONCAT22(uStack_28,uStack_2a);
    *(int *)(param_1 + 0x7c) = iVar1;
    *(int *)(param_1 + 0x80) = iVar1;
    unique0x100002ff = CONCAT22(uStack_18,local_1c._2_2_);
    if ((iVar1 != 0) &&
       (unique0x10000303 = CONCAT22(uStack_18,local_1c._2_2_), *(int *)(param_1 + 2) != 0)) {
      local_38 = 1;
      sStack_36 = *(short *)(&DAT_1203574e + *(int *)(param_1 + 2) * 2);
      local_1c._0_2_ = 4;
      sStack_34 = sStack_36 >> 0xf;
      uStack_16 = 1;
      uStack_14 = 0;
      uStack_e = 0;
      uStack_12 = 0;
      uStack_a = 0;
      unique0x100002fb = param_1;
      pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,7,&iStack_4);
      DAT_12039a9c = (*pcVar3)(iStack_4,local_30,local_1c,&local_38);
      *(undefined4 *)(param_1 + 0x88) = uStack_12;
    }
    if ((*(byte *)(param_1 + 0xc) & 2) != 0) {
      if ((*(int *)(param_1 + 0x80) != 0) && (*(char **)(param_1 + 0x24) != (char *)0x0)) {
        sVar2 = FUN_12011570(*(undefined4 *)(param_1 + 0x7c),*(char **)(param_1 + 0x24),
                             *(uint *)(param_1 + 0x20),0,1);
        if (sVar2 != 0) {
          *(short *)(param_1 + 0x86) = sVar2;
          return 0;
        }
        *(undefined2 *)(param_1 + 0x86) = 0xfffe;
        return 0;
      }
      *(undefined2 *)(param_1 + 0x86) = 0;
    }
  }
  return 0;
}


