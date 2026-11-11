
/* ==== FUN_004699c0 @ 004699c0 ==== 
 * signature: undefined __fastcall FUN_004699c0(void * param_1)
 * body: 004699c0-004699e9
 */

void __fastcall FUN_004699c0(void *param_1)

{
  void *pvVar1;
  int *piVar2;
  
  pvVar1 = FUN_0046da90(param_1,'\x01','\x01');
  if (pvVar1 != (void *)0x0) {
    piVar2 = FUN_0046da90(param_1,'\x01','\x01');
    (**(code **)(*piVar2 + 0x1c4))(param_1,0);
  }
  return;
}


