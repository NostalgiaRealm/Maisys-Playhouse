
/* ==== FUN_004bd490 @ 004bd490 ==== 
 * signature: undefined __stdcall FUN_004bd490(int param_1)
 * body: 004bd490-004bd4bf
 */

void FUN_004bd490(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_004bafca();
  iVar2 = *(int *)(iVar2 + 4);
  iVar3 = FUN_004a7052();
  if ((iVar3 == iVar2) && (pcVar1 = *(code **)(iVar2 + 0xb8), pcVar1 != (code *)0x0)) {
    (*pcVar1)(1,1);
  }
  PostQuitMessage(param_1);
  return;
}


