
/* ==== FUN_00403510 @ 00403510 ==== 
 * signature: undefined __thiscall FUN_00403510(void * this, int * param_1, int param_2)
 * body: 00403510-004035af
 */

void __thiscall FUN_00403510(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_3c [10];
  int local_14;
  int *local_10;
  int local_c;
  undefined4 local_8;
  
  iVar2 = 1;
  local_14 = *(int *)(*(int *)((int)this + 0x82) + 0x26);
  if (0 < local_14) {
    while (((FUN_00430370(*(void **)((int)this + 0x82),iVar2,&local_10), param_1 != (int *)0x0 &&
            (param_1 != local_10)) || (param_2 != local_c))) {
      iVar2 = iVar2 + 1;
      if (local_14 < iVar2) {
        return;
      }
    }
    local_3c[0] = local_8;
    (**(code **)(*local_10 + 0x214))(local_3c,0);
    (**(code **)(*local_10 + 0x19c))();
    uVar3 = 1;
    uVar1 = FUN_00458a00(*(int *)((int)this + 0x2a));
    (**(code **)(*local_10 + 0x1c8))(uVar1,uVar3);
    FUN_00430090(*(void **)((int)this + 0x82),iVar2);
  }
  return;
}


