
/* ==== FUN_00426090 @ 00426090 ==== 
 * signature: int __thiscall FUN_00426090(void * this, int * param_1, undefined4 param_2, short * param_3)
 * body: 00426090-00426739
 */

int __thiscall FUN_00426090(void *this,int *param_1,undefined4 param_2,short *param_3)

{
  bool bVar1;
  short sVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  uint uVar7;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  undefined3 extraout_var_11;
  undefined3 extraout_var_12;
  undefined3 extraout_var_13;
  undefined3 extraout_var_14;
  undefined3 extraout_var_15;
  undefined3 extraout_var_16;
  undefined3 extraout_var_17;
  undefined3 extraout_var_18;
  undefined3 extraout_var_19;
  undefined3 extraout_var_20;
  undefined3 extraout_var_21;
  undefined3 extraout_var_22;
  undefined3 extraout_var_23;
  undefined3 extraout_var_24;
  undefined3 extraout_var_25;
  undefined3 extraout_var_26;
  undefined3 extraout_var_27;
  undefined3 extraout_var_28;
  undefined3 extraout_var_29;
  undefined3 extraout_var_30;
  undefined3 extraout_var_31;
  longlong lVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  char local_140 [256];
  short local_40;
  undefined4 local_3e;
  short local_14;
  short local_12;
  undefined4 local_10;
  short local_c;
  short local_a;
  undefined4 local_8;
  
  bVar1 = FUN_00437430(param_1,(int *)s_asset_004da304);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    bVar1 = FUN_00437430(param_1,(int *)s_volume_004da2b4);
    if (CONCAT31(extraout_var_00,bVar1) != 0) {
      iVar3 = FUN_00453f10(param_3,&local_40);
      if (iVar3 != 0) {
        return 0x10000;
      }
      if ((short)local_3e < 0x65) {
        if ((short)local_3e < 1) {
          local_3e._0_2_ = 0;
        }
      }
      else {
        local_3e._0_2_ = 100;
      }
      FUN_0044c750(*(void **)((int)this + 0x5a),(int)(short)((short)local_3e * 10));
      return 0;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_timevalue_004da2a0);
    if (CONCAT31(extraout_var_01,bVar1) != 0) {
      if (*param_3 == 9) {
        pvVar5 = *(void **)((int)this + 0x5a);
        lVar8 = FUN_0044c5e0((int)pvVar5);
        FUN_0044c630(pvVar5,(LPARAM)lVar8);
        return 0;
      }
      iVar3 = FUN_00453f10(param_3,&local_40);
      if (iVar3 != 0) {
        return 0x10000;
      }
      pvVar5 = *(void **)((int)this + 0x5a);
      lVar8 = FUN_0044c5e0((int)pvVar5);
      FUN_0044c630(pvVar5,(LPARAM)lVar8);
      return 0;
    }
    bVar1 = FUN_00437430(param_1,(int *)&DAT_004da28c);
    if (CONCAT31(extraout_var_02,bVar1) != 0) {
      if (*param_3 == 0xf) {
        lVar8 = __ftol();
        FUN_0044c710(*(void **)((int)this + 0x5a),(LPARAM)lVar8);
        return 0;
      }
      iVar3 = FUN_00453f10(param_3,&local_40);
      if (iVar3 != 0) {
        return 0x10000;
      }
      FUN_0044c710(*(void **)((int)this + 0x5a),*(LPARAM *)(param_3 + 1));
      return 0;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_timescale_004da278);
    if (CONCAT31(extraout_var_03,bVar1) != 0) {
      iVar3 = FUN_00453f10(param_3,&local_40);
      if (iVar3 != 0) {
        return 0x10000;
      }
      FUN_0044c6e0(*(void **)((int)this + 0x5a),local_3e);
      return 0;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_range_004d9f50);
    if (CONCAT31(extraout_var_04,bVar1) == 0) {
      bVar1 = FUN_00437430(param_1,(int *)&DAT_004da268);
      if (CONCAT31(extraout_var_05,bVar1) != 0) {
        if (*param_3 != 0x14) {
          return 0x10000;
        }
        FUN_0044c810(*(void **)((int)this + 0x5a),(char)param_3[1]);
        return 0;
      }
      bVar1 = FUN_00437430(param_1,(int *)s_loopbackforth_004da2f0);
      if (CONCAT31(extraout_var_06,bVar1) != 0) {
        return 0x10000;
      }
      bVar1 = FUN_00437430(param_1,(int *)s_playeveryframe_004da2dc);
      if (CONCAT31(extraout_var_07,bVar1) != 0) {
        return 0x10000;
      }
      bVar1 = FUN_00437430(param_1,(int *)s_showcontroller_004da2c8);
      if (CONCAT31(extraout_var_08,bVar1) == 0) {
        bVar1 = FUN_00437430(param_1,(int *)s_balance_004da254);
        if (((((CONCAT31(extraout_var_09,bVar1) == 0) &&
              (bVar1 = FUN_00437430(param_1,(int *)s_movie_004da240),
              CONCAT31(extraout_var_10,bVar1) == 0)) &&
             (bVar1 = FUN_00437430(param_1,(int *)s_controller_004da22c),
             CONCAT31(extraout_var_11,bVar1) == 0)) &&
            (((((bVar1 = FUN_00437430(param_1,(int *)s_buffersize_004da218),
                CONCAT31(extraout_var_12,bVar1) == 0 &&
                (bVar1 = FUN_00437430(param_1,(int *)s_movieclick_004da204),
                CONCAT31(extraout_var_13,bVar1) == 0)) &&
               ((bVar1 = FUN_00437430(param_1,(int *)s_controllerclick_004da1f0),
                CONCAT31(extraout_var_14,bVar1) == 0 &&
                ((bVar1 = FUN_00437430(param_1,(int *)s_trackenable_004da1dc),
                 CONCAT31(extraout_var_15,bVar1) == 0 &&
                 (bVar1 = FUN_00437430(param_1,(int *)s_trackdisable_004da1c8),
                 CONCAT31(extraout_var_16,bVar1) == 0)))))) &&
              (bVar1 = FUN_00437430(param_1,(int *)s_pollmovie_004da1b4),
              CONCAT31(extraout_var_17,bVar1) == 0)) &&
             (((bVar1 = FUN_00437430(param_1,(int *)s_track_004da1a0),
               CONCAT31(extraout_var_18,bVar1) == 0 &&
               (bVar1 = FUN_00437430(param_1,(int *)s_trackcount_004da18c),
               CONCAT31(extraout_var_19,bVar1) == 0)) &&
              (bVar1 = FUN_00437430(param_1,(int *)s_tracktype_004da178),
              CONCAT31(extraout_var_20,bVar1) == 0)))))) &&
           ((((bVar1 = FUN_00437430(param_1,(int *)s_trackdisable_004da1c8),
              CONCAT31(extraout_var_21,bVar1) == 0 &&
              (bVar1 = FUN_00437430(param_1,(int *)s_trackdisable_004da1c8),
              CONCAT31(extraout_var_22,bVar1) == 0)) &&
             ((bVar1 = FUN_00437430(param_1,(int *)s_trackhit_004da164),
              CONCAT31(extraout_var_23,bVar1) == 0 &&
              ((bVar1 = FUN_00437430(param_1,(int *)s_tracklayer_004da150),
               CONCAT31(extraout_var_24,bVar1) == 0 &&
               (bVar1 = FUN_00437430(param_1,(int *)s_trackname_004da13c),
               CONCAT31(extraout_var_25,bVar1) == 0)))))) &&
            ((bVar1 = FUN_00437430(param_1,(int *)s_trackposition_004da128),
             CONCAT31(extraout_var_26,bVar1) == 0 &&
             ((((bVar1 = FUN_00437430(param_1,(int *)s_tracksize_004da114),
                CONCAT31(extraout_var_27,bVar1) == 0 &&
                (bVar1 = FUN_00437430(param_1,(int *)s_trackduration_004da100),
                CONCAT31(extraout_var_28,bVar1) == 0)) &&
               (bVar1 = FUN_00437430(param_1,(int *)s_trackoffset_004da0ec),
               CONCAT31(extraout_var_29,bVar1) == 0)) &&
              ((bVar1 = FUN_00437430(param_1,(int *)s_trackvolume_004da0d8),
               CONCAT31(extraout_var_30,bVar1) == 0 &&
               (bVar1 = FUN_00437430(param_1,(int *)s_trackbalance_004da0c4),
               CONCAT31(extraout_var_31,bVar1) == 0)))))))))) {
          iVar3 = FUN_0044f980(this,param_1,param_2,param_3);
          return iVar3;
        }
        return 0;
      }
      if (*param_3 != 0x14) {
        return 0x10000;
      }
      FUN_0044c860();
    }
    else {
      if (*param_3 == 0xb) {
        pvVar5 = *(void **)((int)this + 0x5a);
        lVar8 = FUN_0044c5e0((int)pvVar5);
        iVar3 = (int)lVar8;
        lVar8 = FUN_0044c5e0((int)pvVar5);
        FUN_0044c790(pvVar5,(int)lVar8,iVar3);
        return 0;
      }
      if (*param_3 != 0x66) {
        return 0x10000;
      }
      puVar11 = &local_10;
      puVar10 = &local_8;
      pcVar9 = *(char **)(param_3 + 7);
      local_8 = 0;
      local_10 = 0;
      pvVar5 = FUN_0046da90(this,'\x01','\x01');
      uVar7 = FUN_004751b0(pvVar5,pcVar9,puVar10,puVar11);
      if ((char)uVar7 != '\0') {
        pvVar5 = *(void **)((int)this + 0x5a);
        lVar8 = FUN_0044c5e0((int)pvVar5);
        iVar3 = (int)lVar8;
        lVar8 = FUN_0044c5e0((int)pvVar5);
        FUN_0044c790(pvVar5,(int)lVar8,iVar3);
        return 0;
      }
    }
  }
  else {
    if ((((*param_3 != 0x69) || (piVar6 = *(int **)(param_3 + 1), piVar6 == (int *)0x0)) ||
        ((*(byte *)(piVar6 + 8) & 1) == 0)) &&
       (iVar3 = FUN_00456560(param_3,local_140,0x100,(int *)0x0), piVar6 = (int *)0x0, iVar3 == 0))
    {
      iVar3 = **(int **)(*(int *)((int)this + 4) + 0x48);
      iVar4 = FUN_0046ca60((int)this);
      sVar2 = (**(code **)(iVar3 + 0x120))(*(undefined4 *)(iVar4 + 0x96),0);
      pcVar9 = local_140;
      pvVar5 = (void *)FUN_00466a70(*(int *)((int)this + 4));
      piVar6 = FUN_0044de20(pvVar5,pcVar9,sVar2);
    }
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0x114))();
    }
    pvVar5 = FUN_0046da90(this,'\x01','\x01');
    if ((((pvVar5 != (void *)0x0) && (piVar6 != (int *)0x0)) &&
        (piVar6 != *(int **)((int)this + 0x52))) &&
       (*(short *)((int)piVar6 + 0x22) == *(short *)((int)*(int **)((int)this + 0x52) + 0x22))) {
      iVar3 = *(int *)this;
      (**(code **)(iVar3 + 0x250))(0);
      (**(code **)(iVar3 + 0x2a4))(piVar6);
      (**(code **)(*piVar6 + 0x1dc))(&local_14);
      (**(code **)(iVar3 + 0x398))(&local_c,0);
      local_8 = CONCAT22((local_a - local_12) + local_10._2_2_,
                         (local_c - local_14) + (short)local_10);
      (**(code **)(iVar3 + 0x39c))(&local_c);
      (**(code **)(iVar3 + 0x3a4))(&local_c);
      (**(code **)(iVar3 + 0x3b4))(1);
      sVar2 = (**(code **)(iVar3 + 0x27c))();
      piVar6 = (int *)FUN_0046ca10((int)this);
      FUN_0043d250(piVar6,this,sVar2);
      (**(code **)(iVar3 + 0x24c))();
      return 0;
    }
  }
  return 0;
}


