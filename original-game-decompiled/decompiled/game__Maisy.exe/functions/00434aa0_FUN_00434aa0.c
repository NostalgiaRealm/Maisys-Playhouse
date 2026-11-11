
/* ==== FUN_00434aa0 @ 00434aa0 ==== 
 * signature: int __thiscall FUN_00434aa0(void * this, int * param_1, short * param_2, short * param_3)
 * body: 00434aa0-00434c5c
 */

int __thiscall FUN_00434aa0(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 uVar3;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  char local_108 [252];
  int local_c;
  int local_8;
  
  local_c = 0x10000;
  bVar1 = FUN_00437430(param_1,(int *)&DAT_004dacb0);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    bVar1 = FUN_00437430(param_1,(int *)&DAT_004d9c18);
    if (CONCAT31(extraout_var_00,bVar1) == 0) {
      bVar1 = FUN_00437430(param_1,(int *)s_revision_004dae4c);
      if (CONCAT31(extraout_var_01,bVar1) == 0) {
        iVar2 = FUN_0042fc10(this,param_1,param_2,param_3);
        return iVar2;
      }
      if (param_2 != (short *)0x0) {
        iVar2 = FUN_00455c10(param_2,&local_8,(int *)0x0);
        if (iVar2 == 0) {
          iVar2 = FUN_00430190((int)this);
          FUN_004301f0((int)this);
          iVar2 = FUN_00454d00(param_3,(int)*(short *)(iVar2 + -6 + local_8 * 0x2a));
          return iVar2;
        }
      }
      iVar2 = FUN_0042fc10(this,param_1,param_2,param_3);
      return iVar2;
    }
    if (param_2 != (short *)0x0) {
      iVar2 = FUN_00455c10(param_2,&local_8,(int *)0x0);
      if (iVar2 == 0) {
        iVar2 = FUN_00430190((int)this);
        FUN_00437520((undefined4 *)local_108,(undefined4 *)(iVar2 + local_8 * 0x2a + -0x26));
        FUN_004301f0((int)this);
        iVar2 = FUN_00455210(*(undefined4 *)(iVar2 + -4 + *(int *)(param_2 + 1) * 0x2a),param_3,
                             local_108);
        return iVar2;
      }
    }
    iVar2 = FUN_0042fc10(this,param_1,param_2,param_3);
    return iVar2;
  }
  if (param_2 != (short *)0x0) {
    local_c = FUN_00455c10(param_2,&local_8,(int *)0x0);
    if (local_c == 0) {
      iVar2 = FUN_00430190((int)this);
      uVar3 = FUN_0048b550(*(int *)(iVar2 + -4 + local_8 * 0x2a));
      FUN_004301f0((int)this);
      iVar2 = FUN_00454d50(param_3,uVar3);
      return iVar2;
    }
  }
  return local_c;
}


