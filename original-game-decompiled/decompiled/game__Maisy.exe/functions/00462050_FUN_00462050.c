
/* ==== FUN_00462050 @ 00462050 ==== 
 * signature: undefined4 __thiscall FUN_00462050(void * this, short * param_1, undefined4 * param_2)
 * body: 00462050-00462119
 */

undefined4 __thiscall FUN_00462050(void *this,short *param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)((int)this + 0x11c) == 0) {
    puVar1 = (undefined2 *)FUN_004a5fed(0x30);
    *(undefined2 **)((int)this + 0x11c) = puVar1;
    *puVar1 = 2;
    *(undefined1 *)(*(int *)((int)this + 0x11c) + 2) = 0;
  }
  if (*(char *)(*(int *)((int)this + 0x11c) + 2) == '\0') {
    local_c = 0;
    local_8 = 0;
    if (*param_1 == 1) {
      local_8 = *(undefined4 *)(param_1 + 3);
      local_c = *(undefined4 *)(param_1 + 1);
    }
    else {
      (**(code **)(*(int *)this + 0x38c))(&local_c,0);
    }
    iVar2 = (int)(short)local_c;
    iVar4 = (int)local_c._2_2_;
    iVar3 = (**(code **)(*(int *)this + 0x10))();
    FUN_0041d830(param_1,*(undefined2 **)((int)this + 0x11c),iVar3,iVar4,iVar2);
  }
  if (*(char *)((int)*(undefined4 **)((int)this + 0x11c) + 2) == '\0') {
    *(undefined2 *)param_2 = 0;
  }
  else {
    puVar5 = *(undefined4 **)((int)this + 0x11c);
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *puVar5;
      puVar5 = puVar5 + 1;
      param_2 = param_2 + 1;
    }
  }
  return CONCAT31((int3)((uint)*(int *)((int)this + 0x11c) >> 8),
                  *(undefined1 *)(*(int *)((int)this + 0x11c) + 2));
}


