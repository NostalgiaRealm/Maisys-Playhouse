
/* ==== __break @ 004818b8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004818b8-004818b8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


