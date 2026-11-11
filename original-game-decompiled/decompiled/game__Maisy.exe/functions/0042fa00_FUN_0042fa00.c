
/* ==== FUN_0042fa00 @ 0042fa00 ==== 
 * signature: undefined4 * __thiscall FUN_0042fa00(void * this, HLOCAL param_1, uint param_2, int param_3, char param_4, undefined4 param_5)
 * body: 0042fa00-0042fab3
 */

undefined4 * __thiscall
FUN_0042fa00(void *this,HLOCAL param_1,uint param_2,int param_3,char param_4,undefined4 param_5)

{
  byte bVar1;
  SIZE_T SVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0042fab4;
  *unaff_FS_OFFSET = &local_10;
  FUN_00412c90(this,0);
  local_8 = 0;
  *(undefined ***)this = &PTR_FUN_004c7320;
  FUN_00412d60(this,0);
  SVar2 = LocalSize(param_1);
  *(uint *)((int)this + 0x26) = SVar2 / param_2;
  *(uint *)((int)this + 0x2a) = SVar2 / param_2;
  if (param_3 < 2) {
    param_3 = 1;
  }
  *(int *)((int)this + 0x2e) = param_3;
  *(HLOCAL *)((int)this + 0x36) = param_1;
  *(uint *)((int)this + 0x32) = param_2;
  bVar1 = (param_4 * '\x02' ^ *(byte *)((int)this + 0x48)) & 2 ^ *(byte *)((int)this + 0x48);
  *(undefined4 *)((int)this + 0x3a) = 0;
  *(undefined2 *)((int)this + 0x46) = 0;
  *(byte *)((int)this + 0x48) = bVar1;
  *(undefined4 *)((int)this + 0x3e) = param_5;
  *(undefined4 *)((int)this + 0x42) = 0;
  *(byte *)((int)this + 0x48) = bVar1 & 0xfb;
  *unaff_FS_OFFSET = local_10;
  *(byte *)((int)this + 0x48) = bVar1 & 0xfa;
  return this;
}


