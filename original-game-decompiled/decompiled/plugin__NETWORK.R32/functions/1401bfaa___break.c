
/* ==== __break @ 1401bfaa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bfaa-1401bfaa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


