
/* ==== FUN_1000_031b @ 1000:031b ==== 
 * signature: undefined __cdecl16near FUN_1000_031b(void)
 * body: 1000:031b-1000:0329
 */

void __cdecl16near FUN_1000_031b(void)

{
  int *unaff_SI;
  int *unaff_DI;
  undefined2 unaff_DS;
  
  while (unaff_SI < unaff_DI) {
    unaff_DI = unaff_DI + -1;
    if ((code *)*unaff_DI != (code *)0x0) {
      (*(code *)*unaff_DI)();
    }
  }
  return;
}


