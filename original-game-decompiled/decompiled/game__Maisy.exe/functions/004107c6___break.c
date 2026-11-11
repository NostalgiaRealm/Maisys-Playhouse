
/* ==== __break @ 004107c6 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004107c6-004107c6
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


