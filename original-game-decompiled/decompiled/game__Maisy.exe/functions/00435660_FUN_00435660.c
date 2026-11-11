
/* ==== FUN_00435660 @ 00435660 ==== 
 * signature: undefined __fastcall FUN_00435660(int param_1)
 * body: 00435660-004356f2
 */

void __fastcall FUN_00435660(int param_1)

{
  code *pcVar1;
  int iVar2;
  float10 fVar3;
  int local_24;
  short local_20;
  short local_1e;
  double local_1c;
  double local_14;
  undefined4 local_c;
  int local_8;
  
  iVar2 = 1;
  if (0 < *(int *)(*(int *)(param_1 + 0x7250) + 0x26)) {
    do {
      FUN_00430370(*(void **)(param_1 + 0x7250),iVar2,&local_24);
      fVar3 = FUN_0043c2f0();
      if ((float10)local_14 <= fVar3) {
        local_14 = local_1c + (double)fVar3;
        FUN_0042ff10(*(void **)(param_1 + 0x7250),iVar2,&local_24);
        pcVar1 = (code *)FUN_0048b580(local_24,(int)local_20,(int)local_1e,&local_8);
        DAT_004e34cc = (*pcVar1)(local_8,local_c);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= *(int *)(*(int *)(param_1 + 0x7250) + 0x26));
  }
  return;
}


