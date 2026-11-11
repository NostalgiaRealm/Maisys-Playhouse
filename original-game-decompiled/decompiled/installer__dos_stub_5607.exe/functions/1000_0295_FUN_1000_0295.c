
/* ==== FUN_1000_0295 @ 1000:0295 ==== 
 * signature: undefined __cdecl16near FUN_1000_0295(void)
 * body: 1000:0295-1000:0301
 */

void __cdecl16near FUN_1000_0295(void)

{
  code *pcVar1;
  int iVar2;
  undefined2 in_CX;
  char cVar3;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  cVar3 = (char)((uint)in_CX >> 8);
  *(char *)0xb7 = cVar3;
  if ((char)in_CX == '\0') {
    FUN_1000_031b();
    FUN_1000_032a();
    FUN_1000_031b();
    if (*(int *)0x15a == -0x292a) {
      (*(code *)*(undefined2 *)0x160)();
    }
  }
  FUN_1000_031b();
  FUN_1000_032a();
  iVar2 = FUN_1000_037c();
  if (((iVar2 != 0) && (cVar3 == '\0')) && (*(int *)(unaff_BP + 4) == 0)) {
    *(undefined2 *)(unaff_BP + 4) = 0xff;
  }
  FUN_1000_0302();
  if (cVar3 == '\0') {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return;
}


