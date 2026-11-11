
/* ==== FUN_0040ffe0 @ 0040ffe0 ==== 
 * signature: undefined4 * __thiscall FUN_0040ffe0(void * this, short param_1, undefined4 * param_2, byte param_3)
 * body: 0040ffe0-00410091
 */

undefined4 * __thiscall FUN_0040ffe0(void *this,short param_1,undefined4 *param_2,byte param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00410092;
  *unaff_FS_OFFSET = &local_10;
  FUN_00412c90(this,0);
  local_8 = 0;
  *(undefined ***)this = &PTR_FUN_004be680;
  FUN_00412d60(this,0);
  *(undefined4 *)((int)this + 0x26) = 0;
  *(undefined4 *)((int)this + 0x2a) = 0;
  *(undefined4 *)((int)this + 0x2e) = 0;
  uVar1 = param_2[1];
  *(undefined4 *)((int)this + 0x3e) = *param_2;
  *(undefined4 *)((int)this + 0x42) = uVar1;
  *(undefined4 *)((int)this + 0x36) = 0;
  bVar2 = (param_3 ^ *(byte *)((int)this + 0x4a)) & 1 ^ *(byte *)((int)this + 0x4a);
  *(byte *)((int)this + 0x4a) = bVar2;
  *(byte *)((int)this + 0x4a) = bVar2 & 0xfb;
  *(byte *)((int)this + 0x4a) = bVar2 & 0xeb;
  *(undefined4 *)((int)this + 0x3a) = 0;
  *(byte *)((int)this + 0x4a) = bVar2 & 0xe3;
  *(byte *)((int)this + 0x4a) = bVar2 & 0xe3 | 2;
  *(short *)((int)this + 0x46) = param_1;
  if (param_1 == -1) {
    *(undefined2 *)((int)this + 0x46) = 0x75da;
  }
  *(undefined2 *)((int)this + 0x48) = 0;
  *unaff_FS_OFFSET = local_10;
  return this;
}


