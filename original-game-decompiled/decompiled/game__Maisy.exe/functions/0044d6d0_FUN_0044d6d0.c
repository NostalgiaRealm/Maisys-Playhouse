
/* ==== FUN_0044d6d0 @ 0044d6d0 ==== 
 * signature: undefined __fastcall FUN_0044d6d0(void * param_1)
 * body: 0044d6d0-0044d714
 */

void __fastcall FUN_0044d6d0(void *param_1)

{
  int iVar1;
  int iVar2;
  int *local_20 [7];
  
  iVar2 = 2;
  iVar1 = FUN_0044e340((int)param_1);
  if (1 < iVar1) {
    do {
      FUN_00430370(*(void **)((int)param_1 + 0x30),iVar2,local_20);
      if (local_20[0] != (int *)0x0) {
        FUN_0044daf0(param_1,local_20[0]);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= iVar1);
  }
  return;
}


