
/* ==== __break @ 004365dc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004365dc-004365dc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


