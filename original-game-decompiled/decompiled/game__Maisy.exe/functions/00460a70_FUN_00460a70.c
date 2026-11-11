
/* ==== FUN_00460a70 @ 00460a70 ==== 
 * signature: undefined __thiscall FUN_00460a70(void * this, char param_1)
 * body: 00460a70-00460afa
 */

void __thiscall FUN_00460a70(void *this,char param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined **local_20 [4];
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00460afb;
  *unaff_FS_OFFSET = &local_10;
  local_20[0] = &PTR_FUN_004be070;
  local_8 = 0;
  DAT_004e1bfc = param_1;
  *(byte *)((int)this + 0x9c) =
       (param_1 << 6 ^ *(byte *)((int)this + 0x9c)) & 0x40 ^ *(byte *)((int)this + 0x9c);
  FUN_00430500(local_20,0);
  FUN_0043c9e0(this,local_20);
  FUN_00430720(local_20,FUN_00460a50);
  local_8 = 0xffffffff;
  FUN_00460b05();
  *unaff_FS_OFFSET = local_10;
  return;
}


