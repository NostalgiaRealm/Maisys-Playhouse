
/* ==== FUN_0045a520 @ 0045a520 ==== 
 * signature: undefined1 __thiscall FUN_0045a520(void * this, int param_1, short * param_2)
 * body: 0045a520-0045a600
 */

undefined1 __thiscall FUN_0045a520(void *this,int param_1,short *param_2)

{
  void *pvVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined2 local_34;
  undefined4 local_32;
  
  if (param_1 != 0x12) {
    if (param_1 != 0x13) {
      uVar2 = FUN_004142a0();
      return uVar2;
    }
    if (*param_2 == 0x1c) {
      pvVar1 = *(void **)(param_2 + 1);
      if ((pvVar1 != (void *)0x0) && ((*(byte *)((int)pvVar1 + 0x1e) & 0x80) != 0)) {
        local_32 = FUN_0045a240((int)this);
        local_34 = 1;
        FUN_00474c50(pvVar1,this,&local_34);
        return 1;
      }
    }
    else if (*param_2 == 0x17) {
      uVar3 = FUN_0045a240((int)this);
      *param_2 = 1;
      *(undefined4 *)(param_2 + 1) = uVar3;
    }
    return 1;
  }
  if (*param_2 == 0x1c) {
    pvVar1 = *(void **)(param_2 + 1);
    if ((pvVar1 != (void *)0x0) && ((*(byte *)((int)pvVar1 + 0x1e) & 0x80) != 0)) {
      local_32 = thunk_FUN_00443170();
      local_34 = 1;
      FUN_00474c50(pvVar1,this,&local_34);
      return 1;
    }
  }
  else if (*param_2 == 0x17) {
    uVar3 = thunk_FUN_00443170();
    *param_2 = 1;
    *(undefined4 *)(param_2 + 1) = uVar3;
  }
  return 1;
}


