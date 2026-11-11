
/* ==== __break @ 004950ec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004950ec-004950ec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


