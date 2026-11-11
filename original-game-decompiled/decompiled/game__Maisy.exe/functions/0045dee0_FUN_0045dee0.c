
/* ==== FUN_0045dee0 @ 0045dee0 ==== 
 * signature: undefined4 __thiscall FUN_0045dee0(void * this, uint param_1, undefined4 param_2, int * param_3)
 * body: 0045dee0-0045e153
 */

undefined4 __thiscall FUN_0045dee0(void *this,uint param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_b4 [26];
  undefined2 uStack_9a;
  undefined2 local_98;
  undefined2 uStack_96;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined2 local_70;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_48;
  AFX_EXCEPTION_LINK local_44 [24];
  code *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  code *local_20;
  byte *local_1c;
  char local_16;
  byte local_15;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0045e17c;
  *unaff_FS_OFFSET = &local_10;
  local_24 = 0x10000;
  local_14 = &stack0xffffff40;
  *param_3 = 0;
  if (((param_1 & 0x40000000) != 0) ||
     (((param_1 & 0xffff) != 0 &&
      ((param_1 & 0xffff) <= *(uint *)(*(int *)((int)this + 0x2e) + 0x26))))) {
    uVar4 = param_1 & 0xffff;
    local_1c = (byte *)((int)this + 0x4e);
    local_16 = '\0';
    local_15 = (*local_1c & 4) >> 2;
    *local_1c = *local_1c | 4;
    AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_44);
    local_8 = 1;
    if ((uVar4 != 0) && ((int)uVar4 <= *(int *)((int)*(void **)((int)this + 0x2e) + 0x26))) {
      local_16 = '\x01';
      FUN_00430370(*(void **)((int)this + 0x2e),uVar4,local_b4);
      if (CONCAT22(uStack_96,local_98) == 0) {
        piVar2 = (int *)(**(code **)(*(int *)this + 0x118))(CONCAT22(local_98,uStack_9a),1,1);
        local_98 = SUB42(piVar2,0);
        uStack_96 = (undefined2)((uint)piVar2 >> 0x10);
        uVar3 = FUN_0045e190(piVar2);
        if ((char)uVar3 == '\0') {
          (**(code **)(*(int *)this + 0x11c))(CONCAT22(local_98,uStack_9a),1,0);
          if ((undefined4 *)CONCAT22(uStack_96,local_98) != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)CONCAT22(uStack_96,local_98))(1);
          }
          FUN_0040f9c0(DAT_004d99a8);
          FUN_004a3538();
        }
        FUN_0042ff10(*(void **)((int)this + 0x2e),uVar4,local_b4);
      }
    }
    if (local_16 != '\0') {
      piVar2 = (int *)CONCAT22(uStack_96,local_98);
      if ((local_15 != 0) || ((*local_1c & 8) != 0)) {
        (**(code **)(*piVar2 + 0x144))(&local_28);
      }
      local_20 = *(code **)(*piVar2 + 0x148);
      (*local_20)(param_2);
      pcVar1 = *(code **)(*piVar2 + 0x134);
      (*pcVar1)(&local_54);
      if (local_54 == 0x3e9) {
        local_2c = *(code **)(*piVar2 + 0x138);
        do {
          local_7c = local_54;
          local_78 = local_50;
          local_74 = local_4c;
          local_70 = local_48;
          (*local_2c)(&local_7c,0x26);
          (*pcVar1)(&local_54);
        } while (local_54 == 0x3e9);
      }
      if ((local_54 == 0) || (local_54 == -1)) {
        if ((local_15 != 0) || ((*local_1c & 8) != 0)) {
          (*local_20)(local_28);
        }
        *local_1c = (local_15 << 2 ^ *local_1c) & 4 ^ *local_1c;
      }
      else {
        (**(code **)(*(int *)this + 0x170))
                  (*(undefined4 *)((int)this + 0x26),piVar2,&local_54,param_3);
        if ((local_15 != 0) || ((*local_1c & 8) != 0)) {
          (*local_20)(local_28);
        }
        *local_1c = (local_15 << 2 ^ *local_1c) & 4 ^ *local_1c;
        if (*param_3 != 0) {
          local_24 = 0;
        }
      }
    }
    local_8 = 0xffffffff;
    FUN_0045e186();
  }
  *unaff_FS_OFFSET = local_10;
  return local_24;
}


