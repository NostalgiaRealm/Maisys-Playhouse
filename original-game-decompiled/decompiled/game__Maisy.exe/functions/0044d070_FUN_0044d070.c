
/* ==== FUN_0044d070 @ 0044d070 ==== 
 * signature: int __thiscall FUN_0044d070(void * this, int * param_1, short * param_2, short * param_3)
 * body: 0044d070-0044d31f
 */

int __thiscall FUN_0044d070(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined3 extraout_var_00;
  undefined4 uVar3;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  void *pvVar4;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  uint uVar5;
  int iVar6;
  char local_28 [20];
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_c = 0;
  bVar1 = FUN_00437430(param_1,(int *)s_countundeleted_004dbb1c);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = FUN_0044e350((int)this);
    iVar2 = FUN_00454d00(param_3,iVar2);
    return iVar2;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_count_004dbb94);
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    uVar3 = FUN_0044e340((int)this);
    iVar2 = FUN_00454d00(param_3,uVar3);
    return iVar2;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_loadedcount_004dbb6c);
  if ((CONCAT31(extraout_var_01,bVar1) != 0) ||
     (bVar1 = FUN_00437430(param_1,(int *)s_loaded_004dbba8), CONCAT31(extraout_var_02,bVar1) != 0))
  {
    FUN_0044cf20(this,FUN_0044d320,&local_c);
    iVar2 = FUN_00454d00(param_3,local_c);
    return iVar2;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_present_004dbb58);
  if (CONCAT31(extraout_var_03,bVar1) != 0) {
    FUN_0044cf20(this,FUN_0044d340,&local_c);
    iVar2 = FUN_00454d00(param_3,local_c);
    return iVar2;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_asset_004da304);
  if (CONCAT31(extraout_var_04,bVar1) != 0) {
    if ((param_2 != (short *)0x0) &&
       (iVar2 = FUN_00455c10(param_2,&local_14,(int *)0x0), iVar2 == 0)) {
      pvVar4 = FUN_0044db20(this,local_14,0,'\x01','\x01');
      iVar2 = FUN_00454d50(param_3,pvVar4);
      return iVar2;
    }
    return 0x40004;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_bytesloaded_004da31c);
  if (CONCAT31(extraout_var_05,bVar1) != 0) {
    local_8 = 0;
    FUN_0044cf20(this,FUN_0044d350,&local_8);
    iVar2 = FUN_00454d00(param_3,local_8);
    return iVar2;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_trickleenabled_004dbb44);
  if (CONCAT31(extraout_var_06,bVar1) != 0) {
    iVar2 = FUN_00454c50(param_3,DAT_004dbb18 == '\0');
    return iVar2;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_tricklereadsize_004dbb30);
  if (CONCAT31(extraout_var_07,bVar1) != 0) {
    iVar2 = FUN_00454d00(param_3,(int)(DAT_004d9b68 + (DAT_004d9b68 >> 0x1f & 0x3ffU)) >> 10);
    return iVar2;
  }
  local_8 = FUN_004131b0(this,param_1,param_2,param_3);
  if (local_8 != 0) {
    local_10 = FUN_0044e340((int)this);
    iVar2 = FUN_00430190(*(int *)((int)this + 0x30));
    iVar6 = 1;
    local_8 = 0x40001;
    FUN_00437520((undefined4 *)local_28,param_1);
    if (0 < local_10) {
      do {
        if ((*(char **)(iVar2 + 0xc) != (char *)0x0) &&
           (uVar5 = FUN_0043d430(*(char **)(iVar2 + 0xc),local_28), uVar5 == 0)) {
          pvVar4 = FUN_0044db20(this,iVar6,0,'\x01','\x01');
          local_8 = FUN_00454d50(param_3,pvVar4);
          break;
        }
        iVar2 = iVar2 + 0x1a;
        iVar6 = iVar6 + 1;
      } while (iVar6 <= local_10);
    }
    FUN_004301f0(*(int *)((int)this + 0x30));
  }
  return local_8;
}


