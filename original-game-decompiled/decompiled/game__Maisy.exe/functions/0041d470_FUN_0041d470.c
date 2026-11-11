
/* ==== FUN_0041d470 @ 0041d470 ==== 
 * signature: uint __thiscall FUN_0041d470(void * this, int * param_1)
 * body: 0041d470-0041d4bd
 */

uint __thiscall FUN_0041d470(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)this;
  (**(code **)(iVar1 + 0x114))();
  if (*(char *)((int)this + 0xf2) == '\0') {
    uVar3 = (**(code **)(iVar1 + 0x124))();
    if ((char)uVar3 == '\0') {
      return uVar3 & 0xffffff00;
    }
  }
  iVar1 = *(int *)((int)this + 0xf4);
  iVar2 = *(int *)((int)this + 0xf8);
  *param_1 = iVar1;
  param_1[1] = iVar2;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


