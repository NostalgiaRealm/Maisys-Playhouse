
/* ==== FUN_004772e0 @ 004772e0 ==== 
 * signature: undefined4 __cdecl FUN_004772e0(int param_1)
 * body: 004772e0-00477359
 */

undefined4 __cdecl FUN_004772e0(int param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  void *this;
  undefined4 uVar4;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  puVar1 = *(uint **)(param_1 + 0x1a);
  piVar2 = *(int **)(*(int *)(param_1 + 0x16) + 4);
  this = (void *)FUN_0040c620(piVar2);
  if (((piVar2 != (int *)0x0) && (this != (void *)0x0)) && (*(char *)((int)this + 0xa4) != '\0')) {
    local_14 = 3;
    local_10 = puVar1[1];
    local_c = puVar1[2];
    local_8 = puVar1[3];
    uVar3 = *puVar1;
    if ((uVar3 & 0x18000000) == 0) {
      uVar4 = FUN_00405650(this,uVar3,&local_14);
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
    this = (void *)FUN_00405790(this,uVar3,&local_14,0,0);
  }
  return CONCAT31((int3)((uint)this >> 8),1);
}


