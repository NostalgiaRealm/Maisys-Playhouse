
/* ==== FUN_0040c250 @ 0040c250 ==== 
 * signature: int * __thiscall FUN_0040c250(void * this, int * param_1)
 * body: 0040c250-0040c2ce
 */

int * __thiscall FUN_0040c250(void *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  undefined3 extraout_var;
  char local_118 [256];
  int local_18 [5];
  
  piVar3 = (int *)(**(code **)(*(int *)this + 0x184))();
  while( true ) {
    if (piVar3 == (int *)0x0) {
      return (int *)0x0;
    }
    iVar1 = *piVar3;
    (**(code **)(iVar1 + 0x70))(local_118);
    FUN_004374f0(local_118,(char *)local_18);
    FUN_00437550((int)local_18);
    bVar2 = FUN_00437430(param_1,local_18);
    if (CONCAT31(extraout_var,bVar2) != 0) break;
    piVar3 = (int *)(**(code **)(iVar1 + 0x17c))();
  }
  return piVar3;
}


