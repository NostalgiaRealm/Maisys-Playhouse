
/* ==== FUN_00445fa0 @ 00445fa0 ==== 
 * signature: int __fastcall FUN_00445fa0(void * param_1)
 * body: 00445fa0-00445fd3
 */

int __fastcall FUN_00445fa0(void *param_1)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)param_1 + 0x14a);
  if (iVar3 == 0) {
    pvVar1 = FUN_0046da90(param_1,'\x01','\x01');
    if (pvVar1 == (void *)0x0) {
      return 0;
    }
    piVar2 = FUN_0046da90(param_1,'\x01','\x01');
    iVar3 = FUN_00449900(piVar2);
  }
  return iVar3;
}


