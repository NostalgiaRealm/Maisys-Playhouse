
/* ==== FUN_00462fe0 @ 00462fe0 ==== 
 * signature: byte __fastcall FUN_00462fe0(int * param_1)
 * body: 00462fe0-0046308a
 */

byte __fastcall FUN_00462fe0(int *param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  
  sVar4 = *(short *)((int)param_1 + 0x46);
  bVar3 = 0;
  if (sVar4 != 3) {
    if ((sVar4 == 4) || (sVar4 == 7)) goto LAB_00463078;
    if ((sVar4 == 0) && ((*(byte *)(param_1 + 10) & 0x20) == 0)) {
      sVar4 = 3;
      iVar1 = *param_1;
      (**(code **)(iVar1 + 0x2ec))();
      (**(code **)(iVar1 + 0x2e0))();
    }
    else if (sVar4 == 5) {
      sVar4 = 3;
      iVar1 = *param_1;
      (**(code **)(iVar1 + 0x2ec))();
      (**(code **)(iVar1 + 0x2e0))();
    }
    else if (sVar4 == 2) {
      sVar4 = 3;
      (**(code **)(*param_1 + 0x2e0))();
    }
    else {
      if (sVar4 == 6) {
        sVar4 = 4;
        (**(code **)(*param_1 + 0x2f0))(0,0);
        goto LAB_00463078;
      }
      sVar4 = 4;
    }
  }
  bVar3 = 1;
LAB_00463078:
  *(short *)((int)param_1 + 0x46) = sVar4;
  bVar2 = FUN_0046a150(param_1);
  return bVar3 | bVar2;
}


