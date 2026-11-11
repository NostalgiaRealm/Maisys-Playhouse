
/* ==== __break @ 14008aab ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008aab-14008aab
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


