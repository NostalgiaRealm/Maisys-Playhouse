
/* ==== FUN_0041e5f0 @ 0041e5f0 ==== 
 * signature: undefined1 __fastcall FUN_0041e5f0(int * param_1)
 * body: 0041e5f0-0041e628
 */

undefined1 __fastcall FUN_0041e5f0(int *param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  
  iVar1 = *param_1;
  (**(code **)(iVar1 + 0x114))();
  pcVar2 = *(code **)(iVar1 + 0x15c);
  cVar3 = (*pcVar2)(0xe);
  if ((cVar3 == '\0') && (*(char *)((int)param_1 + 0xf2) == '\0')) {
    cVar3 = (*pcVar2)(10);
    if (cVar3 == '\0') {
      return 0;
    }
  }
  return 1;
}


