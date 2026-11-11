
/* ==== FUN_1200bb80 @ 1200bb80 ==== 
 * signature: undefined4 __cdecl FUN_1200bb80(int param_1)
 * body: 1200bb80-1200bf99
 */

undefined4 __cdecl FUN_1200bb80(int param_1)

{
  char cVar1;
  code *pcVar2;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  double *pdVar12;
  int *piVar13;
  short sStack_d8;
  short sStack_d6;
  undefined2 uStack_d4;
  undefined2 uStack_d2;
  undefined4 local_d0;
  int iStack_cc;
  undefined2 uStack_c8;
  undefined4 uStack_c6;
  undefined4 uStack_c2;
  double local_bc [10];
  undefined2 uStack_68;
  undefined4 uStack_66;
  undefined4 uStack_62;
  int aiStack_54 [21];
  undefined4 uVar3;
  
  local_d0 = 0;
  pcVar2 = (code *)FUN_12027370(param_1,0,0x20,(int *)local_bc);
  DAT_12039a9c = (*pcVar2)(local_bc[0]._0_4_,&local_d0);
  pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2a,aiStack_54);
  DAT_12039a9c = (*pcVar2)(aiStack_54[0],local_d0,&sStack_d6,&sStack_d8);
  if (DAT_12039a9c != 0) {
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x14),1,1,(int *)local_bc);
    DAT_12039a9c = (*pcVar2)(local_bc[0]._0_4_,param_1,0);
    *(undefined1 *)(param_1 + 0x9c) = 0;
    return 0x10000;
  }
  if (*(double *)(param_1 + 0x8c) < 0.0) {
    local_bc[0] = *(double *)(param_1 + 0x8c) - 0.5;
  }
  else {
    local_bc[0] = *(double *)(param_1 + 0x8c) + 0.5;
  }
  lVar6 = __ftol();
  if ((short)lVar6 == sStack_d6) {
    local_bc[0] = *(double *)(param_1 + 0x94);
    if (*(double *)(param_1 + 0x94) < 0.0) {
      local_bc[0] = local_bc[0] - 0.5;
    }
    else {
      local_bc[0] = local_bc[0] + 0.5;
    }
    lVar6 = __ftol();
    if ((short)lVar6 == sStack_d8) goto LAB_1200bced;
  }
  local_bc[0] = (double)CONCAT44(local_bc[0]._4_4_,(int)sStack_d8);
  *(double *)(param_1 + 0x8c) = (double)(int)sStack_d6;
  *(double *)(param_1 + 0x94) = (double)(int)sStack_d8;
LAB_1200bced:
  if (*(int *)(param_1 + 0x1c) == 1) {
    uVar3 = FUN_1200c030(param_1);
    cVar1 = (char)uVar3;
  }
  else {
    uVar4 = FUN_1200c2e0(param_1);
    cVar1 = (char)uVar4;
  }
  if (*(double *)(param_1 + 0x8c) < 0.0) {
    local_bc[0] = *(double *)(param_1 + 0x8c) - 0.5;
  }
  else {
    local_bc[0] = *(double *)(param_1 + 0x8c) + 0.5;
  }
  lVar6 = __ftol();
  sStack_d6 = (short)lVar6;
  local_bc[0] = *(double *)(param_1 + 0x94);
  if (*(double *)(param_1 + 0x94) < 0.0) {
    local_bc[0] = local_bc[0] - 0.5;
  }
  else {
    local_bc[0] = local_bc[0] + 0.5;
  }
  lVar6 = __ftol();
  sStack_d8 = (short)lVar6;
  pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2b,aiStack_54);
  DAT_12039a9c = (*pcVar2)(aiStack_54[0],local_d0,CONCAT22(uStack_d4,sStack_d6),
                           CONCAT22(sStack_d6,sStack_d8));
  if (DAT_12039a9c != 0) {
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x14),1,1,(int *)local_bc);
    DAT_12039a9c = (*pcVar2)(local_bc[0]._0_4_,param_1,0);
    *(undefined1 *)(param_1 + 0x9c) = 0;
    return 0x10000;
  }
  uVar3 = 0;
  if (cVar1 != '\0') {
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x14),1,1,(int *)local_bc);
    DAT_12039a9c = (*pcVar2)(local_bc[0]._0_4_,param_1,0);
    *(undefined1 *)(param_1 + 0x9c) = 0;
    if (*(int *)(param_1 + 0x40) != 1) {
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x16,(int *)&uStack_d4);
      pdVar12 = local_bc;
      iVar9 = param_1 + 0x5a;
      uVar3 = *(undefined4 *)(param_1 + 0x88);
      iVar8 = param_1 + 0x3e;
      iVar7 = param_1 + 0x48;
      uVar5 = FUN_12027340(param_1);
      DAT_12039a9c = (*pcVar2)(CONCAT22(uStack_d2,uStack_d4),uVar5,iVar7,iVar8,iVar9,uVar3,pdVar12);
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x17,&iStack_cc);
      pdVar12 = local_bc;
      uVar3 = FUN_12027340(param_1);
      DAT_12039a9c = (*pcVar2)(iStack_cc,uVar3,pdVar12);
    }
    uStack_66 = 0xc9;
    uStack_62 = 5;
    uStack_c6 = 0x1f6;
    uStack_c2 = 0;
    uStack_68 = 100;
    uStack_c8 = 0x17;
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x15,(int *)local_bc);
    piVar13 = aiStack_54;
    puVar10 = &uStack_68;
    puVar11 = &uStack_c8;
    uVar3 = FUN_12027340(param_1);
    DAT_12039a9c = (*pcVar2)(local_bc[0]._0_4_,uVar3,puVar10,puVar11,piVar13);
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x17,(int *)&uStack_d4);
    piVar13 = aiStack_54;
    uVar3 = FUN_12027340(param_1);
    uVar3 = (*pcVar2)(CONCAT22(uStack_d2,uStack_d4),uVar3,piVar13);
  }
  DAT_12039a9c = uVar3;
  return 0;
}


