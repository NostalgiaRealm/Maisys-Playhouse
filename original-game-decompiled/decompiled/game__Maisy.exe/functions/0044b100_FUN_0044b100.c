
/* ==== FUN_0044b100 @ 0044b100 ==== 
 * signature: uint __thiscall FUN_0044b100(void * this, undefined4 param_1)
 * body: 0044b100-0044b183
 */

uint __thiscall FUN_0044b100(void *this,undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 local_1c [8];
  undefined1 local_14 [4];
  ushort local_10;
  undefined1 local_c [8];
  
  (**(code **)(**(int **)((int)this + 0x3e) + 0x410))(local_1c);
  pcVar1 = *(code **)(*(int *)this + 0x244);
  uVar2 = (*pcVar1)();
  if (((uVar2 != 0) && (local_10 != 0xffff)) && ((local_10 & 0x200) != 0)) {
    puVar4 = (undefined1 *)0x0;
    if (local_10 != 0) {
      puVar4 = local_14;
    }
    (**(code **)(**(int **)((int)this + 0x3e) + 0x38c))(local_c,0);
    piVar3 = (int *)(*pcVar1)();
    uVar2 = (**(code **)(*piVar3 + 0x20c))
                      (local_c,local_c,(int)*(short *)((int)this + 0x68),puVar4,param_1);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}


