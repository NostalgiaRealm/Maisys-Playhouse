
/* ==== __break @ 1401beed ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401beed-1401beed
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


