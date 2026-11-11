
/* ==== FUN_004810c0 @ 004810c0 ==== 
 * signature: undefined __thiscall FUN_004810c0(void * this, int * param_1)
 * body: 004810c0-00481179
 */

void __thiscall FUN_004810c0(void *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0048117a;
  *unaff_FS_OFFSET = &local_10;
  FUN_0045b720((void *)((int)this + 0x16c),param_1);
  FUN_0045bac0((void *)((int)this + 0x16c),(int *)(*(int *)((int)this + 0x5a) + 0xbe));
  if (*(int *)((int)this + 0x168) == 0) {
    puVar1 = FUN_00412c20(0x4a);
    local_8 = 0;
    puVar2 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = FUN_0042f8d0(puVar1);
    }
    local_8 = 0xffffffff;
    *(undefined4 **)((int)this + 0x168) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      FUN_004a3538();
    }
    FUN_0042fb50(*(void **)((int)this + 0x168),8,0,'\0',0);
  }
  (**(code **)(**(int **)((int)this + 0x168) + 0xe8))(param_1);
  *unaff_FS_OFFSET = local_10;
  return;
}


