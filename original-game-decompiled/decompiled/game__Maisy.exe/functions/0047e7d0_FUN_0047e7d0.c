
/* ==== FUN_0047e7d0 @ 0047e7d0 ==== 
 * signature: undefined1 __thiscall FUN_0047e7d0(void * this, int param_1, short * param_2)
 * body: 0047e7d0-0047e8e0
 */

undefined1 __thiscall FUN_0047e7d0(void *this,int param_1,short *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  short local_34;
  uint local_32;
  int local_2e;
  byte local_24;
  byte local_23;
  byte local_22;
  undefined1 local_5;
  
  local_5 = 1;
  if ((param_1 != 5) && (param_1 != 0x34)) {
    uVar1 = FUN_0044f840(this,param_1,param_2);
    return uVar1;
  }
  psVar4 = &local_34;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)psVar4 = *(undefined4 *)param_2;
    param_2 = param_2 + 2;
    psVar4 = psVar4 + 2;
  }
  *psVar4 = *param_2;
  iVar3 = FUN_00414340(this,&local_34,8);
  if ((char)iVar3 != '\0') {
    uVar2 = FUN_00441b50(*(void **)((int)this + 0x5a),
                         (local_32 >> 8 & 0xff) * 0x3c + (local_32 & 0xff) * 0xc80 +
                         (local_32 >> 0x10 & 0xff),1);
    iVar3 = FUN_00441b50(*(void **)((int)this + 0x5a),
                         (uint)local_23 * 0x3c + (uint)local_24 * 0xc80 + (uint)local_22,1);
    FUN_00441690(*(void **)((int)this + 0x5a),uVar2,iVar3 - uVar2);
    return local_5;
  }
  iVar3 = FUN_00414340(this,&local_34,0x11);
  if ((char)iVar3 != '\0') {
    FUN_00441690(*(void **)((int)this + 0x5a),local_32,local_2e - local_32);
    return local_5;
  }
  return 0;
}


