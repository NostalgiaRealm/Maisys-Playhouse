
/* ==== FUN_0044db20 @ 0044db20 ==== 
 * signature: void * __thiscall FUN_0044db20(void * this, int param_1, short param_2, char param_3, char param_4)
 * body: 0044db20-0044dbe1;0044dc1e-0044dc5c
 */

void * __thiscall FUN_0044db20(void *this,int param_1,short param_2,char param_3,char param_4)

{
  void *this_00;
  short sVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 *unaff_FS_OFFSET;
  void *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  byte local_34;
  AFX_EXCEPTION_LINK local_30 [20];
  void *local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined4 local_8;
  
  uStack_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0044dc0c;
  *unaff_FS_OFFSET = &uStack_10;
  local_18 = (undefined4 *)((int)this + 0x30);
  local_14 = &stack0xffffffa8;
  uVar2 = FUN_00430370((void *)*local_18,param_1,&local_4c);
  pvVar3 = (void *)0x0;
  if (((char)uVar2 != '\0') && ((local_34 & 1) == 0)) {
    pvVar3 = local_4c;
    if (local_4c == (void *)0x0) {
      if (param_4 != '\0') {
        local_1c = (void *)0x0;
        AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_30);
        local_8 = 1;
        (**(code **)(**(int **)(*(int *)((int)this + 4) + 0x48) + 0x13c))
                  (local_48,local_44,&local_1c);
        FUN_00430370((void *)*local_18,param_1,&local_4c);
        local_4c = local_1c;
        FUN_0042ff10((void *)*local_18,param_1,&local_4c);
        local_8 = 0xffffffff;
        FUN_0044dc16();
        pvVar3 = (void *)FUN_0044dc5d();
        return pvVar3;
      }
    }
    else if ((param_2 != 0) && (this_00 = local_4c, param_2 != -1)) {
      while ((pvVar3 = local_4c, this_00 != (void *)0x0 &&
             ((sVar1 = FUN_0040d4e0(this_00,param_3), pvVar3 = this_00, sVar1 != -1 &&
              (param_2 != sVar1))))) {
        this_00 = *(void **)((int)this_00 + 0x26);
      }
    }
  }
  *unaff_FS_OFFSET = uStack_10;
  return pvVar3;
}


