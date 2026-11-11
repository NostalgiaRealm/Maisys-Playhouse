
/* ==== __break @ 0040cbbe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040cbbe-0040cbbe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


