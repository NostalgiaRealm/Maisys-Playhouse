
/* ==== FUN_0045c510 @ 0045c510 ==== 
 * signature: undefined4 * __thiscall FUN_0045c510(void * this, void * param_1, short param_2, undefined4 * param_3, undefined4 param_4)
 * body: 0045c510-0045c58b
 */

undefined4 * __thiscall
FUN_0045c510(void *this,void *param_1,short param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0045c58c;
  *unaff_FS_OFFSET = &local_10;
  FUN_0042acc0(this,param_1,param_2,param_3,0);
  *(byte *)((int)this + 0x4a) = *(byte *)((int)this + 0x4a) & 0xfd;
  *(undefined2 *)((int)this + 0x48) = 1;
  *(undefined ***)this = &PTR_FUN_004c8d28;
  *(undefined4 *)((int)this + 0x58) = param_4;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *unaff_FS_OFFSET = local_10;
  return this;
}


