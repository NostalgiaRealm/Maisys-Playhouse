
/* ==== FUN_00445fe0 @ 00445fe0 ==== 
 * signature: undefined4 __fastcall FUN_00445fe0(void * param_1)
 * body: 00445fe0-0044601a
 */

undefined4 __fastcall FUN_00445fe0(void *param_1)

{
  void *pvVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)param_1 + 0x14a) != 0) {
    return *(undefined4 *)((int)param_1 + 0x15a);
  }
  pvVar1 = FUN_0046da90(param_1,'\x01','\x01');
  if (pvVar1 == (void *)0x0) {
    return 0;
  }
  piVar2 = FUN_0046da90(param_1,'\x01','\x01');
  uVar3 = FUN_00449950(piVar2);
  return uVar3;
}


