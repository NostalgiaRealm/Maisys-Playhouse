
/* ==== FUN_120030f0 @ 120030f0 ==== 
 * signature: undefined4 * __thiscall FUN_120030f0(void * this, undefined4 param_1, void * param_2)
 * body: 120030f0-120031b3
 */

undefined4 * __thiscall FUN_120030f0(void *this,undefined4 param_1,void *param_2)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_120031c2;
  *unaff_FS_OFFSET = &local_10;
  FUN_12011400((undefined4 *)((int)this + 0x80));
  *(undefined ***)((int)this + 0x80) = &PTR_FUN_12035188;
  local_8 = 1;
  *(undefined2 *)((int)this + 0x8a) = 0;
  *(void **)((int)this + 0x86) = this;
  *(undefined2 *)((int)this + 0x8c) = 0;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x12) = 0;
  *(undefined1 *)((int)this + 0x1a) = 0;
  *(undefined4 *)this = param_1;
  *(void **)((int)this + 4) = param_2;
  iVar1 = FUN_12004bf0(param_2,FUN_120036e0,this);
  *(int *)((int)this + 8) = iVar1;
  *(uint *)((int)this + 0x26) = (uint)*(ushort *)(iVar1 + 0xc);
  *(undefined1 *)((int)this + 99) = 0;
  *(undefined1 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0x66) = 0;
  *(undefined1 *)((int)this + 0x62) = 0;
  *(undefined1 *)((int)this + 0x72) = 0;
  *(undefined1 *)((int)this + 0x6c) = 0x80;
  *(undefined2 *)((int)this + 0x8a) = 0xffbf;
  *unaff_FS_OFFSET = local_10;
  return this;
}


