
/* ==== FUN_00421420 @ 00421420 ==== 
 * signature: undefined __thiscall FUN_00421420(void * this, int param_1, int param_2)
 * body: 00421420-0042157d
 */

void __thiscall FUN_00421420(void *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *unaff_FS_OFFSET;
  int local_18;
  int local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0042157e;
  *unaff_FS_OFFSET = &local_10;
  iVar2 = *(int *)this;
  (**(code **)(iVar2 + 0x114))();
  cVar1 = (**(code **)(iVar2 + 0xec))();
  if ((cVar1 != '\0') && (*(int *)((int)this + 0x152) != 0)) {
    local_18 = 0;
    if (-1 < param_1) {
      local_18 = param_1;
    }
    local_14 = (int)*(short *)((int)this + 0x176) - 1;
    if (param_2 <= local_14) {
      local_14 = param_2;
    }
    if (*(int *)((int)this + 0x162) == 0) {
      iVar2 = FUN_00434920(DAT_004d99ac,(int)*(short *)((int)this + 0x176),1);
      *(int *)((int)this + 0x162) = iVar2;
      if (iVar2 == 0) {
        FUN_004a3538();
      }
    }
    iVar2 = local_18;
    if (*(int *)((int)this + 0x166) == 0) {
      iVar3 = FUN_00434920(DAT_004d99ac,(int)*(short *)((int)this + 0x176),1);
      *(int *)((int)this + 0x166) = iVar3;
      iVar2 = local_18;
      if (iVar3 == 0) {
        FUN_004a3538();
        iVar2 = local_18;
      }
    }
    for (; iVar2 <= local_14; iVar2 = iVar2 + 1) {
      if (*(char *)(*(int *)((int)this + 0x166) + iVar2) == '\0') {
        *(undefined1 *)(*(int *)((int)this + 0x162) + iVar2) = 1;
      }
    }
    if (*(int *)((int)this + 0x15e) == 0) {
      puVar4 = FUN_00412c20(0x4a);
      local_8 = 0;
      puVar5 = (undefined4 *)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        puVar5 = FUN_0042f8d0(puVar4);
      }
      local_8 = 0xffffffff;
      *(undefined4 **)((int)this + 0x15e) = puVar5;
      if (puVar5 == (undefined4 *)0x0) {
        FUN_004a3538();
      }
      FUN_0042fb50(*(void **)((int)this + 0x15e),8,0,'\0',0);
    }
    (**(code **)(**(int **)((int)this + 0x15e) + 0xe8))(&local_18);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


