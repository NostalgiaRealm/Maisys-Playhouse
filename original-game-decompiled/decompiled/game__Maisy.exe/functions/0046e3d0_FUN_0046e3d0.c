
/* ==== FUN_0046e3d0 @ 0046e3d0 ==== 
 * signature: undefined4 __thiscall FUN_0046e3d0(void * this, undefined4 * param_1)
 * body: 0046e3d0-0046e4ab
 */

undefined4 __thiscall FUN_0046e3d0(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  code *pcVar5;
  undefined4 local_10c [64];
  int local_c;
  int local_8;
  
  FUN_00437520(local_10c,param_1);
  iVar2 = (**(code **)(*(int *)this + 0x108))(local_10c);
  if (iVar2 == 0) {
    return 0x10000;
  }
  iVar3 = FUN_00430190((int)this);
  piVar1 = (int *)(iVar3 + -4 + iVar2 * 8);
  if (*piVar1 == 0) {
    puVar4 = (undefined2 *)FUN_00434920(DAT_004d99ac,0x2c,0);
    *piVar1 = (int)puVar4;
    *puVar4 = 0;
    if (*piVar1 == 0) {
      FUN_004301f0((int)this);
      return 0x10000;
    }
  }
  pcVar5 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x10),1,0x1a,&local_c);
  DAT_004e34cc = (*pcVar5)(local_c,this,piVar1);
  pcVar5 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x10),1,0x19,&local_8);
  DAT_004e34cc = (*pcVar5)(local_8,piVar1,&stack0x0000000c);
  return 0;
}


