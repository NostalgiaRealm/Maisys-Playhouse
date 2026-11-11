
/* ==== FUN_00442650 @ 00442650 ==== 
 * signature: char __thiscall FUN_00442650(void * this, undefined4 param_1)
 * body: 00442650-0044276e
 */

char __thiscall FUN_00442650(void *this,undefined4 param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  short local_60 [24];
  short local_30 [4];
  undefined1 local_28 [8];
  undefined1 local_20 [4];
  ushort local_1c;
  short local_18 [4];
  undefined4 local_10;
  short local_8;
  short local_6;
  
  iVar1 = *(int *)this;
  (**(code **)(iVar1 + 0x27c))(local_60);
  uVar3 = FUN_0043c380(local_60,(ushort *)&param_1);
  cVar2 = (char)uVar3;
  (**(code **)(iVar1 + 0x280))();
  if (cVar2 != '\0') {
    iVar4 = (**(code **)(iVar1 + 0x244))();
    if (iVar4 != 0) {
      iVar4 = (**(code **)(iVar1 + 0x244))();
      if ((*(byte *)(iVar4 + 0x6b) & 2) == 0) {
        puVar5 = (undefined1 *)0x0;
        (**(code **)(iVar1 + 0x298))(local_18);
        FUN_00421d50(*(void **)((int)this + 0x3a),&local_10,*(short *)((int)this + 0x68));
        (**(code **)(**(int **)((int)this + 0x3a) + 0x1dc))(local_30);
        FUN_0043bff0((short *)&local_10,local_30,local_18);
        param_1._2_2_ = param_1._2_2_ - local_10._2_2_;
        param_1._0_2_ = (ushort)param_1 - (short)local_10;
        (**(code **)(iVar1 + 0x290))(&local_8);
        param_1 = CONCAT22(param_1._2_2_ - local_6,(ushort)param_1 - local_8);
        (**(code **)(**(int **)((int)this + 0x3e) + 0x410))(local_28);
        if ((local_1c != 0xffff) && ((local_1c & 0x200) != 0)) {
          puVar5 = local_20;
        }
        if (*(int **)((int)this + 0x3a) != (int *)0x0) {
          cVar2 = (**(code **)(**(int **)((int)this + 0x3a) + 0x224))
                            (param_1,local_18,(int)*(short *)((int)this + 0x68),puVar5);
          return cVar2;
        }
        cVar2 = '\x01';
      }
    }
  }
  return cVar2;
}


