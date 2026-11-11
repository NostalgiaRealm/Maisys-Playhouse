
/* ==== FUN_00404db0 @ 00404db0 ==== 
 * signature: undefined __thiscall FUN_00404db0(void * this, int param_1)
 * body: 00404db0-00404e23
 */

void __thiscall FUN_00404db0(void *this,int param_1)

{
  short sVar1;
  int iVar2;
  int local_14 [4];
  
  if ((param_1 == 0) ||
     ((((sVar1 = *(short *)(param_1 + 0x22), sVar1 != 0x43 && (sVar1 != 0x40)) && (sVar1 != 0x3f))
      && ((((*(uint *)(param_1 + 0x1e) & 2) == 0 || (*(short *)(param_1 + 0x60) != 0)) ||
          (((*(uint *)(param_1 + 0x1e) & 0x40000000) != 0 || (sVar1 == 0x43)))))))) {
    iVar2 = FUN_00430cd0(*(void **)((int)this + 0x7a),param_1);
    if (iVar2 == 0) {
      local_14[0] = param_1;
      local_14[1] = 0;
      local_14[2] = 0;
      local_14[3] = 0;
      (**(code **)(**(int **)((int)this + 0x7a) + 0xe8))(local_14);
    }
  }
  return;
}


