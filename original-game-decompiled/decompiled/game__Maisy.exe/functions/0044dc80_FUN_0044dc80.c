
/* ==== FUN_0044dc80 @ 0044dc80 ==== 
 * signature: undefined __thiscall FUN_0044dc80(void * this, int param_1, undefined4 param_2, undefined4 param_3)
 * body: 0044dc80-0044dd33
 */

void __thiscall FUN_0044dc80(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 local_5;
  
  if (0 < param_1) {
    iVar2 = FUN_0044e340((int)this);
    if (param_1 <= iVar2) {
      FUN_00430190(*(int *)((int)this + 0x30));
      piVar3 = (int *)FUN_004301c0(*(void **)((int)this + 0x30),param_1);
      iVar2 = *piVar3;
      local_5 = '\0';
      FUN_004301f0(*(int *)((int)this + 0x30));
      pcVar1 = *(code **)(*(int *)this + 0x10);
      iVar4 = (*pcVar1)();
      if (iVar4 != 0) {
        iVar4 = (*pcVar1)();
        local_5 = *(char *)(iVar4 + 0x88);
      }
      piVar3 = FUN_0044db20(this,param_1,0,'\x01',local_5 == '\0');
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x1c4))(param_2,param_3);
        if ((iVar2 == 0) && (DAT_004db998 != 0)) {
          *(undefined4 *)((int)piVar3 + 0x66) = *(undefined4 *)(DAT_004db998 + 0xc);
        }
      }
    }
  }
  return;
}


