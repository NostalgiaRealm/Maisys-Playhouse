
/* ==== FUN_0044aa30 @ 0044aa30 ==== 
 * signature: undefined __fastcall FUN_0044aa30(void * param_1)
 * body: 0044aa30-0044aa7a
 */

void __fastcall FUN_0044aa30(void *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_00430190((int)param_1);
  iVar2 = *(int *)((int)param_1 + 0x26) + -1;
  if (-1 < iVar2) {
    piVar3 = (int *)(iVar1 + 8 + iVar2 * 0xc);
    do {
      if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar3)(1);
      }
      if ((LPVOID)piVar3[-2] != (LPVOID)0x0) {
        FUN_0043ba20((LPVOID)piVar3[-2]);
      }
      piVar3 = piVar3 + -3;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  FUN_004301f0((int)param_1);
  FUN_0042fc00(param_1);
  return;
}


