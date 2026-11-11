
/* ==== FUN_00408e10 @ 00408e10 ==== 
 * signature: undefined __thiscall FUN_00408e10(void * this, short * param_1)
 * body: 00408e10-00408fc5
 */

void __thiscall FUN_00408e10(void *this,short *param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  
  sVar4 = *(short *)((int)this + 0xe2);
  sVar1 = *(short *)((int)this + 0xe6);
  if ((sVar4 < sVar1) &&
     (sVar2 = *(short *)((int)this + 0xe4), sVar2 < *(short *)((int)this + 0xe8))) {
    sVar5 = *param_1;
    if (sVar4 <= *param_1) {
      sVar5 = sVar4;
    }
    *(short *)((int)this + 0xe2) = sVar5;
    sVar4 = param_1[2];
    if (param_1[2] <= sVar1) {
      sVar4 = sVar1;
    }
    *(short *)((int)this + 0xe6) = sVar4;
    sVar4 = param_1[1];
    if (sVar2 <= param_1[1]) {
      sVar4 = sVar2;
    }
    *(short *)((int)this + 0xe4) = sVar4;
    sVar4 = param_1[3];
    if (param_1[3] <= *(short *)((int)this + 0xe8)) {
      sVar4 = *(short *)((int)this + 0xe8);
    }
    *(short *)((int)this + 0xe8) = sVar4;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 2);
    *(undefined4 *)((int)this + 0xe2) = *(undefined4 *)param_1;
    *(undefined4 *)((int)this + 0xe6) = uVar3;
  }
  sVar4 = *(short *)((int)this + 0xd2);
  sVar1 = *(short *)((int)this + 0xd6);
  if (sVar4 < sVar1) {
    sVar2 = *(short *)((int)this + 0xd4);
    sVar5 = *(short *)((int)this + 0xd8);
    if (sVar2 < sVar5) {
      sVar6 = *(short *)((int)this + 0xe2);
      if (*(short *)((int)this + 0xe2) <= sVar4) {
        sVar6 = sVar4;
      }
      *(short *)((int)this + 0xe2) = sVar6;
      sVar4 = *(short *)((int)this + 0xe6);
      if (sVar1 <= *(short *)((int)this + 0xe6)) {
        sVar4 = sVar1;
      }
      *(short *)((int)this + 0xe6) = sVar4;
      sVar4 = *(short *)((int)this + 0xe4);
      if (*(short *)((int)this + 0xe4) <= sVar2) {
        sVar4 = sVar2;
      }
      *(short *)((int)this + 0xe4) = sVar4;
      sVar4 = *(short *)((int)this + 0xe8);
      if (sVar5 <= *(short *)((int)this + 0xe8)) {
        sVar4 = sVar5;
      }
      *(short *)((int)this + 0xe8) = sVar4;
    }
  }
  sVar4 = *(short *)((int)this + 0xda);
  sVar1 = *(short *)((int)this + 0xde);
  if (sVar4 < sVar1) {
    sVar2 = *(short *)((int)this + 0xe0);
    sVar5 = *(short *)((int)this + 0xdc);
    if (sVar5 < sVar2) {
      sVar6 = *(short *)((int)this + 0xe2);
      if (sVar4 <= *(short *)((int)this + 0xe2)) {
        sVar6 = sVar4;
      }
      *(short *)((int)this + 0xda) = sVar6;
      sVar4 = *(short *)((int)this + 0xe6);
      if (*(short *)((int)this + 0xe6) <= sVar1) {
        sVar4 = sVar1;
      }
      *(short *)((int)this + 0xde) = sVar4;
      sVar4 = *(short *)((int)this + 0xe4);
      if (sVar5 <= *(short *)((int)this + 0xe4)) {
        sVar4 = sVar5;
      }
      *(short *)((int)this + 0xdc) = sVar4;
      sVar4 = *(short *)((int)this + 0xe8);
      if (*(short *)((int)this + 0xe8) <= sVar2) {
        sVar4 = sVar2;
      }
      *(short *)((int)this + 0xe0) = sVar4;
      return;
    }
  }
  *(undefined4 *)((int)this + 0xda) = *(undefined4 *)((int)this + 0xe2);
  *(undefined4 *)((int)this + 0xde) = *(undefined4 *)((int)this + 0xe6);
  return;
}


