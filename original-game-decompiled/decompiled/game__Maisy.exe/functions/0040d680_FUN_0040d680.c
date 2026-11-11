
/* ==== FUN_0040d680 @ 0040d680 ==== 
 * signature: undefined __fastcall FUN_0040d680(int * param_1)
 * body: 0040d680-0040d6ad
 */

void __fastcall FUN_0040d680(int *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  iVar1 = *param_1;
  (**(code **)(iVar1 + 0x114))();
  pcVar2 = *(code **)(iVar1 + 0x15c);
  uVar3 = (*pcVar2)(0);
  (**(code **)(iVar1 + 0x160))(0xf,uVar3);
  (*pcVar2)(0xf);
  return;
}


