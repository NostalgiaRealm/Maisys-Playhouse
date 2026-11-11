
/* ==== FUN_0044d370 @ 0044d370 ==== 
 * signature: int __stdcall FUN_0044d370(int * param_1, undefined4 param_2, short * param_3)
 * body: 0044d370-0044d4f4
 */

int FUN_0044d370(int *param_1,undefined4 param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  bVar1 = FUN_00437430(param_1,(int *)s_flushall_004dbb80);
  if ((CONCAT31(extraout_var,bVar1) != 0) ||
     (bVar1 = FUN_00437430(param_1,(int *)s_purge_004db9f8), CONCAT31(extraout_var_00,bVar1) != 0))
  {
    iVar3 = FUN_0044e340((int)local_8);
    piVar4 = (int *)FUN_00430190(*(int *)((int)local_8 + 0x30));
    local_c = FUN_00455c10(param_3,&local_10,(int *)0x0);
    iVar2 = 0x65;
    if (local_c == 0) {
      iVar2 = local_10;
    }
    if (0 < iVar3) {
      do {
        if ((int *)*piVar4 != (int *)0x0) {
          (**(code **)(*(int *)*piVar4 + 0x80))(0x7fffffff,iVar2);
        }
        piVar4 = (int *)((int)piVar4 + 0x1a);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_004301f0(*(int *)((int)local_8 + 0x30));
    return local_c;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_trickleenabled_004dbb44);
  if (CONCAT31(extraout_var_01,bVar1) != 0) {
    local_c = FUN_00455730(param_3,(char *)((int)&local_8 + 3),(int *)0x0);
    if (local_c != 0) {
      return local_c;
    }
    if (DAT_004dbb18 != local_8._3_1_) {
      return 0;
    }
    DAT_004dbb18 = local_8._3_1_ == '\0';
    if (local_8._3_1_ == '\0') {
      DAT_004dbb14 = DAT_004dbb14 + 1;
      return 0;
    }
    FUN_0044f350();
    return local_c;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_tricklereadsize_004dbb30);
  if (CONCAT31(extraout_var_02,bVar1) == 0) {
    iVar2 = FUN_004135a0(local_8,param_1,param_2,param_3);
    return iVar2;
  }
  iVar2 = FUN_00455c10(param_3,&local_8,(int *)0x0);
  if (iVar2 != 0) {
    return iVar2;
  }
  if ((int)local_8 < 2) {
    local_8 = (void *)0x1;
  }
  DAT_004d9b68 = (int)local_8 << 10;
  return 0;
}


