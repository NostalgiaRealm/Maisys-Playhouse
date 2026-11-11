
/* ==== FUN_00480e90 @ 00480e90 ==== 
 * signature: undefined4 __thiscall FUN_00480e90(void * this, short param_1, undefined4 param_2, undefined2 param_3, undefined2 param_4, undefined4 param_5, short * param_6)
 * body: 00480e90-00480f9c
 */

undefined4 __thiscall
FUN_00480e90(void *this,short param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,
            undefined4 param_5,short *param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  short sVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  uVar2 = FUN_00413860(this,param_1,param_2,param_3,param_4,param_5);
  iVar1 = *(int *)this;
  puVar3 = (undefined4 *)(**(code **)(iVar1 + 0x58))(uVar2);
  if ((param_1 == 4) && (*param_6 == 1)) {
    puVar4 = (undefined4 *)FUN_00434920(DAT_004d99ac,0x16,0);
    puVar7 = puVar3;
    puVar8 = puVar4;
    for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    *(undefined2 *)puVar8 = *(undefined2 *)puVar7;
    iVar6 = FUN_004404f0(*(void **)((int)this + 0x5a),*(int *)(param_6 + 1),0,(int)puVar4,1,0);
    *(int *)((int)puVar4 + 0xe) = iVar6;
    *(int *)((int)puVar3 + 0xe) = iVar6;
  }
  else if (param_1 == 5) {
    puVar4 = (undefined4 *)FUN_00434920(DAT_004d99ac,0x16,0);
    puVar7 = puVar3;
    puVar8 = puVar4;
    for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    *(undefined2 *)puVar8 = *(undefined2 *)puVar7;
    iVar6 = FUN_004404f0(*(void **)((int)this + 0x5a),1,0,(int)puVar4,1,0);
    *(int *)((int)puVar4 + 0xe) = iVar6;
    *(int *)((int)puVar3 + 0xe) = iVar6;
    sVar5 = *(short *)(*(int *)((int)this + 0x5a) + 0xc2) + 1;
    if (sVar5 < 1) {
      sVar5 = 0;
    }
    *(short *)(*(int *)((int)this + 0x5a) + 0xc2) = sVar5;
  }
  (**(code **)(iVar1 + 0x60))(puVar3);
  return uVar2;
}


