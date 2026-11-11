
/* ==== FUN_0045aac0 @ 0045aac0 ==== 
 * signature: undefined __thiscall FUN_0045aac0(void * this, uint param_1, char param_2)
 * body: 0045aac0-0045ab4e
 */

void __thiscall FUN_0045aac0(void *this,uint param_1,char param_2)

{
  uint uVar1;
  void *this_00;
  int *piVar2;
  HPALETTE pHVar3;
  undefined4 local_8;
  
  local_8 = (void *)0x0;
  if (*(int *)((int)this + 0x82) != 0) {
    local_8 = (void *)FUN_004084c0(*(int *)((int)this + 0x82));
  }
  if (local_8 != (void *)0x0) {
    uVar1 = FUN_0047bd30((int)local_8);
    if ((uVar1 != param_1) || (param_2 != '\0')) {
      uVar1 = param_1;
      this_00 = (void *)FUN_00466a70((int)this);
      piVar2 = FUN_0044e500(this_00,uVar1);
      if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0x21) & 8) == 0)) {
        pHVar3 = (HPALETTE)0x0;
      }
      else {
        pHVar3 = (HPALETTE)FUN_00411dc0(piVar2);
      }
      if (pHVar3 != (HPALETTE)0x0) {
        FUN_0047bdb0(local_8,param_1,pHVar3);
        FUN_0047bdb0(DAT_004da388,param_1,pHVar3);
      }
    }
    *(uint *)((int)this + 0x9e) = param_1;
  }
  return;
}


