
/* ==== FUN_00415640 @ 00415640 ==== 
 * signature: undefined __thiscall FUN_00415640(void * this, short * param_1)
 * body: 00415640-004156c0
 */

void __thiscall FUN_00415640(void *this,short *param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  short sVar4;
  short sVar5;
  
  sVar4 = *(short *)((int)this + 0x5e);
  sVar1 = *(short *)((int)this + 0x62);
  if ((sVar4 < sVar1) && (sVar2 = *(short *)((int)this + 0x60), sVar2 < *(short *)((int)this + 100))
     ) {
    sVar5 = *param_1;
    if (sVar4 <= *param_1) {
      sVar5 = sVar4;
    }
    *(short *)((int)this + 0x5e) = sVar5;
    sVar4 = param_1[2];
    if (param_1[2] <= sVar1) {
      sVar4 = sVar1;
    }
    *(short *)((int)this + 0x62) = sVar4;
    sVar4 = param_1[1];
    if (sVar2 <= param_1[1]) {
      sVar4 = sVar2;
    }
    *(short *)((int)this + 0x60) = sVar4;
    sVar4 = param_1[3];
    if (param_1[3] <= *(short *)((int)this + 100)) {
      sVar4 = *(short *)((int)this + 100);
    }
    *(short *)((int)this + 100) = sVar4;
    return;
  }
  uVar3 = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((int)this + 0x5e) = *(undefined4 *)param_1;
  *(undefined4 *)((int)this + 0x62) = uVar3;
  return;
}


