
/* ==== __break @ 004107c8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004107c8-004107c8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


