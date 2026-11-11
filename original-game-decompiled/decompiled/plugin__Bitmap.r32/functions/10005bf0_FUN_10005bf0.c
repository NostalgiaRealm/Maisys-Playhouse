
/* ==== FUN_10005bf0 @ 10005bf0 ==== 
 * signature: undefined4 __cdecl FUN_10005bf0(int param_1, int param_2)
 * body: 10005bf0-10005e6a
 */

undefined4 __cdecl FUN_10005bf0(int param_1,int param_2)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  HGLOBAL pvVar5;
  int iVar6;
  short *psVar7;
  longlong lVar8;
  int local_18;
  undefined4 local_14;
  undefined8 uStack_10;
  double dStack_8;
  
  iVar3 = param_2;
  iVar6 = param_1;
  local_14 = 0x10000;
  local_18 = 0;
  if ((*(int *)(param_2 + 0xc) == *(int *)(param_1 + 2)) &&
     (*(int *)(param_2 + 0x10) == *(int *)(param_1 + 6))) {
    pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1c,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,iVar6 + 10,iVar6,&local_18,0);
    if ((DAT_100173bc == 0) && (local_18 != 0)) {
      uStack_10 = (double)CONCAT26(uStack_10._6_2_,1);
      pcVar2 = (code *)FUN_100089c7(local_18,0,0x16,&param_2);
      DAT_100173bc = (*pcVar2)(param_2,s_winvalue_10013090,0,&uStack_10);
      if ((DAT_100173bc == 0) && (puVar4 = uStack_10._2_4_, uStack_10._2_4_ != (undefined4 *)0x0)) {
        psVar7 = (short *)(iVar6 + 0x36);
        if (*(short *)(iVar6 + 0x36) == 0x6e) {
          psVar7 = (short *)(iVar3 + 0x26);
        }
        psVar7 = FUN_10005e70(iVar6,psVar7,(int *)0x0);
        sVar1 = *psVar7;
        if (sVar1 == 1) {
          uStack_10 = (double)*(int *)(psVar7 + 1);
          dStack_8 = uStack_10;
        }
        else if (sVar1 == 10) {
          param_2 = (int)psVar7[2];
          uStack_10 = (double)(int)psVar7[1];
          dStack_8 = (double)param_2;
        }
        else {
          if (sVar1 != 0xf) {
            return local_14;
          }
          dStack_8 = *(double *)(psVar7 + 1);
          uStack_10 = *(double *)(psVar7 + 1);
        }
        if ((0.0 <= dStack_8) && (0.0 <= uStack_10)) {
          if (*(int *)(iVar6 + 100) == 0) {
            FUN_10006070((int)puVar4,&param_2,&param_1);
            iVar3 = param_2;
            lVar8 = __ftol();
            iVar6 = (int)lVar8;
            param_2 = *(int *)(iVar3 + 8);
            if (param_2 < 0) {
              param_2 = -param_2;
            }
          }
          else {
            lVar8 = __ftol();
            iVar6 = (int)lVar8;
          }
          lVar8 = __ftol();
          iVar3 = (int)lVar8;
          if (iVar6 < 1) {
            iVar6 = 1;
          }
          if (iVar3 < 1) {
            iVar3 = 1;
          }
          puVar4 = FUN_10007110(puVar4,iVar6,iVar3);
          if (puVar4 != (undefined4 *)0x0) {
            uStack_10._0_6_ = CONCAT42(puVar4,1);
            pcVar2 = (code *)FUN_100089c7(local_18,0,0x17,&param_2);
            DAT_100173bc = (*pcVar2)(param_2,s_winvalue_10013090,0,&uStack_10);
            pvVar5 = GlobalHandle(puVar4);
            GlobalUnlock(pvVar5);
            pvVar5 = GlobalHandle(puVar4);
            GlobalFree(pvVar5);
            local_14 = 0;
          }
        }
      }
    }
  }
  return local_14;
}


