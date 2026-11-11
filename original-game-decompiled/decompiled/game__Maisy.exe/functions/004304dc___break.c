
/* ==== __break @ 004304dc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004304dc-004304dc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


