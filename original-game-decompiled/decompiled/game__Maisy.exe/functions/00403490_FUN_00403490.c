
/* ==== FUN_00403490 @ 00403490 ==== 
 * signature: undefined4 __thiscall FUN_00403490(void * this, int * param_1, int param_2)
 * body: 00403490-00403502
 */

undefined4 __thiscall FUN_00403490(void *this,int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_3c [10];
  int *local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  iVar1 = *(int *)((int)this + 0x82);
  iVar3 = 1;
  local_8 = *(int *)(iVar1 + 0x26);
  if (0 < local_8) {
    do {
      iVar1 = FUN_00430370(*(void **)((int)this + 0x82),iVar3,&local_14);
      if (((param_1 == (int *)0x0) || (param_1 == local_14)) &&
         (iVar1 = param_2, param_2 == local_10)) {
        local_3c[0] = local_c;
        uVar2 = (**(code **)(*local_14 + 0x218))(local_3c);
        return uVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= local_8);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


