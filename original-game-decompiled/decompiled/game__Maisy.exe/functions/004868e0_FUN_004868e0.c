
/* ==== FUN_004868e0 @ 004868e0 ==== 
 * signature: undefined __cdecl FUN_004868e0(int * param_1, int * param_2, undefined4 * param_3)
 * body: 004868e0-0048698c
 */

void __cdecl FUN_004868e0(int *param_1,int *param_2,undefined4 *param_3)

{
  short sVar1;
  int *piVar2;
  bool bVar3;
  
  bVar3 = *(short *)((int)param_1 + 0x22) != 0x43;
  piVar2 = param_1;
  if (bVar3) {
    piVar2 = (int *)(**(code **)(*param_1 + 0x16c))();
  }
  if (piVar2 == (int *)0x0) {
    sVar1 = 0xd;
  }
  else {
    sVar1 = (**(code **)(*piVar2 + 0x1d4))(param_2);
  }
  if ((sVar1 < 2) && ((*(byte *)((int)param_2 + 0x1f) & 4) != 0)) {
    if ((*(uint *)((int)param_1 + 0x1e) & 0x400) != 0) {
      if (bVar3) {
        piVar2 = FUN_0043dc60(param_2,param_1,'\x01');
        *param_3 = piVar2;
        return;
      }
      piVar2 = FUN_0043de50(param_2,param_1,'\x01',1);
      *param_3 = piVar2;
      return;
    }
    if ((*(uint *)((int)param_1 + 0x1e) & 2) != 0) {
      piVar2 = FUN_0043de50(param_2,param_1,'\x01',1);
      *param_3 = piVar2;
    }
  }
  return;
}


