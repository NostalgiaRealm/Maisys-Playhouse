
/* ==== __break @ 004106dd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004106dd-004106dd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


