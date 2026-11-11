
/* ==== __break @ 004818bf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004818bf-004818bf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


