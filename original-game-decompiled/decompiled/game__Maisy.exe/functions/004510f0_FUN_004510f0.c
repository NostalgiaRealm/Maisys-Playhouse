
/* ==== FUN_004510f0 @ 004510f0 ==== 
 * signature: undefined __thiscall FUN_004510f0(void * this, int * param_1)
 * body: 004510f0-0045116a
 */

void __thiscall FUN_004510f0(void *this,int *param_1)

{
  short sVar1;
  int *piVar2;
  short sVar3;
  int *local_14 [2];
  void *local_c;
  
  (**(code **)(*(int *)this + 0x1c))(1);
  if (*(short *)((int)param_1 + 0x36) != 0) {
    FUN_00430370(*(void **)((int)this + 0x26),(int)*(short *)((int)param_1 + 0x36),local_14);
    sVar1 = *(short *)((int)local_c + 0xc);
    (**(code **)(*local_14[0] + 0xf0))(param_1,1);
    sVar3 = 1;
    if (0 < sVar1) {
      do {
        piVar2 = (int *)FUN_004308b0(local_c,sVar3);
        if (param_1 != piVar2) {
          (**(code **)(*piVar2 + 0xf0))(local_14[0],0);
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 <= sVar1);
    }
  }
  return;
}


