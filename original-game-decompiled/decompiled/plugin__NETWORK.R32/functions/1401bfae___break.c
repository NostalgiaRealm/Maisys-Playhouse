
/* ==== __break @ 1401bfae ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bfae-1401bfae
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


