
/* ==== FUN_00480fa0 @ 00480fa0 ==== 
 * signature: undefined __thiscall FUN_00480fa0(void * this, short * param_1)
 * body: 00480fa0-00481024
 */

void __thiscall FUN_00480fa0(void *this,short *param_1)

{
  char cVar1;
  short sVar2;
  int local_1c [3];
  LPVOID local_10;
  
  if (param_1 != (short *)0x0) {
    if (((*param_1 == 4) || (*param_1 == 5)) && (*(int *)(param_1 + 7) != 0)) {
      cVar1 = FUN_00440610(*(void **)((int)this + 0x5a),*(int *)(param_1 + 7),local_1c);
      if (cVar1 != '\0') {
        FUN_00440580(*(void **)((int)this + 0x5a),*(int *)(param_1 + 7));
        if (local_10 != (LPVOID)0x0) {
          FUN_00434950(local_10);
        }
        if (*param_1 == 5) {
          sVar2 = *(short *)(*(int *)((int)this + 0x5a) + 0xc2) + -1;
          if (sVar2 < 1) {
            sVar2 = 0;
          }
          *(short *)(*(int *)((int)this + 0x5a) + 0xc2) = sVar2;
        }
      }
    }
    FUN_00413790(this,param_1);
  }
  return;
}


