
/* ==== FUN_00408080 @ 00408080 ==== 
 * signature: undefined __fastcall FUN_00408080(void * param_1)
 * body: 00408080-00408170
 */

void __fastcall FUN_00408080(void *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_58 [21];
  
  *(undefined1 *)((int)param_1 + 0xb0) = 1;
  iVar1 = *(int *)((int)param_1 + 0x96);
  *(int *)((int)param_1 + 0x9a) = iVar1;
  if ((iVar1 != 0) && (*(char *)((int)param_1 + 0xab) != '\0')) {
    piVar2 = (int *)FUN_0046ca90(iVar1);
    piVar2 = (int *)(**(code **)(*piVar2 + 0x338))();
    if ((*(int **)((int)param_1 + 0x9e) != piVar2) && (piVar2 != (int *)0x0)) {
      FUN_004081b0(param_1);
      if (*(int **)((int)param_1 + 0x9a) != piVar2) {
        FUN_00407ee0(param_1,piVar2);
      }
    }
  }
  *(char *)((int)param_1 + 0xa9) = '\x01' - (*(int *)((int)param_1 + 0x9a) == 0);
  if (*(int **)((int)param_1 + 0x96) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x96) + 0x268))(param_1);
    *(undefined2 *)((int)param_1 + 0x40) = 1;
    (**(code **)(**(int **)((int)param_1 + 0x96) + 0x230))();
    FUN_004142c0(local_58,0x7d1,0,0,0);
    FUN_0046b730(*(void **)((int)param_1 + 0x96),(int)local_58);
    FUN_004142c0(local_58,0x65,0,*(undefined4 *)((int)param_1 + 0x96),0);
    FUN_0046b730(*(void **)((int)param_1 + 0x96),(int)local_58);
  }
  FUN_00407fa0(param_1,'\x01');
  return;
}


