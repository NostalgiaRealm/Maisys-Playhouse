
/* ==== __break @ 0045a1df ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045a1df-0045a1df
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


