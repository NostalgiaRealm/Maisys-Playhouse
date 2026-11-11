
/* ==== FUN_00405110 @ 00405110 ==== 
 * signature: undefined __thiscall FUN_00405110(void * this, int param_1, undefined4 param_2)
 * body: 00405110-0040516d
 */

void __thiscall FUN_00405110(void *this,int param_1,undefined4 param_2)

{
  short sVar1;
  int local_c;
  undefined4 local_8;
  
  if ((param_1 == 0) ||
     ((((sVar1 = *(short *)(param_1 + 0x22), sVar1 != 0x43 && (sVar1 != 0x40)) && (sVar1 != 0x3f))
      && ((((*(uint *)(param_1 + 0x1e) & 2) == 0 || (*(short *)(param_1 + 0x60) != 0)) ||
          (((*(uint *)(param_1 + 0x1e) & 0x40000000) != 0 || (sVar1 == 0x43)))))))) {
    local_c = param_1;
    local_8 = param_2;
    (**(code **)(**(int **)((int)this + 0x7e) + 0xe8))(&local_c);
  }
  return;
}


