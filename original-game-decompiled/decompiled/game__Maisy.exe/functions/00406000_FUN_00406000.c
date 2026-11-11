
/* ==== FUN_00406000 @ 00406000 ==== 
 * signature: undefined __fastcall FUN_00406000(int * param_1)
 * body: 00406000-004060d6
 */

void __fastcall FUN_00406000(int *param_1)

{
  int iVar1;
  char cVar2;
  short sVar3;
  void *pvVar4;
  int *piVar5;
  undefined4 local_58 [21];
  
  if (*(int **)((int)param_1 + 0x9a) != (int *)0x0) {
    *(undefined1 *)((int)param_1 + 0xa9) = 0;
    cVar2 = (**(code **)(**(int **)((int)param_1 + 0x9a) + 0x2d8))();
    if ((short)param_1[0x10] == 1) {
      sVar3 = (**(code **)(**(int **)((int)param_1 + 0x9a) + 0x2d4))();
      if (sVar3 == 3) {
        *(short *)(param_1 + 0x10) = (short)param_1[0x10] + 1;
      }
    }
    if (cVar2 == '\0' && *(char *)((int)param_1 + 0xa9) == '\0') {
      if (*(int **)((int)param_1 + 0x96) == (int *)0x0) {
        FUN_00405e90(param_1);
      }
      else {
        iVar1 = **(int **)((int)param_1 + 0x96);
        sVar3 = (**(code **)(iVar1 + 0x274))();
        pvVar4 = (void *)(**(code **)(iVar1 + 0x10))();
        piVar5 = FUN_0045a920(pvVar4,sVar3);
        pvVar4 = (void *)FUN_00469fb0(piVar5);
        if (*(void **)((int)param_1 + 0x9e) == pvVar4) {
          pvVar4 = (void *)0x0;
        }
        if ((pvVar4 != (void *)0x0) && (*(void **)((int)param_1 + 0x96) != pvVar4)) {
          FUN_004142c0(local_58,0x195,0,0,0);
          FUN_0046b730(pvVar4,(int)local_58);
        }
        if (*(char *)((int)param_1 + 0xa9) == '\0') {
          FUN_00405e90(param_1);
          return;
        }
      }
    }
  }
  return;
}


