
/* ==== FUN_0042c7b0 @ 0042c7b0 ==== 
 * signature: undefined __thiscall FUN_0042c7b0(void * this, int param_1)
 * body: 0042c7b0-0042c91d
 */

void __thiscall FUN_0042c7b0(void *this,int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  undefined4 uVar4;
  short sVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_50 [5];
  undefined1 local_3c [8];
  undefined4 local_34;
  code *local_28;
  code *local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  undefined4 local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0042c91e;
  *unaff_FS_OFFSET = &local_10;
  piVar3 = (int *)FUN_00466a90(param_1);
  local_18 = (int *)FUN_00466a90(*(int *)((int)this + 4));
  local_20 = (int *)(**(code **)(*piVar3 + 0x108))(3);
  local_1c = *local_18;
  piVar3 = (int *)(**(code **)(local_1c + 0x108))(3);
  if (local_20 != (int *)0x0) {
    if (piVar3 == (int *)0x0) {
      local_14 = FUN_00412c20(0x56);
      local_8 = 0;
      piVar3 = (int *)0x0;
      if (local_14 != (undefined4 *)0x0) {
        piVar3 = FUN_00422bd0(local_14);
      }
      local_8 = 0xffffffff;
      (**(code **)(local_1c + 0x100))(s_Toon_Ranges_004da084,3,piVar3);
    }
    sVar2 = (**(code **)(*(int *)this + 0x288))();
    local_14 = (undefined4 *)CONCAT22(sVar2,(undefined2)local_14);
    if ((sVar2 != 0) && (sVar5 = 1, 0 < sVar2)) {
      local_28 = *(code **)(*(int *)this + 0x28c);
      local_24 = *(code **)(*local_20 + 0x11c);
      do {
        uVar4 = (*local_28)(sVar5);
        cVar1 = (*local_24)(0,uVar4,0,local_50,1);
        if (cVar1 != '\0') {
          cVar1 = (**(code **)(*piVar3 + 0x124))(0,local_50[0],local_3c,1,0);
          if (cVar1 == '\0') {
            uVar4 = (**(code **)(local_1c + 0x110))(1,local_3c,0);
            (**(code **)(*piVar3 + 0x100))(local_50[0],0,uVar4);
          }
          (**(code **)(*(int *)this + 0x290))(sVar5,local_34);
        }
        sVar5 = sVar5 + 1;
      } while (sVar5 <= local_14._2_2_);
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


