
/* ==== FUN_00462970 @ 00462970 ==== 
 * signature: undefined __thiscall FUN_00462970(void * this, short * param_1)
 * body: 00462970-00462a26
 */

void __thiscall FUN_00462970(void *this,short *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined4 uVar9;
  
  sVar1 = param_1[2];
  sVar2 = *param_1;
  sVar3 = param_1[1];
  sVar4 = param_1[3];
  sVar5 = *(short *)((int)this + 0xa8);
  sVar6 = *(short *)((int)this + 0xa2);
  sVar7 = *(short *)((int)this + 0xa6);
  sVar8 = *(short *)((int)this + 0xa4);
  (**(code **)(*(int *)this + 0x3e0))(1);
  if (param_1[2] < *param_1) {
    param_1[2] = *param_1;
  }
  if (param_1[3] < param_1[1]) {
    param_1[3] = param_1[1];
  }
  uVar9 = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((int)this + 0xaa) = *(undefined4 *)param_1;
  *(undefined4 *)((int)this + 0xae) = uVar9;
  if (((int)sVar7 - (int)sVar6 != (int)sVar1 - (int)sVar2) ||
     ((int)sVar5 - (int)sVar8 != (int)sVar4 - (int)sVar3)) {
    (**(code **)(*(int *)this + 0x330))();
  }
  (**(code **)(*(int *)this + 0x424))(0);
  (**(code **)(*(int *)this + 0x3fc))();
  return;
}


