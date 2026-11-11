
/* ==== FUN_00446210 @ 00446210 ==== 
 * signature: undefined2 __fastcall FUN_00446210(void * param_1)
 * body: 00446210-00446238
 */

undefined2 __fastcall FUN_00446210(void *param_1)

{
  undefined2 uVar1;
  void *pvVar2;
  int *piVar3;
  
  pvVar2 = FUN_0046da90(param_1,'\x01','\x01');
  if (pvVar2 != (void *)0x0) {
    piVar3 = FUN_0046da90(param_1,'\x01','\x01');
    uVar1 = FUN_00449920(piVar3);
    return uVar1;
  }
  return 0;
}


