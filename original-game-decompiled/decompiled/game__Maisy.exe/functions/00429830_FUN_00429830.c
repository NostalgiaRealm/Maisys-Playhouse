
/* ==== FUN_00429830 @ 00429830 ==== 
 * signature: undefined4 * __thiscall FUN_00429830(void * this, int param_1, undefined4 param_2)
 * body: 00429830-004298cb
 */

undefined4 * __thiscall FUN_00429830(void *this,int param_1,undefined4 param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004298e4;
  *unaff_FS_OFFSET = &local_10;
  FUN_00412c90(this,0);
  *(undefined ***)this = &PTR_FUN_004bf780;
  *(undefined ***)this = &PTR_FUN_004c5280;
  local_8 = 3;
  *(undefined ***)this = &PTR_FUN_004c4fe0;
  *(undefined ***)this = &PTR_FUN_004c6f08;
  FUN_0042c130(this,param_1,-1);
  *(uint *)((int)this + 0x1e) = *(uint *)((int)this + 0x1e) | 0x20000000;
  *(undefined2 *)((int)this + 0x22) = 0x58;
  *unaff_FS_OFFSET = local_10;
  *(undefined4 *)((int)this + 0x50) = param_2;
  *(undefined1 *)((int)this + 0x54) = 0;
  return this;
}


