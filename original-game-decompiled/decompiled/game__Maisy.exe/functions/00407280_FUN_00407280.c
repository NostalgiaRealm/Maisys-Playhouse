
/* ==== FUN_00407280 @ 00407280 ==== 
 * signature: undefined __thiscall FUN_00407280(void * this, int * param_1, int * param_2)
 * body: 00407280-004073aa
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00407280(void *this,int *param_1,int *param_2)

{
  byte bVar1;
  
  if ((((*(char *)((int)this + 0xa4) != '\0') && (*(char *)((int)this + 0xa3) == '\0')) &&
      (*(char *)((int)this + 0xb0) == '\0')) && (*(short *)((int)this + 0x40) == 3)) {
    FUN_00409020(this,param_2);
    FUN_00410690();
    bVar1 = FUN_0047a230(*(int *)((int)this + 0x8a));
    if (bVar1 == 0) {
      FUN_00409070(this);
      DAT_004d920c = 0;
      DAT_004d9208 = 0;
    }
    DAT_004d9210 = 1;
    (**(code **)(*param_1 + 0x3ec))();
    DAT_004d9210 = 0;
    if (bVar1 == 0) {
      if (((short)DAT_004d9208 < (short)DAT_004d920c) && (DAT_004d9208._2_2_ < DAT_004d920c._2_2_))
      {
        *(undefined4 *)((int)this + 0xda) = DAT_004d9208;
        *(undefined4 *)((int)this + 0xde) = DAT_004d920c;
        DAT_004d920c = 0;
        DAT_004d9208 = 0;
      }
      FUN_00409140(this);
    }
    DAT_004da3ac = 0;
    _DAT_004da3a4 = 0;
    _DAT_004da3a8 = 0;
    FUN_00409020(this,(undefined4 *)0x0);
    return;
  }
  FUN_00408560(this,param_2);
  return;
}


