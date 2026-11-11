
/* ==== FUN_1000_0302 @ 1000:0302 ==== 
 * signature: undefined __cdecl16near FUN_1000_0302(void)
 * body: 1000:0302-1000:031a
 */

void __cdecl16near FUN_1000_0302(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0x16a != 0) {
    (*(code *)*(undefined2 *)0x168)(0x1000);
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}


