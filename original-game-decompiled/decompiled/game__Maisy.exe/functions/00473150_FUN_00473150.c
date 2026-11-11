
/* ==== FUN_00473150 @ 00473150 ==== 
 * signature: undefined __thiscall FUN_00473150(void * this, int param_1, undefined2 param_2, undefined2 param_3)
 * body: 00473150-00473235;0047324e-00473288
 */

void __thiscall FUN_00473150(void *this,int param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 *this_00;
  undefined2 extraout_var;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_12 [2];
  undefined4 local_10;
  code *pcStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00473296;
  *unaff_FS_OFFSET = &local_10;
  FUN_0043bd50(local_12,'\x01','\0');
  local_8 = 0;
  FUN_00469760(this,param_1,CONCAT22(extraout_var,param_2),param_3);
  *(byte *)((int)this + 0x48) = *(byte *)((int)this + 0x48) & 0xfd;
  *(undefined2 *)((int)this + 0x92) = 100;
  *(uint *)((int)this + 0x1e) = *(uint *)((int)this + 0x1e) | 8;
  *(undefined2 *)((int)this + 0x94) = 100;
  *(undefined2 *)((int)this + 0x9c) = 100;
  *(undefined2 *)((int)this + 0x9e) = 100;
  *(undefined2 *)((int)this + 0xa0) = 100;
  *(undefined4 *)((int)this + 0xa2) = 0;
  *(undefined2 *)((int)this + 0x96) = 100;
  *(undefined2 *)((int)this + 0xaa) = 0;
  *(undefined2 *)((int)this + 0xa8) = 0;
  *(undefined2 *)((int)this + 0x98) = 0;
  *(undefined2 *)((int)this + 0xa6) = 100;
  this_00 = FUN_00412c20(0x5c);
  local_8._0_1_ = 1;
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    FUN_00412c90(this_00,0);
    *this_00 = &PTR_FUN_004bf780;
    *this_00 = &PTR_FUN_004c0aa0;
    *this_00 = &PTR_FUN_004c9ac0;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004683d0(this_00,(int)this);
  *(undefined4 **)((int)this + 0x5a) = this_00;
  (**(code **)(*(int *)this + 0x14c))(1);
  local_8 = 0xffffffff;
  FUN_004732a0();
  *unaff_FS_OFFSET = local_10;
  return;
}


