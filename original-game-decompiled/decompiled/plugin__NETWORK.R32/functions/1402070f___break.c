
/* ==== __break @ 1402070f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402070f-1402070f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


