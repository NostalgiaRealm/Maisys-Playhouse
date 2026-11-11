
/* ==== FUN_1201ff90 @ 1201ff90 ==== 
 * signature: undefined4 __cdecl FUN_1201ff90(int param_1, int param_2)
 * body: 1201ff90-120205b4
 */

undefined4 __cdecl FUN_1201ff90(int param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  float10 fVar5;
  undefined2 uStack_80;
  undefined2 uStack_7e;
  undefined2 uStack_7c;
  undefined4 local_78;
  int iStack_74;
  uint uStack_70;
  undefined2 uStack_6c;
  uint uStack_6a;
  undefined2 auStack_64 [3];
  undefined4 uStack_5e;
  undefined4 uStack_5a;
  int iStack_56;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined4 uStack_4a;
  undefined2 local_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  undefined4 uStack_3e;
  undefined4 uStack_3a;
  int iStack_36;
  undefined2 uStack_30;
  double dStack_2e;
  undefined2 uStack_24;
  double dStack_22;
  undefined2 uStack_18;
  double dStack_16;
  uint uStack_c;
  uint uStack_8;
  uint uStack_4;
  
  if ((*(int *)(param_1 + 2) != *(int *)(param_2 + 0xc)) ||
     (*(int *)(param_1 + 6) != *(int *)(param_2 + 0x10))) {
    return 0x10000;
  }
  pcVar1 = (code *)FUN_12027370(param_1,0,0x20,(int *)&local_44);
  DAT_12039a9c = (*pcVar1)(CONCAT22(uStack_42,local_44),&local_78);
  if (DAT_12039a9c != 0) {
    return 0x10000;
  }
  local_44 = 0x66;
  uStack_42 = 0xffff;
  uStack_40 = 0xffff;
  uStack_3e = 0;
  uStack_3a = 0;
  iStack_36 = 0;
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,(int *)&uStack_80);
  DAT_12039a9c = (*pcVar1)(CONCAT22(uStack_7e,uStack_80),local_78,s_updatemode_12037bec,0,&local_44)
  ;
  uStack_4a = 0;
  uStack_4c = 1;
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_74);
  DAT_12039a9c = (*pcVar1)(iStack_74,local_78,s_transitionspeed_12037bd8,0,&uStack_4c);
  FUN_12027790(0,auStack_64,0x12037bd0);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,6,(int *)&uStack_70);
  DAT_12039a9c = (*pcVar1)(uStack_70,local_78,s_updatemode_12037bec,0,auStack_64);
  if (iStack_56 != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,(int *)&uStack_80);
    DAT_12039a9c = (*pcVar1)(CONCAT22(uStack_7e,uStack_80),iStack_56);
    iStack_56 = 0;
    uStack_5e = 0;
    uStack_5a = 0;
  }
  if (*(int *)(param_1 + 0xc) == 1) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x1e) != 0) {
      uVar4 = *(uint *)(param_1 + 0x1a);
    }
    uStack_80 = 1;
    uStack_7e = 0;
    uStack_7c = 0;
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_74);
    DAT_12039a9c = (*pcVar1)(iStack_74,local_78,s_movie_12037290,0,&uStack_80);
    if ((CONCAT22(uStack_7c,uStack_7e) != 0) && (uVar4 != 0)) {
      uVar2 = FUN_1201f070(CONCAT22(uStack_7c,uStack_7e),*(char **)(param_1 + 0x1e),uVar4,0,1,
                           &uStack_70,&uStack_c,&uStack_8,&uStack_4);
      if ((short)uVar2 != 0) {
        uStack_6c = 1;
        uVar4 = 0xf;
        uStack_30 = 0xf;
        uStack_6a = uStack_70;
        fVar5 = FUN_120162f0(uStack_c);
        dStack_2e = (double)fVar5;
        uStack_24 = 0xf;
        fVar5 = FUN_120162f0(uStack_8);
        dStack_22 = (double)fVar5;
        uStack_18 = 0xf;
        fVar5 = FUN_120162f0(uStack_4);
        dStack_16 = (double)fVar5;
        goto LAB_1202029e;
      }
    }
    return 0x10000;
  }
  if (*(int *)(param_1 + 0xc) != 2) {
    return 0x10000;
  }
  uStack_6a = *(uint *)(param_1 + 0x2a);
  uStack_30 = 0xf;
  uStack_24 = 0xf;
  uStack_18 = 0xf;
  dStack_2e = *(double *)(param_1 + 0x30);
  dStack_22 = *(double *)(param_1 + 0x3a);
  dStack_16 = *(double *)(param_1 + 0x44);
  uVar4 = *(uint *)(param_1 + 0x24);
  uStack_6c = 1;
LAB_1202029e:
  if ((uVar4 & 1) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,6,(int *)&uStack_80);
    DAT_12039a9c = (*pcVar1)(CONCAT22(uStack_7e,uStack_80),local_78,&DAT_12037bbc,0,&uStack_6c);
  }
  if ((uVar4 & 2) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,6,(int *)&uStack_80);
    DAT_12039a9c = (*pcVar1)(CONCAT22(uStack_7e,uStack_80),local_78,&DAT_12037ba8,0,&uStack_30);
  }
  if ((uVar4 & 4) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,6,(int *)&uStack_80);
    DAT_12039a9c = (*pcVar1)(CONCAT22(uStack_7e,uStack_80),local_78,&DAT_12037b94,0,&uStack_24);
  }
  if ((uVar4 & 8) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,6,(int *)&uStack_80);
    DAT_12039a9c = (*pcVar1)(CONCAT22(uStack_7e,uStack_80),local_78,&DAT_12037b80,0,&uStack_18);
  }
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,6,(int *)&uStack_80);
  DAT_12039a9c = (*pcVar1)(CONCAT22(uStack_7e,uStack_80),local_78,s_transitionspeed_12037bd8,0,
                           param_1 + 0x50);
  pcVar3 = s_swing_12037b78;
  if (*(short *)(param_1 + 0x4e) == 0) {
    pcVar3 = s_normal_12037b70;
  }
  FUN_12027790(0,auStack_64,(int)pcVar3);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,6,&iStack_74);
  DAT_12039a9c = (*pcVar1)(iStack_74,local_78,s_updatemode_12037bec,0,auStack_64);
  if (iStack_56 != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,(int *)&uStack_80);
    DAT_12039a9c = (*pcVar1)(CONCAT22(uStack_7e,uStack_80),iStack_56);
    iStack_56 = 0;
    uStack_5e = 0;
    uStack_5a = 0;
  }
  uStack_50 = 0x14;
  uStack_4e = 1;
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,6,(int *)&uStack_80);
  DAT_12039a9c = (*pcVar1)(CONCAT22(uStack_7e,uStack_80),local_78,s_starttransition_12037b5c,0,
                           &uStack_50);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,6,&iStack_74);
  DAT_12039a9c = (*pcVar1)(iStack_74,local_78,s_transitionspeed_12037bd8,0,&uStack_4c);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,6,(int *)&uStack_70);
  DAT_12039a9c = (*pcVar1)(uStack_70,local_78,s_updatemode_12037bec,0,&local_44);
  if (iStack_36 != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,(int *)&uStack_80);
    DAT_12039a9c = (*pcVar1)(CONCAT22(uStack_7e,uStack_80),iStack_36);
  }
  return 0;
}


