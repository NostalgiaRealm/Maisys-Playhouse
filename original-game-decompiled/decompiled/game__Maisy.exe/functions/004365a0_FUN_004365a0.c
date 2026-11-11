
/* ==== FUN_004365a0 @ 004365a0 ==== 
 * signature: undefined __thiscall FUN_004365a0(void * this, int param_1, int param_2)
 * body: 004365a0-004365d8
 */

void __thiscall FUN_004365a0(void *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)((int)this + param_1 * 0x124 + 0x13c);
  piVar1 = (int *)(*piVar2 + 0x5e + param_2 * 0x80);
  if (*piVar1 != 0) {
    *piVar1 = 0;
    *(undefined4 *)(*piVar2 + 0x5a + param_2 * 0x80) = 0;
  }
  return;
}


