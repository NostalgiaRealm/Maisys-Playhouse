
/* ==== FUN_00430b40 @ 00430b40 ==== 
 * signature: undefined4 __thiscall FUN_00430b40(void * this, int * param_1, short * param_2, short * param_3)
 * body: 00430b40-00430bfb
 */

undefined4 __thiscall FUN_00430b40(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int local_8;
  
  bVar1 = FUN_00437430(param_1,(int *)s_numitems_004dac9c);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    uVar4 = FUN_00454d00(param_3,*(undefined4 *)((int)this + 0x26));
    return uVar4;
  }
  bVar1 = FUN_00437430(param_1,(int *)&DAT_004dacb0);
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    if (param_2 != (short *)0x0) {
      iVar2 = FUN_00455c10(param_2,&local_8,(int *)0x0);
      if (iVar2 == 0) {
        FUN_00430190((int)this);
        puVar3 = (undefined4 *)FUN_004301c0(this,local_8);
        uVar4 = *puVar3;
        FUN_004301f0((int)this);
        uVar4 = FUN_00454d50(param_3,uVar4);
        return uVar4;
      }
    }
    return 0x40004;
  }
  uVar4 = FUN_004131b0(this,param_1,param_2,param_3);
  return uVar4;
}


