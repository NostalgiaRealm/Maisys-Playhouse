
/* ==== FUN_00477360 @ 00477360 ==== 
 * signature: undefined4 __cdecl FUN_00477360(int param_1)
 * body: 00477360-004773ee
 */

undefined4 __cdecl FUN_00477360(int param_1)

{
  int iVar1;
  int *piVar2;
  void *this;
  void *pvVar3;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = *(int *)(param_1 + 0x1a);
  piVar2 = *(int **)(*(int *)(param_1 + 0x16) + 4);
  if (piVar2 != (int *)0x0) {
    this = (void *)FUN_0040c620(piVar2);
    param_1 = (**(code **)(*piVar2 + 0x10))();
    if ((((void *)param_1 != (void *)0x0) && (this != (void *)0x0)) &&
       (*(char *)((int)this + 0xa4) != '\0')) {
      local_14 = 3;
      local_10 = *(undefined4 *)(iVar1 + 4);
      local_c = *(undefined4 *)(iVar1 + 8);
      local_8 = *(undefined4 *)(iVar1 + 0xc);
      *(undefined1 *)((int)this + 0xab) = 0;
      pvVar3 = (void *)FUN_00459fc0((void *)param_1,&local_14);
      param_1 = FUN_004053f0((int)this);
      if ((void *)param_1 != pvVar3) {
        param_1 = FUN_004053e0((int)this);
        if ((void *)param_1 != pvVar3) {
          param_1 = FUN_00403190(this,pvVar3);
        }
      }
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


