
/* ==== FUN_0043cb80 @ 0043cb80 ==== 
 * signature: short __cdecl FUN_0043cb80(void * param_1, int param_2)
 * body: 0043cb80-0043cbc4
 */

short __cdecl FUN_0043cb80(void *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  short sVar4;
  
  sVar1 = *(short *)((int)param_1 + 0xc);
  sVar4 = 1;
  if (0 < sVar1) {
    do {
      piVar3 = (int *)FUN_004308b0(param_1,sVar4);
      sVar2 = (**(code **)(*piVar3 + 0x27c))();
      if (sVar2 == param_2) {
        return sVar4;
      }
      sVar4 = sVar4 + 1;
    } while (sVar4 <= sVar1);
  }
  return 0;
}


