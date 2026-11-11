
/* ==== __break @ 004106da ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004106da-004106da
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


