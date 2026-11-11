
/* ==== FUN_0042b430 @ 0042b430 ==== 
 * signature: undefined1 __thiscall FUN_0042b430(void * this, undefined4 param_1)
 * body: 0042b430-0042b508
 */

undefined1 __thiscall FUN_0042b430(void *this,undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  short local_50 [24];
  undefined1 local_20 [8];
  undefined1 local_18 [4];
  ushort local_14;
  short local_10;
  short local_e;
  short local_8;
  short local_6;
  
  iVar1 = *(int *)this;
  (**(code **)(iVar1 + 0x27c))(local_50);
  uVar4 = FUN_0043c380(local_50,(ushort *)&param_1);
  (**(code **)(iVar1 + 0x280))();
  uVar3 = 0;
  if ((char)uVar4 != '\0') {
    puVar5 = (undefined1 *)0x0;
    (**(code **)(iVar1 + 0x298))(&local_10);
    param_1._2_2_ = param_1._2_2_ - local_e;
    param_1._0_2_ = (ushort)param_1 - local_10;
    (**(code **)(iVar1 + 0x290))(&local_8);
    param_1 = CONCAT22(param_1._2_2_ - local_6,(ushort)param_1 - local_8);
    (**(code **)(**(int **)((int)this + 0x3e) + 0x410))(local_20);
    if ((local_14 != 0xffff) && ((local_14 & 0x200) != 0)) {
      puVar5 = local_18;
    }
    piVar2 = *(int **)((int)this + 0x3a);
    if (piVar2 == (int *)0x0) {
      return 1;
    }
    if ((*(byte *)((int)piVar2 + 0x6b) & 2) != 0) {
      return 1;
    }
    uVar3 = (**(code **)(*piVar2 + 0x224))(param_1,&local_10,1,puVar5);
  }
  return uVar3;
}


