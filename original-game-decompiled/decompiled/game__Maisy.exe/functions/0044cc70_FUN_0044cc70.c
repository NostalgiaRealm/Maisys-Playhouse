
/* ==== FUN_0044cc70 @ 0044cc70 ==== 
 * signature: undefined __cdecl FUN_0044cc70(int param_1)
 * body: 0044cc70-0044ccaf
 */

void __cdecl FUN_0044cc70(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = (int *)0x0;
  piVar2 = DAT_004dbb0c;
  while (piVar2 != (int *)0x0) {
    if (*piVar2 == param_1) {
      piVar3 = (int *)piVar2[1];
      if (piVar1 != (int *)0x0) {
        piVar1[1] = piVar2[1];
        piVar3 = DAT_004dbb0c;
      }
      DAT_004dbb0c = piVar3;
      FUN_00434950(piVar2);
      piVar2 = (int *)0x0;
    }
    else {
      piVar1 = piVar2;
      piVar2 = (int *)piVar2[1];
    }
  }
  return;
}


