
/* ==== FUN_004310c0 @ 004310c0 ==== 
 * signature: undefined __fastcall FUN_004310c0(int * param_1)
 * body: 004310c0-004310db
 */

void __fastcall FUN_004310c0(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x15c))(0xb);
  if (cVar1 == '\0') {
    FUN_0040dd70(param_1);
  }
  return;
}


