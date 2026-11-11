
/* ==== FUN_00404190 @ 00404190 ==== 
 * signature: undefined __thiscall FUN_00404190(void * this, int param_1)
 * body: 00404190-004042ca
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00404190(void *this,int param_1)

{
  short sVar1;
  int *this_00;
  int *this_01;
  undefined4 local_58 [9];
  undefined2 local_34;
  int local_30;
  undefined1 local_8;
  
  if (((short)param_1 != DAT_004da3c4) || (param_1._2_2_ != DAT_004da3c6)) {
    _DAT_004da3c4 = param_1;
    this_00 = (int *)FUN_004064d0(this,param_1,9,'\0');
    this_01 = (int *)FUN_004296a0();
    if (this_01 != this_00) {
      FUN_004296b0(this_00);
      if (this_01 != (int *)0x0) {
        if ((*(byte *)(this_01 + 8) & 4) != 0) {
          FUN_00410ca0(DAT_004da390,0x28);
        }
        if ((this_01 != (int *)0x0) && ((*(byte *)((int)this_01 + 0x1e) & 4) != 0)) {
          FUN_004142c0(local_58,0x130,0,0,0);
          local_34 = 7;
          local_8 = 0;
          local_30 = param_1;
          FUN_0046b770(this_01,(int)local_58);
        }
      }
      if (this_00 != (int *)0x0) {
        FUN_004142c0(local_58,0x12f,0,0,0);
        local_34 = 7;
        local_8 = 0;
        local_30 = param_1;
        FUN_0046b770(this_00,(int)local_58);
        if (this_00 != (int *)0x0) {
          sVar1 = (**(code **)(*this_00 + 0x354))();
          FUN_00410ca0(DAT_004da390,sVar1);
          return;
        }
      }
      FUN_00410ca0(DAT_004da390,0xb);
      return;
    }
    if ((this_00 == (int *)0x0) && (*(int *)((int)this + 300) == 0)) {
      FUN_00410ca0(DAT_004da390,0xb);
    }
  }
  return;
}


