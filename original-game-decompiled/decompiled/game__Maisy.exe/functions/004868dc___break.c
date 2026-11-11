
/* ==== __break @ 004868dc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004868dc-004868dc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


