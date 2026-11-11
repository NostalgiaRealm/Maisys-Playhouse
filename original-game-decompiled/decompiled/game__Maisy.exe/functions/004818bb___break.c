
/* ==== __break @ 004818bb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004818bb-004818bb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


