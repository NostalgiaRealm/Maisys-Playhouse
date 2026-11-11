
/* ==== FUN_0045e280 @ 0045e280 ==== 
 * signature: undefined4 __thiscall FUN_0045e280(void * this, uint param_1, undefined4 param_2)
 * body: 0045e280-0045e485
 */

undefined4 __thiscall FUN_0045e280(void *this,uint param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_94 [26];
  undefined2 uStack_7a;
  undefined2 local_78;
  undefined2 uStack_76;
  int local_6c;
  int local_68;
  int local_5c [4];
  AFX_EXCEPTION_LINK local_4c [28];
  code *local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int *local_20;
  byte *local_1c;
  char local_17;
  char local_15;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0045e4b5;
  *unaff_FS_OFFSET = &local_10;
  local_2c = 0x10000;
  local_1c = (byte *)((int)this + 0x4e);
  local_14 = &stack0xffffff60;
  if ((*local_1c & 4) == 0) {
    local_20 = (int *)0x0;
    local_15 = '\0';
    AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_4c);
    local_8 = 1;
    DAT_004dbdc4 = 1;
    *local_1c = *local_1c | 4;
    uVar5 = param_1 & 0xffff;
    if (*(int *)(*(int *)((int)this + 0x2e) + 0x26) < (int)uVar5) {
      DAT_004dbdc4 = 0;
      *local_1c = (local_15 << 2 ^ *local_1c) & 4 ^ *local_1c;
    }
    else {
      FUN_00430370(*(void **)((int)this + 0x2e),uVar5,local_94);
      if (CONCAT22(uStack_76,local_78) == 0) {
        iVar6 = *(int *)this;
        piVar2 = (int *)(**(code **)(iVar6 + 0x118))(CONCAT22(local_78,uStack_7a),1,1);
        local_78 = SUB42(piVar2,0);
        uStack_76 = (undefined2)((uint)piVar2 >> 0x10);
        uVar3 = FUN_0045e190(piVar2);
        if ((char)uVar3 == '\0') {
          (**(code **)(iVar6 + 0x11c))(CONCAT22(local_78,uStack_7a),1,0);
          if ((undefined4 *)CONCAT22(uStack_76,local_78) != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)CONCAT22(uStack_76,local_78))(1);
          }
          FUN_0040f9c0(DAT_004d99a8);
          FUN_004a3538();
        }
        FUN_0042ff10(*(void **)((int)this + 0x2e),uVar5,local_94);
      }
      local_20 = (int *)CONCAT22(uStack_76,local_78);
      local_28 = *local_20;
      (**(code **)(local_28 + 0x148))(local_6c);
      iVar6 = local_6c + local_68;
      local_30 = *(code **)(local_28 + 0x144);
      (*local_30)(&local_24);
      local_17 = '\0';
      if (local_24 < iVar6) {
        do {
          if (local_17 != '\0') break;
          (**(code **)(local_28 + 0x134))(local_5c);
          if (local_5c[0] == 0x3e9) {
            iVar4 = (**(code **)(*(int *)this + 0x16c))
                              (*(undefined4 *)((int)this + 0x26),local_20,iVar6,local_5c,param_2);
            if (iVar4 != 0) {
              local_17 = '\x01';
            }
          }
          (*local_30)(&local_24);
          if ((iVar6 <= local_24) || (bVar1 = true, local_24 < 0)) {
            bVar1 = false;
          }
          local_5c[0] = -1;
        } while (bVar1);
      }
      DAT_004dbdc4 = 0;
      *local_1c = (local_15 << 2 ^ *local_1c) & 4 ^ *local_1c;
      local_2c = 0;
    }
    local_8 = 0xffffffff;
    FUN_0045e4bf();
  }
  *unaff_FS_OFFSET = local_10;
  return local_2c;
}


