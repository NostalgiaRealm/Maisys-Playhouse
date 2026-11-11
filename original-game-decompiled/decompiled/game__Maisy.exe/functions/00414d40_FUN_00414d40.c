
/* ==== FUN_00414d40 @ 00414d40 ==== 
 * signature: undefined4 * __thiscall FUN_00414d40(void * this, undefined4 param_1, undefined4 param_2)
 * body: 00414d40-00414dd8
 */

undefined4 * __thiscall FUN_00414d40(void *this,undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00414dd9;
  *unaff_FS_OFFSET = &local_10;
  FUN_00412c90(this,0);
  local_8 = 0;
  *(undefined ***)this = &PTR_FUN_004be9b0;
  FUN_00412d60(this,0);
  *(undefined4 *)((int)this + 0x26) = param_1;
  *(undefined4 *)((int)this + 0x2a) = param_2;
  bVar1 = *(byte *)((int)this + 0x2e);
  *(byte *)((int)this + 0x2e) = bVar1 & 0xfe;
  *(byte *)((int)this + 0x2e) = bVar1 & 0xfc;
  *(byte *)((int)this + 0x2e) = bVar1 & 0xf8;
  *(undefined4 *)((int)this + 0x3e) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(byte *)((int)this + 0x2e) = bVar1 & 0xf0;
  *(undefined1 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3a) = 0;
  *(undefined4 *)((int)this + 0x42) = 1;
  *(undefined2 *)((int)this + 0x30) = 100;
  *(undefined2 *)((int)this + 0x32) = 100;
  *unaff_FS_OFFSET = local_10;
  return this;
}


