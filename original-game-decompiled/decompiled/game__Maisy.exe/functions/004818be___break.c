
/* ==== __break @ 004818be ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004818be-004818be
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


