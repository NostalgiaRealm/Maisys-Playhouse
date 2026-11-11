
/* ==== FUN_00424490 @ 00424490 ==== 
 * signature: undefined __thiscall FUN_00424490(void * this, int * param_1, char param_2)
 * body: 00424490-004245d1
 */

void __thiscall FUN_00424490(void *this,int *param_1,char param_2)

{
  bool bVar1;
  byte bVar2;
  undefined4 *this_00;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004245d2;
  *unaff_FS_OFFSET = &local_10;
  bVar1 = false;
  if (((param_1 != (int *)0x0) && ((*(byte *)(param_1 + 8) & 8) != 0)) && (this != param_1)) {
    if (DAT_004d95bc == (undefined4 *)0x0) {
      this_00 = FUN_00412c20(0x4a);
      local_8 = 0;
      if (this_00 == (undefined4 *)0x0) {
        DAT_004d95bc = (undefined4 *)0x0;
      }
      else {
        DAT_004d95bc = FUN_0042f970(this_00,0x2e,0x200,'\0',0,'\0');
      }
      bVar1 = true;
      DAT_004d95c0 = this;
    }
    local_8 = 0xffffffff;
    FUN_004246a0((int)param_1);
    FUN_00424350((int)this);
    FUN_00423fb0(this,(int)param_1);
    if (param_2 != '\0') {
      FUN_004245f0();
    }
    if (bVar1) {
      FUN_0046a6d0(param_1,(int)this,(int)DAT_004d95bc);
      if (DAT_004d95bc != (undefined4 *)0x0) {
        (**(code **)*DAT_004d95bc)(1);
      }
      DAT_004d95bc = (undefined4 *)0x0;
    }
    FUN_004253e0(param_1,&local_14,&local_18);
    FUN_00425420(this,local_14,local_18);
    FUN_00425400(param_1,&local_14,&local_18);
    FUN_00425440(this,local_14,local_18);
    bVar2 = FUN_00425460((int)param_1);
    FUN_00425470(this,bVar2);
    if (*(int **)((int)this + 0x3a) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x3a) + 0x2c8))();
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


