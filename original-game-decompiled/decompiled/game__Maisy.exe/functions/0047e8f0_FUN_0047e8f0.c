
/* ==== FUN_0047e8f0 @ 0047e8f0 ==== 
 * signature: undefined1 __thiscall FUN_0047e8f0(void * this, int param_1, short * param_2)
 * body: 0047e8f0-0047e98e
 */

undefined1 __thiscall FUN_0047e8f0(void *this,int param_1,short *param_2)

{
  void *this_00;
  undefined1 uVar1;
  int iVar2;
  short *psVar3;
  short local_34;
  int local_32;
  int local_2e;
  char local_5;
  
  uVar1 = 1;
  local_5 = '\x01';
  if ((param_1 == 5) || (param_1 == 0x34)) {
    FUN_00441760();
    local_34 = 0x11;
    local_2e = local_2e + local_32;
  }
  else {
    uVar1 = FUN_0044f820(this,param_1,param_2);
    local_5 = '\0';
  }
  if (local_5 != '\0') {
    if (*param_2 == 0x1c) {
      this_00 = *(void **)(param_2 + 1);
      if ((this_00 != (void *)0x0) && ((*(byte *)((int)this_00 + 0x1e) & 0x80) != 0)) {
        FUN_00474c50(this_00,this,&local_34);
        return uVar1;
      }
    }
    else if (*param_2 == 0x17) {
      psVar3 = &local_34;
      for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)param_2 = *(undefined4 *)psVar3;
        psVar3 = psVar3 + 2;
        param_2 = param_2 + 2;
      }
      *param_2 = *psVar3;
    }
  }
  return uVar1;
}


