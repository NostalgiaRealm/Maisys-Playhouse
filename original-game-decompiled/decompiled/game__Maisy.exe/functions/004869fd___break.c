
/* ==== __break @ 004869fd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004869fd-004869fd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


