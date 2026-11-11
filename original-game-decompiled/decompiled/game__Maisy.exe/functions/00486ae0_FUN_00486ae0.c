
/* ==== FUN_00486ae0 @ 00486ae0 ==== 
 * signature: undefined4 __thiscall FUN_00486ae0(void * this, byte param_1)
 * body: 00486ae0-00486bcc
 */

undefined4 __thiscall FUN_00486ae0(void *this,byte param_1)

{
  int iVar1;
  undefined2 extraout_var;
  uint uVar2;
  
  if (*(HMMIO *)((int)this + 0x14a) != (HMMIO)0x0) {
    FUN_00411a40(*(HMMIO *)((int)this + 0x14a));
    *(undefined4 *)((int)this + 0x14a) = 0;
  }
  if (*(HMMIO *)((int)this + 0x14e) != (HMMIO)0x0) {
    FUN_00411a40(*(HMMIO *)((int)this + 0x14e));
    *(undefined4 *)((int)this + 0x14e) = 0;
  }
  iVar1 = FUN_00411a10(*(LPSTR *)((int)this + 0x160),param_1);
  *(int *)((int)this + 0x14a) = iVar1;
  if (iVar1 == 0) {
    return 1;
  }
  if (param_1 != 0) {
    iVar1 = FUN_00411a10(*(LPSTR *)((int)this + 0x160),param_1);
    *(int *)((int)this + 0x14e) = iVar1;
    if (iVar1 == 0) {
      FUN_00411a40(*(HMMIO *)((int)this + 0x14a));
      *(undefined4 *)((int)this + 0x14a) = 0;
      return CONCAT22(extraout_var,1);
    }
  }
  uVar2 = FUN_00411a60(*(HMMIO *)((int)this + 0x14a));
  *(uint *)((int)this + 0x164) = uVar2;
  *(byte *)((int)this + 0x15a) = *(byte *)((int)this + 0x15a) & 0xfd;
  *(undefined4 *)((int)this + 0x142) = 0;
  *(byte *)((int)this + 0x16e) =
       (*(byte *)((int)this + 0x16e) ^ param_1) & 1 ^ *(byte *)((int)this + 0x16e);
  return uVar2 & 0xffff0000;
}


