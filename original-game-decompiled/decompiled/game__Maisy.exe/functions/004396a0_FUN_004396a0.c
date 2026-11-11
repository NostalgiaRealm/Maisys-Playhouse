
/* ==== FUN_004396a0 @ 004396a0 ==== 
 * signature: undefined __thiscall FUN_004396a0(void * this, int param_1, char param_2)
 * body: 004396a0-004396e6
 */

void __thiscall FUN_004396a0(void *this,int param_1,char param_2)

{
  int *piVar1;
  DWORD DVar2;
  
  piVar1 = FUN_004396f0(this,param_1);
  if (piVar1 != (int *)0x0) {
    if (param_2 != '\0') {
      piVar1[0x103] = piVar1[0x103] + 1;
      DVar2 = timeGetTime();
      piVar1[2] = (DVar2 * 6) / 100;
      return;
    }
    piVar1[0x103] = piVar1[0x103] + -1;
  }
  return;
}


