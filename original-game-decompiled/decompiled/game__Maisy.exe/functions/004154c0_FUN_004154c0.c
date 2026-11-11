
/* ==== FUN_004154c0 @ 004154c0 ==== 
 * signature: undefined __thiscall FUN_004154c0(void * this, short * param_1)
 * body: 004154c0-00415595
 */

void __thiscall FUN_004154c0(void *this,short *param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  
  sVar4 = *(short *)((int)this + 0x4a);
  sVar1 = *(short *)((int)this + 0x4e);
  if ((sVar4 < sVar1) &&
     (sVar2 = *(short *)((int)this + 0x4c), sVar2 < *(short *)((int)this + 0x50))) {
    sVar5 = *param_1;
    if (sVar4 <= *param_1) {
      sVar5 = sVar4;
    }
    *(short *)((int)this + 0x4a) = sVar5;
    sVar4 = param_1[2];
    if (param_1[2] <= sVar1) {
      sVar4 = sVar1;
    }
    *(short *)((int)this + 0x4e) = sVar4;
    sVar4 = param_1[1];
    if (sVar2 <= param_1[1]) {
      sVar4 = sVar2;
    }
    *(short *)((int)this + 0x4c) = sVar4;
    sVar4 = param_1[3];
    if (param_1[3] <= *(short *)((int)this + 0x50)) {
      sVar4 = *(short *)((int)this + 0x50);
    }
    *(short *)((int)this + 0x50) = sVar4;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 2);
    *(undefined4 *)((int)this + 0x4a) = *(undefined4 *)param_1;
    *(undefined4 *)((int)this + 0x4e) = uVar3;
  }
  sVar4 = *(short *)((int)this + 0x52);
  sVar1 = *(short *)((int)this + 0x56);
  if (sVar4 < sVar1) {
    sVar2 = *(short *)((int)this + 0x58);
    sVar5 = *(short *)((int)this + 0x54);
    if (sVar5 < sVar2) {
      sVar6 = *(short *)((int)this + 0x4a);
      if (*(short *)((int)this + 0x4a) <= sVar4) {
        sVar6 = sVar4;
      }
      *(short *)((int)this + 0x4a) = sVar6;
      sVar4 = *(short *)((int)this + 0x4e);
      if (sVar1 <= *(short *)((int)this + 0x4e)) {
        sVar4 = sVar1;
      }
      *(short *)((int)this + 0x4e) = sVar4;
      sVar4 = *(short *)((int)this + 0x4c);
      if (*(short *)((int)this + 0x4c) <= sVar5) {
        sVar4 = sVar5;
      }
      *(short *)((int)this + 0x4c) = sVar4;
      sVar4 = *(short *)((int)this + 0x50);
      if (sVar2 <= *(short *)((int)this + 0x50)) {
        sVar4 = sVar2;
      }
      *(short *)((int)this + 0x50) = sVar4;
    }
  }
  return;
}


