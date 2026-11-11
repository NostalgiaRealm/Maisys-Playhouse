
/* ==== FUN_0043ff10 @ 0043ff10 ==== 
 * signature: undefined __fastcall FUN_0043ff10(int * param_1)
 * body: 0043ff10-00440005
 */

/* WARNING: Removing unreachable block (ram,0x0043ffe0) */

void __fastcall FUN_0043ff10(int *param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  
  iVar1 = *param_1;
  pcVar2 = *(code **)(iVar1 + 0x244);
  iVar4 = (*pcVar2)();
  if ((iVar4 == 0) ||
     (((iVar4 = (*pcVar2)(), *(int *)(iVar4 + 0x156) != 0x6e705453 &&
       (iVar4 = (*pcVar2)(), *(int *)(iVar4 + 0x156) != 0x616e7473)) ||
      (cVar3 = FUN_00440230(param_1,0x800), cVar3 != '\0')))) {
    FUN_004401e0(param_1,2,'\0');
    FUN_0043fdc0(param_1);
    iVar4 = (*pcVar2)();
    if ((iVar4 == 0) ||
       ((iVar4 = (*pcVar2)(), *(int *)(iVar4 + 0x156) != 0x6e705453 &&
        (iVar4 = (*pcVar2)(), *(int *)(iVar4 + 0x156) != 0x616e7473)))) {
      iVar4 = FUN_00441580(param_1);
      if (iVar4 == 0) {
        FUN_004414c0(param_1,0);
        FUN_0048d08d();
      }
      FUN_0043fd60((int)param_1);
      FUN_0048d3f0();
      FUN_00440140((int)param_1);
      (**(code **)(iVar1 + 0x7c))();
    }
  }
  return;
}


