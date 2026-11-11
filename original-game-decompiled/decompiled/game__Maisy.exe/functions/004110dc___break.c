
/* ==== __break @ 004110dc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004110dc-004110dc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


