
/* ==== FUN_00448bf0 @ 00448bf0 ==== 
 * signature: undefined __thiscall FUN_00448bf0(void * this, int * param_1, short * param_2, short * param_3)
 * body: 00448bf0-00448de9
 */

void __thiscall FUN_00448bf0(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  undefined3 extraout_var;
  SIZE_T SVar4;
  char *_Source;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined4 uVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  char acStackY_8204 [32744];
  char local_204 [31];
  undefined1 local_1e5;
  undefined1 local_1e4;
  char local_104 [256];
  
  bVar1 = FUN_00437430(param_1,(int *)&DAT_004d9c18);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    bVar1 = FUN_00437430(param_1,(int *)s_preloaded_004d9c04);
    if (CONCAT31(extraout_var_00,bVar1) != 0) {
      if ((*(int *)((int)this + 0x186) == 0) || (bVar2 = 1, *(short *)((int)this + 0x24) < 2)) {
        bVar2 = 0;
      }
      FUN_00454c50(param_3,bVar2);
      return;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_streambytes_004da018);
    if (CONCAT31(extraout_var_01,bVar1) == 0) {
      bVar1 = FUN_00437430(param_1,(int *)s_loadedbytes_004da004);
      if (CONCAT31(extraout_var_02,bVar1) == 0) {
        FUN_0040d210(this,param_1,param_2,param_3);
        return;
      }
      uVar5 = (**(code **)(*(int *)this + 0x84))();
      FUN_00454d00(param_3,uVar5);
      return;
    }
    iVar6 = *(int *)((int)this + 0x186) + *(int *)((int)this + 0x18a);
    if (iVar6 == 0) {
      iVar6 = (**(code **)(*(int *)this + 0x84))();
    }
    FUN_00454d00(param_3,iVar6);
    return;
  }
  local_104[0] = '\0';
  if (*(HGLOBAL *)((int)this + 0x152) != (HGLOBAL)0x0) {
    sVar7 = 0x1f;
    SVar4 = GlobalSize(*(HGLOBAL *)((int)this + 0x152));
    if (SVar4 < 0x1f) {
      SVar4 = GlobalSize(*(HGLOBAL *)((int)this + 0x152));
      sVar7 = (short)SVar4;
    }
    local_204[0] = '\0';
    if ((*(HGLOBAL *)((int)this + 0x152) != (HGLOBAL)0x0) && (sVar7 != 0)) {
      _Source = GlobalLock(*(HGLOBAL *)((int)this + 0x152));
      _strncpy(local_204,_Source,(int)sVar7);
      if (sVar7 == 0x1f) {
        local_1e5 = 0xc9;
        local_1e4 = 0;
      }
      else {
        local_204[sVar7] = '\0';
      }
      GlobalUnlock(*(HGLOBAL *)((int)this + 0x152));
    }
    sVar3 = 0;
    sVar8 = 0;
    if (0 < sVar7) {
      do {
        if (0x1e < sVar8) break;
        if (local_204[sVar3] == '\r') {
          iVar6 = (int)sVar8;
          sVar8 = sVar8 + 1;
          local_104[iVar6] = '\\';
          local_104[sVar8] = 'r';
        }
        else {
          local_104[sVar8] = local_204[sVar3];
        }
        sVar8 = sVar8 + 1;
        sVar3 = sVar3 + 1;
      } while (sVar3 < sVar7);
    }
    local_104[sVar8] = '\0';
  }
  FUN_00455210(0xffffffff,param_3,local_104);
  return;
}


