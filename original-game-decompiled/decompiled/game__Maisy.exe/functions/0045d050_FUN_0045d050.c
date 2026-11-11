
/* ==== FUN_0045d050 @ 0045d050 ==== 
 * signature: undefined4 * __thiscall FUN_0045d050(void * this, int param_1)
 * body: 0045d050-0045d11c
 */

undefined4 * __thiscall FUN_0045d050(void *this,int param_1)

{
  byte bVar1;
  undefined4 *this_00;
  undefined4 *puVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0045d12a;
  *unaff_FS_OFFSET = &local_10;
  FUN_0047d8d0(this,param_1);
  local_8 = 0;
  *(undefined ***)this = &PTR_FUN_004c8e90;
  this_00 = FUN_00412c20(0x4a);
  local_8 = CONCAT31(local_8._1_3_,1);
  puVar2 = (undefined4 *)0x0;
  if (this_00 != (undefined4 *)0x0) {
    puVar2 = FUN_0042f970(this_00,0x38,0,'\0',0,'\0');
  }
  *(undefined2 *)((int)this + 0x3c) = 0;
  *(undefined4 **)((int)this + 0x2e) = puVar2;
  *(undefined2 *)((int)this + 0x38) = 1;
  *(undefined4 **)((int)this + 0x2a) = puVar2;
  *(undefined2 *)((int)this + 0x36) = 1;
  bVar1 = *(byte *)((int)this + 0x4e);
  *(undefined2 *)((int)this + 0x3a) = 0;
  *(undefined2 *)((int)this + 0x40) = 1;
  *(undefined4 *)((int)this + 0x32) = 0;
  *(undefined2 *)((int)this + 0x3e) = 0;
  *(undefined4 *)((int)this + 0x42) = 0;
  *(byte *)((int)this + 0x4e) = bVar1 & 0xfe;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x4a) = 0;
  *(undefined4 *)((int)this + 0x46) = 0x22;
  *unaff_FS_OFFSET = local_10;
  *(byte *)((int)this + 0x4e) = bVar1 & 0xf6;
  *(byte *)((int)this + 0x4e) = bVar1 & 0xf2;
  return this;
}


