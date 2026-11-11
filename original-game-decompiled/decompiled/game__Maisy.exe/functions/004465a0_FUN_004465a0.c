
/* ==== FUN_004465a0 @ 004465a0 ==== 
 * signature: char * __thiscall FUN_004465a0(void * this, int * param_1, short * param_2, short * param_3)
 * body: 004465a0-00446672;0044667b-00446760;00446769-004469e3;004469f6-00446a66
 */

char * __thiscall FUN_004465a0(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  void *pvVar2;
  char *pcVar3;
  int *piVar4;
  HGLOBAL pvVar5;
  size_t sVar6;
  undefined3 extraout_var_01;
  SIZE_T SVar7;
  undefined3 extraout_var_02;
  int iVar8;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined4 uVar9;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_2c [4];
  int local_28;
  char *local_24;
  uint local_20;
  undefined1 local_1c [4];
  char *local_18;
  char *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004469e4;
  *unaff_FS_OFFSET = &local_10;
  bVar1 = FUN_00437430(param_1,(int *)s_asset_004da304);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    bVar1 = FUN_00437430(param_1,(int *)&DAT_004db968);
    if (CONCAT31(extraout_var_00,bVar1) == 0) {
      bVar1 = FUN_00437430(param_1,(int *)&DAT_004db954);
      if (CONCAT31(extraout_var_01,bVar1) == 0) {
        bVar1 = FUN_00437430(param_1,(int *)s_linecount_004db940);
        if (CONCAT31(extraout_var_02,bVar1) == 0) {
          bVar1 = FUN_00437430(param_1,(int *)s_clickedline_004db92c);
          if (CONCAT31(extraout_var_03,bVar1) == 0) {
            bVar1 = FUN_00437430(param_1,(int *)s_editable_004db8b4);
            if (CONCAT31(extraout_var_04,bVar1) == 0) {
              bVar1 = FUN_00437430(param_1,(int *)s_lineheight_004db918);
              if (CONCAT31(extraout_var_05,bVar1) == 0) {
                bVar1 = FUN_00437430(param_1,(int *)s_textheight_004db8dc);
                if (CONCAT31(extraout_var_06,bVar1) == 0) {
                  bVar1 = FUN_00437430(param_1,(int *)s_linelength_004db904);
                  if (CONCAT31(extraout_var_07,bVar1) == 0) {
                    bVar1 = FUN_00437430(param_1,(int *)s_length_004db8f0);
                    if (CONCAT31(extraout_var_08,bVar1) == 0) {
                      bVar1 = FUN_00437430(param_1,(int *)s_classid_004d9988);
                      if (CONCAT31(extraout_var_09,bVar1) == 0) {
                        pcVar3 = (char *)FUN_00464500(this,param_1,param_2,param_3);
                      }
                      else {
                        pcVar3 = (char *)FUN_00455210(0xffffffff,param_3,s_TextElement_004db97c);
                      }
                    }
                    else {
                      uVar9 = FUN_00445fe0(this);
                      pcVar3 = (char *)FUN_00454d00(param_3,uVar9);
                    }
                  }
                  else {
                    iVar8 = *(int *)((int)this + 0x3a);
                    pvVar2 = FUN_0046da90(this,'\x01','\x01');
                    pcVar3 = (char *)FUN_00446560((int)pvVar2,iVar8);
                    if (pcVar3 == (char *)0x0) {
                      pcVar3 = (char *)FUN_00446a70(param_2,(int *)&local_20);
                      if (pcVar3 == (char *)0x0) {
                        piVar4 = FUN_0046da90(this,'\x01','\x01');
                        pvVar5 = (HGLOBAL)FUN_00449900(piVar4);
                        piVar4 = FUN_0046da90(this,'\x01','\x01');
                        SVar7 = FUN_00449950(piVar4);
                        FUN_00411ea0(local_2c,pvVar5);
                        local_8 = 2;
                        FUN_00411f80(pvVar5,local_20,(uint *)&local_24,(uint *)&local_14,SVar7);
                        if ((local_14 != (char *)0x0) && (local_14[local_28 + -1] == '\r')) {
                          local_14 = local_14 + -1;
                        }
                        iVar8 = (int)local_14 - (int)local_24;
                        if (iVar8 < 0) {
                          iVar8 = 0;
                        }
                        local_18 = (char *)FUN_00454d00(param_3,iVar8);
                        local_8 = 0xffffffff;
                        FUN_004469ee();
                        pcVar3 = local_18;
                      }
                    }
                  }
                }
                else {
                  iVar8 = *(int *)((int)this + 0x3a);
                  pvVar2 = FUN_0046da90(this,'\x01','\x01');
                  pcVar3 = (char *)FUN_00446560((int)pvVar2,iVar8);
                  if (pcVar3 == (char *)0x0) {
                    iVar8 = FUN_00447c00(this);
                    pcVar3 = (char *)FUN_00454d00(param_3,iVar8);
                  }
                }
              }
              else {
                iVar8 = *(int *)((int)this + 0x3a);
                pvVar2 = FUN_0046da90(this,'\x01','\x01');
                pcVar3 = (char *)FUN_00446560((int)pvVar2,iVar8);
                if (pcVar3 == (char *)0x0) {
                  uVar9 = FUN_00447b60(this);
                  pcVar3 = (char *)FUN_00454d00(param_3,(int)(short)uVar9);
                }
              }
            }
            else {
              iVar8 = *(int *)((int)this + 0x3a);
              pvVar2 = FUN_0046da90(this,'\x01','\x01');
              pcVar3 = (char *)FUN_00446560((int)pvVar2,iVar8);
              if (pcVar3 == (char *)0x0) {
                pcVar3 = (char *)FUN_00454c50(param_3,*(byte *)((int)this + 0x154) & 1);
              }
            }
          }
          else {
            iVar8 = *(int *)((int)this + 0x3a);
            pvVar2 = FUN_0046da90(this,'\x01','\x01');
            pcVar3 = (char *)FUN_00446560((int)pvVar2,iVar8);
            if (pcVar3 == (char *)0x0) {
              iVar8 = FUN_00447af0(this);
              pcVar3 = (char *)FUN_00454d00(param_3,iVar8);
            }
          }
        }
        else {
          iVar8 = *(int *)((int)this + 0x3a);
          pvVar2 = FUN_0046da90(this,'\x01','\x01');
          pcVar3 = (char *)FUN_00446560((int)pvVar2,iVar8);
          if (pcVar3 == (char *)0x0) {
            piVar4 = FUN_0046da90(this,'\x01','\x01');
            pvVar5 = (HGLOBAL)FUN_00449900(piVar4);
            piVar4 = FUN_0046da90(this,'\x01','\x01');
            SVar7 = FUN_00449950(piVar4);
            iVar8 = FUN_00412010(pvVar5,SVar7);
            pcVar3 = (char *)FUN_00454d00(param_3,iVar8);
          }
        }
      }
      else {
        iVar8 = *(int *)((int)this + 0x3a);
        pvVar2 = FUN_0046da90(this,'\x01','\x01');
        pcVar3 = (char *)FUN_00446560((int)pvVar2,iVar8);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = (char *)FUN_00446a70(param_2,(int *)&local_20);
          if (pcVar3 == (char *)0x0) {
            piVar4 = FUN_0046da90(this,'\x01','\x01');
            pvVar5 = (HGLOBAL)FUN_00449900(piVar4);
            piVar4 = FUN_0046da90(this,'\x01','\x01');
            SVar7 = FUN_00449950(piVar4);
            FUN_00411ea0(local_2c,pvVar5);
            local_8 = 1;
            FUN_00411f80(pvVar5,local_20,(uint *)&local_18,(uint *)&local_14,SVar7);
            if ((local_14 != (char *)0x0) && (local_14[local_28 + -1] == '\r')) {
              local_14 = local_14 + -1;
            }
            sVar6 = (int)local_14 - (int)local_18;
            if ((int)sVar6 < 0) {
              sVar6 = 0;
            }
            local_24 = (char *)FUN_004550b0(param_3,local_18 + local_28,sVar6);
            local_8 = 0xffffffff;
            FUN_00446761();
            pcVar3 = local_24;
          }
        }
      }
    }
    else {
      iVar8 = *(int *)((int)this + 0x3a);
      pvVar2 = FUN_0046da90(this,'\x01','\x01');
      pcVar3 = (char *)FUN_00446560((int)pvVar2,iVar8);
      if (pcVar3 == (char *)0x0) {
        piVar4 = FUN_0046da90(this,'\x01','\x01');
        pvVar5 = (HGLOBAL)FUN_00449900(piVar4);
        piVar4 = FUN_0046da90(this,'\x01','\x01');
        sVar6 = FUN_00449950(piVar4);
        FUN_00411ea0(local_1c,pvVar5);
        local_8 = 0;
        local_14 = (char *)FUN_004550b0(param_3,local_18,sVar6);
        local_8 = 0xffffffff;
        FUN_00446673();
        pcVar3 = local_14;
      }
    }
  }
  else {
    pcVar3 = (char *)0x10000;
  }
  *unaff_FS_OFFSET = local_10;
  return pcVar3;
}


