
/* ==== FUN_1000_05d1 @ 1000:05d1 ==== 
 * signature: undefined __stdcall16near FUN_1000_05d1(void)
 * body: 1000:05d1-1000:0605
 */

void FUN_1000_05d1(undefined2 param_1)

{
  char *pcVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  pcVar3 = (char *)FUN_1000_05a6(param_1);
  if (pcVar3 != (char *)0x0) {
    iVar4 = -1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar1 = pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar1 != '\0');
    if (*(int *)0x15a == -0x292a) {
      (*(code *)*(undefined2 *)0x15c)();
    }
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
  }
  return;
}


