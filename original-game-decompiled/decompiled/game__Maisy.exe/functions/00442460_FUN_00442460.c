
/* ==== FUN_00442460 @ 00442460 ==== 
 * signature: undefined __thiscall FUN_00442460(void * this, undefined4 param_1, short * param_2, undefined4 param_3, short * param_4, byte * param_5, undefined4 param_6, int * param_7)
 * body: 00442460-0044257f
 */

void __thiscall
FUN_00442460(void *this,undefined4 param_1,short *param_2,undefined4 param_3,short *param_4,
            byte *param_5,undefined4 param_6,int *param_7)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  short *psVar5;
  short *psVar6;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  iVar2 = (**(code **)(*(int *)this + 0x244))();
  if ((iVar2 != 0) && (*(char *)((int)this + 0x8c) != '\0')) {
    cVar1 = (**(code **)(**(int **)((int)this + 0x3e) + 0x130))();
    if (cVar1 == '\0') {
      iVar2 = FUN_0041ed90((int)this);
      if (*(char *)(iVar2 + 0xaa) == '\0') {
        FUN_00403820(*(void **)((int)this + 0x42),&local_8);
        local_10 = *param_4;
        if (local_10 < 1) {
          local_10 = 0;
        }
        local_c = param_4[2];
        if (local_8 <= param_4[2]) {
          local_c = local_8;
        }
        local_e = param_4[1];
        if (local_e < 1) {
          local_e = 0;
        }
        local_a = param_4[3];
        if (local_6 <= param_4[3]) {
          local_a = local_6;
        }
        psVar5 = (short *)&DAT_004d9208;
        piVar4 = (int *)0x0;
        psVar6 = &local_10;
        iVar2 = (int)this + 0x82;
        uVar3 = FUN_004084c0(*(int *)((int)this + 0x42));
        FUN_00421a80(*(void **)((int)this + 0x3a),*(short *)((int)this + 0x68),uVar3,iVar2,param_2,
                     param_3,psVar6,param_5,param_6,piVar4,psVar5);
        return;
      }
    }
    psVar6 = (short *)0x0;
    iVar2 = (int)this + 0x82;
    uVar3 = FUN_004084c0(*(int *)((int)this + 0x42));
    FUN_00421a80(*(void **)((int)this + 0x3a),*(short *)((int)this + 0x68),uVar3,iVar2,param_2,
                 param_3,param_4,param_5,param_6,param_7,psVar6);
  }
  return;
}


