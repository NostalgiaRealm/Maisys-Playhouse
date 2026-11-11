
/* ==== FUN_00479910 @ 00479910 ==== 
 * signature: undefined __thiscall FUN_00479910(void * this, undefined4 * param_1)
 * body: 00479910-00479976
 */

void __thiscall FUN_00479910(void *this,undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_18 [5];
  
  param_1[1] = 0xffffffff;
  param_1[6] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  cVar1 = (**(code **)(**(int **)((int)this + 0x2e) + 0x120))(1,2,local_18);
  if (cVar1 != '\0') {
    puVar3 = local_18;
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_1 = *puVar3;
      puVar3 = puVar3 + 1;
      param_1 = param_1 + 1;
    }
    local_18[3] = *(undefined4 *)((int)this + 0x32);
    (**(code **)(**(int **)((int)this + 0x2e) + 0x118))(1,2,local_18);
  }
  return;
}


